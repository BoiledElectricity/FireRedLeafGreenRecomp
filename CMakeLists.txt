cmake_minimum_required(VERSION 3.20)
project(FireRedRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ─────────────────────────────────────────────────────────────────────
# FRLG multi-variant recomp.
#
# This repo hosts BOTH Pokémon FireRed and Pokémon LeafGreen as separate
# native targets that share one source tree and one gbarecomp platform
# core — the Sonic3AndKnucklesRecomp pattern (one repo, an add_*_variant()
# function emitting one executable per game). Per-variant data lives under
# variants/<name>/ (game.toml + config/ + symbols/ + generated/ + roms/).
#
#   Target            Game                 ROM rev   Debug port
#   FireRedRecomp     Pokémon FireRed      rev0      19852
#   LeafGreenRecomp   Pokémon LeafGreen    rev1      19862
# ─────────────────────────────────────────────────────────────────────

# Platform core. Builds against the live gbarecomp checkout on main
# ("gbarecomp as it is today"). Override with -DGBARECOMP_ROOT=... .
set(GBARECOMP_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/gbarecomp"
    CACHE PATH "Path to the gbarecomp platform-core checkout")

# Optimization level for the generated guest shards. -O1 keeps a ~90k-function
# corpus compiling in reasonable time while iterating; raise it for play builds.
set(GBAGAME_SHARD_OPT "-O1" CACHE STRING
    "Optimization flag applied to the generated recompiled_NNN.cpp shards")

if(NOT EXISTS "${GBARECOMP_ROOT}/CMakeLists.txt")
    message(FATAL_ERROR
        "GBARECOMP_ROOT does not point to a gbarecomp checkout:\n"
        "  ${GBARECOMP_ROOT}\n"
        "Point it at the engine checkout (default ../gbarecomp) or pass\n"
        "-DGBARECOMP_ROOT=<path> at configure time.")
endif()

# Pull in the platform core targets (gbarecomp_runtime, gbarecomp_debug,
# gbarecomp_gba, gbarecomp_armv4t) once; every variant links them.
add_subdirectory("${GBARECOMP_ROOT}" gbarecomp_build EXCLUDE_FROM_ALL)

# ─────────────────────────────────────────────────────────────────────
# verify_rom_hash — refuses to launch a game with an unknown ROM. Shared
# across variants (it takes the ROM path + expected sha1 as arguments).
# ─────────────────────────────────────────────────────────────────────
if(NOT ANDROID)
    add_executable(verify_rom_hash tools/verify_rom_hash/main.cpp)
endif()

# ─────────────────────────────────────────────────────────────────────
# add_gba_variant(<target> <name> <port> <win_title> <game_name> <sha1>
#                  <crc32>)
#   Builds one native game binary from src/main.cpp + the variant's
#   generated/*.{c,cpp}. Before the recompile has run, generated/ is empty
#   and the target is a thin scaffold (main only) that still validates the
#   wiring. game.toml is selected at runtime via the compile-def below.
# ─────────────────────────────────────────────────────────────────────
function(add_gba_variant TARGET NAME PORT WIN_TITLE GAME_NAME ROM_SHA1 ROM_CRC32)
    set(VARIANT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/variants/${NAME}")
    if(EXISTS "${VARIANT_DIR}/generated/recompiled.cpp")
        message(FATAL_ERROR
            "${NAME}: stale monolithic generated/recompiled.cpp found. "
            "Regenerate with the current gba_recompile before building.")
    endif()
    file(GLOB VARIANT_GENERATED CONFIGURE_DEPENDS
        "${VARIANT_DIR}/generated/*.c"
        "${VARIANT_DIR}/generated/*.cpp")

    # Before gba_recompile has run, generated/ holds no dispatch table. Link
    # the engine's empty one so the scaffold still builds end to end.
    set(VARIANT_SCAFFOLD_SOURCES "")
    if(NOT VARIANT_GENERATED)
        set(VARIANT_SCAFFOLD_SOURCES
            "${GBARECOMP_ROOT}/tools/bios_smoke/dispatch_stub.cpp")
        message(STATUS
            "${NAME}: generated/ empty — scaffold build (no cart dispatch table)")
    endif()

    if(ANDROID)
        # SDLActivity loads libSDL2.so then this library, and calls SDL_main.
        add_library(${TARGET} SHARED
            src/main.cpp
            ${VARIANT_GENERATED}
            ${VARIANT_SCAFFOLD_SOURCES})
    else()
        add_executable(${TARGET}
            src/main.cpp
            ${VARIANT_GENERATED}
            ${VARIANT_SCAFFOLD_SOURCES})
    endif()

    # Keep the very large generated guest translation units at a bounded
    # optimization/debug-info cost. gba_recompile emits deterministic
    # recompiled_NNN.cpp shards. Raise GBAGAME_SHARD_OPT for a build meant to
    # be played rather than iterated on — it costs compile time.
    set(VARIANT_RECOMPILED ${VARIANT_GENERATED})
    list(FILTER VARIANT_RECOMPILED INCLUDE REGEX
        "/recompiled_[0-9]+\\.cpp$")
    if(VARIANT_RECOMPILED)
        set_source_files_properties(${VARIANT_RECOMPILED} PROPERTIES
            COMPILE_OPTIONS "${GBAGAME_SHARD_OPT};-g0")
    endif()

    target_include_directories(${TARGET} PRIVATE
        "${GBARECOMP_ROOT}/src/armv4t"
        "${GBARECOMP_ROOT}/src/gba"
        "${GBARECOMP_ROOT}/src/runtime"
        "${GBARECOMP_ROOT}/src/debug"
        src)

    if(APPLE)
        # Apple's ld has no --start-group; it resolves archive cycles on its
        # own, so the libraries are listed plainly.
        target_link_libraries(${TARGET} PRIVATE
            gbarecomp_runtime
            gbarecomp_debug
            gbarecomp_gba
            gbarecomp_armv4t)
    else()
        target_link_libraries(${TARGET} PRIVATE
            # --start-group lets ld re-iterate the gbarecomp static libs to
            # resolve their mutual references.
            "-Wl,--start-group"
            gbarecomp_runtime
            gbarecomp_debug
            gbarecomp_gba
            gbarecomp_armv4t
            "-Wl,--end-group")
    endif()

    target_compile_definitions(${TARGET} PRIVATE
        GBARECOMP_DEFAULT_DEBUG_PORT=${PORT}
        GBARECOMP_WINDOW_TITLE="${WIN_TITLE}"
        GBARECOMP_DEFAULT_GAME_CONFIG="variants/${NAME}/game.toml"
        GBARECOMP_BUILTIN_NAME="${GAME_NAME}"
        GBARECOMP_BUILTIN_SHA1="${ROM_SHA1}"
        GBARECOMP_BUILTIN_CRC32=${ROM_CRC32}
        GBARECOMP_BUILTIN_REGION="USA")

    if(GBAGAME_RECOMP_UI)
        target_link_libraries(${TARGET} PRIVATE game_launcher_ui)
        # Per-variant box art: variants share one build dir, so each stages
        # its own file and points its exe at it (RunOptions.launcher_boxart).
        set(VARIANT_BOXART "${VARIANT_DIR}/launcher/boxart.tga")
        if(EXISTS "${VARIANT_BOXART}")
            add_custom_command(TARGET ${TARGET} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                    $<TARGET_FILE_DIR:${TARGET}>/assets/img
                COMMAND ${CMAKE_COMMAND} -E copy_if_different
                    "${VARIANT_BOXART}"
                    $<TARGET_FILE_DIR:${TARGET}>/assets/img/boxart_${NAME}.tga
                VERBATIM)
            target_compile_definitions(${TARGET} PRIVATE
                GBARECOMP_BOXART="assets/img/boxart_${NAME}.tga")
        endif()
    endif()

    # Stack reserve: 256 MB. Gen3 ROMs lift to ~90k functions; the Win64
    # SEH unwind table is processed with bounded recursion at startup that
    # scales with function count (Minish Cap's ~44k fit 16 MB; FireRed's
    # 90k overflowed it before main). Also gives headroom for deep
    # recompiled call chains (guest depth -> host C frames).
    if(MSVC)
        target_link_options(${TARGET} PRIVATE /STACK:268435456)
    elseif(MINGW OR WIN32)
        target_link_options(${TARGET} PRIVATE -Wl,--stack,268435456)
    endif()
endfunction()

# ─────────────────────────────────────────────────────────────────────
# recomp-ui pre-boot launcher (Dear ImGui), consumed as a git submodule
# (junctioned locally to the shared checkout). Isolated in its own
# static lib so recomp-ui's sources + RECOMP_LAUNCHER define never
# touch the giant generated/*.c TU flags — only main.cpp (gated on
# GBAGAME_RECOMP_UI) and launcher_boot.cpp know the launcher exists.
# ─────────────────────────────────────────────────────────────────────
if(ANDROID)
    set(GBAGAME_RECOMP_UI_DEFAULT OFF)
else()
    set(GBAGAME_RECOMP_UI_DEFAULT ON)
endif()
option(GBAGAME_RECOMP_UI "Build the recomp-ui pre-boot launcher"
       ${GBAGAME_RECOMP_UI_DEFAULT})
if(GBAGAME_RECOMP_UI)
    include(${CMAKE_CURRENT_SOURCE_DIR}/recomp-ui/recomp_ui.cmake)
    add_library(game_launcher_ui STATIC src/game_launcher_boot.cpp)
    target_include_directories(game_launcher_ui PRIVATE
        "${GBARECOMP_ROOT}/src/runtime"   # launcher_seam.h + runtime.h
        "${GBARECOMP_ROOT}/src/gba"
        src
    )
    recomp_target_launcher_ui(game_launcher_ui CONSOLE gba)   # sources, includes, RECOMP_LAUNCHER, asset staging
    find_package(SDL2 REQUIRED)
    target_link_libraries(game_launcher_ui PUBLIC SDL2::SDL2)
    if(WIN32)
        target_link_libraries(game_launcher_ui PUBLIC opengl32)
    endif()
    set_property(SOURCE src/main.cpp APPEND PROPERTY COMPILE_DEFINITIONS GBAGAME_RECOMP_UI)
endif()

# FireRed  — rev0, sha1 41cb23d8…
add_gba_variant(FireRedRecomp   firered   19852 "FireRedRecomp"
    "Pokemon FireRed (USA)"  "41cb23d8dccc8ebd7c649cd8fbb58eeace6e2fdc" 0xDD88761C)

# Olive — a pokefirered decomp fork. Its symbols come from the mod's own ELF,
# so boundaries are exact instead of discovered.
add_gba_variant(OliveRecomp     olive     19872 "OliveRecomp"
    "Pokemon Olive" "4f1bfd063ad9abe3d2a817dcc90311a9e368e49d" 0x9E4111BE)

# LeafGreen — rev0 / v1.0, sha1 574fa542… (definitive build, matches FireRed
# v1.0; rev1 7862c67b work archived in ../../../_gen3_leafgreen_rev1_archive/).
add_gba_variant(LeafGreenRecomp leafgreen 19862 "LeafGreenRecomp"
    "Pokemon LeafGreen (USA)" "574fa542ffebb14be69902d1d36f1ec0a4afd71e" 0xD69C96CC)
