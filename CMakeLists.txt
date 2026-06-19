cmake_minimum_required(VERSION 3.20)
project(FireRedRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Path to the platform core. FireRed builds against a dedicated
# gbarecomp *worktree*, NOT the live ../gbarecomp tree (which is busy
# with Minish Cap). Override with -DGBARECOMP_ROOT=... if your layout
# differs.
set(GBARECOMP_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../gbarecomp-wt-firered"
    CACHE PATH "Path to the gbarecomp platform-core worktree")

if(NOT EXISTS "${GBARECOMP_ROOT}/CMakeLists.txt")
    message(FATAL_ERROR
        "GBARECOMP_ROOT does not point to a gbarecomp checkout:\n"
        "  ${GBARECOMP_ROOT}\n"
        "\n"
        "This is expected and intentional. FireRedRecomp is wired to a\n"
        "dedicated gbarecomp worktree that has NOT been created yet — we\n"
        "wait until the Minish Cap line merges to 'main' so this branches\n"
        "off a clean trunk (see README.md \"Worktree prerequisite\").\n"
        "\n"
        "When that time comes, create it:\n"
        "  cd ../gbarecomp\n"
        "  git worktree add ../gbarecomp-wt-firered -b dev/firered main\n"
        "\n"
        "Do NOT repoint GBARECOMP_ROOT at ../gbarecomp to unblock a build;\n"
        "that defeats the insulation from Minish Cap work.")
endif()

# Pull in the platform core targets (gbarecomp_runtime, gbarecomp_debug,
# gbarecomp_gba, gbarecomp_armv4t).
add_subdirectory("${GBARECOMP_ROOT}" gbarecomp_build EXCLUDE_FROM_ALL)

# ─────────────────────────────────────────────────────────────────────
# verify_rom_hash — refuses to launch the game with an unknown ROM.
# ─────────────────────────────────────────────────────────────────────
add_executable(verify_rom_hash tools/verify_rom_hash/main.cpp)

# ─────────────────────────────────────────────────────────────────────
# import_pokefirered_symbols — Python; run directly:
#   python tools/import_pokefirered_symbols/import_pokefirered_symbols.py
# Pulls (name, addr, size) from a vendored pokefirered .sym into
# symbols/. The decomp source itself never enters this repo.
# ─────────────────────────────────────────────────────────────────────

# ─────────────────────────────────────────────────────────────────────
# FireRedRecomp — the game binary. Links generated/*.c against the
# runtime libs. The Phase 0 scaffold has no generated/*.c yet, so we
# build with just main + game_config to verify the wiring compiles.
# ─────────────────────────────────────────────────────────────────────
file(GLOB FIRERED_GENERATED_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/*.cpp")

add_executable(FireRedRecomp
    src/main.cpp
    src/game_config.cpp
    ${FIRERED_GENERATED_SOURCES}
)

target_include_directories(FireRedRecomp PRIVATE
    "${GBARECOMP_ROOT}/src/armv4t"
    "${GBARECOMP_ROOT}/src/gba"
    "${GBARECOMP_ROOT}/src/runtime"
    "${GBARECOMP_ROOT}/src/debug"
    src
)

target_link_libraries(FireRedRecomp PRIVATE
    # --start-group/--end-group lets ld re-iterate the gbarecomp static
    # libs to resolve their mutual references (runtime_arm.cpp in armv4t
    # references kBiosDispatchTable defined in runtime, etc.).
    "-Wl,--start-group"
    gbarecomp_runtime
    gbarecomp_debug
    gbarecomp_gba
    gbarecomp_armv4t
    "-Wl,--end-group"
)

target_compile_definitions(FireRedRecomp PRIVATE
    GBARECOMP_DEFAULT_DEBUG_PORT=19852
    GBARECOMP_WINDOW_TITLE="FireRedRecomp"
    GBARECOMP_DEFAULT_GAME_CONFIG="game.toml"
)

# Stack reserve: 256 MB. FireRed has ~90k recompiled functions; the
# Win64 SEH unwind table (.pdata, one RUNTIME_FUNCTION per function) is
# processed with bounded recursion at process startup that scales with
# function count. Minish Cap's ~44k fits the old 16 MB; FireRed's 90k
# overflowed it (STATUS_STACK_OVERFLOW, 0xC00000FD, before main). The big
# reserve also gives the runtime headroom for deep recompiled call chains
# (guest call depth maps to host C frames). Address space only — committed
# lazily on 64-bit. Sized to cover the larger Gen3 targets too.
if(MSVC)
    target_link_options(FireRedRecomp PRIVATE /STACK:268435456)
elseif(MINGW OR WIN32)
    target_link_options(FireRedRecomp PRIVATE -Wl,--stack,268435456)
endif()
