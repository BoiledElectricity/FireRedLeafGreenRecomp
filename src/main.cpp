// main.cpp — FRLG multi-variant entry point (FireRed / LeafGreen).
//
// One source file backs every variant; the build picks the game via
// compile-defs set in CMakeLists.txt (add_gba_variant):
//
//   GBARECOMP_BUILTIN_NAME      e.g. "Pokemon FireRed (USA)"
//   GBARECOMP_BUILTIN_SHA1      expected ROM sha1 (hash gate)
//   GBARECOMP_DEFAULT_GAME_CONFIG  variants/<name>/game.toml
//   GBARECOMP_DEFAULT_DEBUG_PORT / GBARECOMP_WINDOW_TITLE  (read by runtime)
//
// Every gbarecomp game binary takes BOTH a BIOS and a ROM at launch
// (see ../gbarecomp/PRINCIPLES.md "BIOS is sacred"). The CLI accepts:
//
//   <Variant>Recomp [--bios <path>] [--rom <path>] [game.toml]
//
// All three are optional on the command line; missing values are pulled
// from game.toml. Hashes are verified before any code runs.

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

#include "runtime.h"

#ifndef GBARECOMP_BUILTIN_NAME
#define GBARECOMP_BUILTIN_NAME "GBA cartridge"
#endif
#ifndef GBARECOMP_BUILTIN_SHA1
#define GBARECOMP_BUILTIN_SHA1 ""
#endif
#ifndef GBARECOMP_WINDOW_TITLE
#define GBARECOMP_WINDOW_TITLE "gbarecomp"
#endif
#ifndef GBARECOMP_BUILTIN_CRC32
#define GBARECOMP_BUILTIN_CRC32 0
#endif
#ifndef GBARECOMP_BUILTIN_REGION
#define GBARECOMP_BUILTIN_REGION ""
#endif
#ifndef GBARECOMP_BOXART
#define GBARECOMP_BOXART ""
#endif

#if defined(GBAGAME_RECOMP_UI)
#include "game_launcher_boot.h"
#endif

#if defined(__ANDROID__)
// Redirects main() to SDL_main, which is what SDLActivity looks up in this
// shared object. Android passes no argv; the runtime resolves BIOS/ROM from
// the app's external files directory.
#include <SDL_main.h>
#endif

namespace {

void print_usage() {
    std::printf(
        "%s [--bios <path>] [--rom <path>] [game.toml]\n"
        "\n"
        "Both BIOS and ROM are required (either via flags or via the\n"
        "[bios] / [rom] sections of game.toml). The runtime refuses\n"
        "to start unless both hash-verify.\n"
        "\n"
        "Default BIOS path: ../gbarecomp/bios/gba_bios.bin\n"
        "Default game config: " GBARECOMP_DEFAULT_GAME_CONFIG " (relative to CWD)\n",
        GBARECOMP_WINDOW_TITLE);
}

}  // namespace

