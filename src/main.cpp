// main.cpp — FireRedRecomp entry point.
//
// Every gbarecomp game binary takes BOTH a BIOS and a ROM at launch
// (see ../gbarecomp/PRINCIPLES.md "BIOS is sacred"). The CLI accepts:
//
//   FireRedRecomp [--bios <path>] [--rom <path>] [game.toml]
//
// All three are optional on the command line; missing values are
// pulled from game.toml. Hashes are verified before any code runs.

#include <cstdio>
#include <cstring>
#include <string>

#include "runtime.h"

namespace {

void print_usage() {
    std::printf(
        "FireRedRecomp [--bios <path>] [--rom <path>] [game.toml]\n"
        "\n"
        "Both BIOS and ROM are required (either via flags or via the\n"
        "[bios] / [rom] sections of game.toml). The runtime refuses\n"
        "to start unless both hash-verify.\n"
        "\n"
        "Default BIOS path: ../gbarecomp/bios/gba_bios.bin\n"
        "Default game config: game.toml (in CWD)\n");
}

}  // namespace

__attribute__((constructor(101)))
static void firered_ctor_probe(void) {   // crash-localization marker (survives crash)
    std::FILE* f = std::fopen("F:/Projects/gbarecomp/FireRedRecomp/PROBE_CTOR.txt", "w");
    if (f) { std::fputs("ctor ran\n", f); std::fclose(f); }
}

int main(int argc, char** argv) {
    { std::FILE* f = std::fopen("F:/Projects/gbarecomp/FireRedRecomp/PROBE_MAIN.txt", "w");
      if (f) { std::fputs("main ran\n", f); std::fclose(f); } }
    std::printf("FireRedRecomp (Phase 0 scaffold: pre-build)\n");

    for (int i = 1; i < argc; ++i) {
        if (std::strcmp(argv[i], "--help") == 0 ||
            std::strcmp(argv[i], "-h") == 0) {
            print_usage();
            return 0;
        }
    }

    // Built-in defaults so a standalone FireRedRecomp.exe ships without
    // a sibling game.toml. The picker still validates against these
    // values; CLI / TOML can override.
    gbarecomp::RunOptions opts;
    opts.builtin_game_name  = "Pokemon FireRed (USA)";
    opts.builtin_rom_sha1   = "41cb23d8dccc8ebd7c649cd8fbb58eeace6e2fdc";
    // CRC32 is informational only; leave it 0 so the SHA-only picker
    // doesn't warn on a value we'd otherwise keep in lockstep.
    opts.builtin_rom_crc32  = 0;
    return gbarecomp::run_game(argc, argv, opts);
}