int main(int argc, char** argv) {
    for (int i = 1; i < argc; ++i) {
        if (std::strcmp(argv[i], "--help") == 0 ||
            std::strcmp(argv[i], "-h") == 0) {
            print_usage();
            return 0;
        }
    }

    // Built-in defaults so a standalone <Variant>Recomp.exe ships without
    // a sibling game.toml. The asset picker still validates against these
    // values; CLI / TOML can override.
    gbarecomp::RunOptions opts;
    opts.builtin_game_name = GBARECOMP_BUILTIN_NAME;
    opts.builtin_rom_sha1  = (sizeof(GBARECOMP_BUILTIN_SHA1) > 1)
                                 ? GBARECOMP_BUILTIN_SHA1
                                 : nullptr;
    // CRC32 of the pinned ROM (same dump the SHA-1 gates on); the
    // launcher's GAME card uses it for its "ROM verified" check.
    opts.builtin_rom_crc32 = GBARECOMP_BUILTIN_CRC32;
    opts.launcher_region   = (sizeof(GBARECOMP_BUILTIN_REGION) > 1)
                                 ? GBARECOMP_BUILTIN_REGION
                                 : nullptr;
    opts.launcher_boxart = (sizeof(GBARECOMP_BOXART) > 1)
                               ? GBARECOMP_BOXART
                               : nullptr;
    opts.launcher_game_config = GBARECOMP_DEFAULT_GAME_CONFIG;  // prefill ROM/BIOS

    // Expanded-view capability only. The default width stays 240, so this
    // changes nothing until a user asks for a wider one with --view-width /
    // GBARECOMP_VIEW_WIDTH. Margin content comes from the Pokemon Step C
    // sidecar, which is still WIP and needs GBARECOMP_WS_WIP=1.
    // 512 is the hardware ceiling for a 64-tile-wide background, and the
    // widest the PPU's expanded path can address. A 20:9 handheld wants ~356.
#ifdef GBARECOMP_TTS_PCS
    // Read field text aloud, for a player who cannot read yet. Baked in per
    // variant; game.toml can still override where it is reachable.
    {
        const char* p = GBARECOMP_TTS_PCS;
        while (*p) {
            char* end = nullptr;
            unsigned long v = std::strtoul(p, &end, 0);
            if (end == p) break;
            int reg = 0;
            if (*end == ':') { reg = std::atoi(end + 1); while (*end && *end != ',') ++end; }
            opts.tts_message_pcs.push_back(
                gbarecomp::TtsHook{static_cast<std::uint32_t>(v), reg});
            p = (*end == ',') ? end + 1 : end;
        }
    }
#ifdef GBARECOMP_TTS_PRINTERS
    opts.tts_printers_addr = GBARECOMP_TTS_PRINTERS;
#endif
#endif

    opts.max_view_width = 512;
    // Adaptive view: derive the logical width from the live window aspect
    // instead of a fixed number. A phone's usable window is not its panel —
    // system insets took a 2400x1080 device down to 2288x950 — so any width
    // hardcoded from the spec sheet still leaves bars.
    opts.resize_driven_view = true;
    opts.max_resize_view_width = 512;
    opts.launcher_expose_adaptive_view = true;
    opts.launcher_expose_widescreen = false;
    // Only the overworld has a world to widen into. Everywhere else — title,
    // menus, battles, the attract demo — the field background is a 32-tile
    // ring, so expanding just repeats it (two Charizards on the title screen).
    // gMain.callback2 is the game's own scene discriminator.
    // Let the widescreen margin provider actually reach the screen. Without
    // this the PPU fails margins closed and renders them black no matter what
    // the provider supplies.
    opts.ws_authored_margin_layers = 0xF;
    // Widescreen margin sidecar: the guest routines and state it drives, from
    // gbarecomp/docs/WIDESCREEN_STEPC_PLAN.md. Margins are produced by the
    // game's own DrawMetatileAt over the extended region, so what appears
    // beside the faithful 240 is real map data rather than synthesized tiles.
    opts.ws_draw_metatile_pc = 0x0805A948;   // DrawMetatileAt
    opts.ws_tilemap_ptrs     = 0x03005014;   // gBGTilemapBuffers1/2/3
    opts.ws_mapheader        = 0x02036DFC;   // gMapHeader
    opts.ws_curcoords        = 0x02036E48;   // gObjectEvents[0].currentCoords
    opts.view_gate_addr  = 0x030030F4;   // gMain 0x030030F0, callback2 at +4
    opts.view_gate_value = 0x080565B4;   // CB2_Overworld

#if defined(GBAGAME_RECOMP_UI)
    std::vector<std::string> args(argv, argv + argc);
    if (game_launcher_preboot(args, opts)) return 0;   // user quit the launcher
    std::vector<char*> av;
    av.reserve(args.size());
    for (auto& s : args) av.push_back(s.data());
    return gbarecomp::run_game(static_cast<int>(av.size()), av.data(), opts);
#else
    return gbarecomp::run_game(argc, argv, opts);
#endif
}
