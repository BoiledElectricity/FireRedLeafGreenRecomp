# FireRedRecomp

Static recompilation of *Pokémon FireRed Version* (GBA), built on top
of [`gbarecomp`](../gbarecomp).

This is a **recomp**, not a port and not a decomp. We take the original
ROM's ARM/THUMB machine code and lift it to native C/C++ that runs
against a principled GBA hardware/runtime model.

The decomp at [`pret/pokefirered`](https://github.com/pret/pokefirered)
is a valuable reference for symbols, function boundaries, ROM layout,
and asset labels. It is **not** an execution oracle and we do not lift
its toolchain output as ground truth. Only symbol metadata (names,
addresses, sizes) enters this repo, via
`tools/import_pokefirered_symbols/`.

---

## ⚠️ Worktree prerequisite — building is paused, by design

**Do not configure/build/recompile yet.** This game's build is wired to
a dedicated `gbarecomp` **git worktree**, not the live `../gbarecomp`
tree — and that worktree has not been created yet.

Why a worktree, and why paused:

- The live `../gbarecomp` tree is in the middle of heavy **Minish Cap**
  work (branch `spike/finder-heuristics`, with uncommitted changes).
  Doing FireRed tool work there would step on that effort.
- A worktree gives FireRed its own checkout + build dir of the *same*
  tool repo, fully insulating Minish Cap.
- We are intentionally waiting until the Minish Cap line **merges to
  `main`**, so FireRed branches off a clean trunk that already contains
  the latest finder-heuristics work.

When that time comes (and only then), create the worktree:

```sh
# from the gbarecomp tool repo
cd ../gbarecomp
git worktree add ../gbarecomp-wt-firered -b dev/firered main
```

`CMakeLists.txt` defaults `GBARECOMP_ROOT` to `../gbarecomp-wt-firered`
and **fails loud** with this same reminder until that path exists. Do
not repoint it at `../gbarecomp` to "unblock" a build — that defeats
the insulation.

Everything below this line that does **not** need the tool (ROM,
symbols, configs) is already scaffolded and safe to work on now.

---

## What this repo contains

| Path                | Purpose                                                       |
|---------------------|---------------------------------------------------------------|
| `game.toml`         | ROM identity, entry point, save chip, recompiler config.      |
| `baserom.md`        | Documented ROM hashes and where the user puts their ROM.      |
| `config/`           | Per-region configs layered on `game.toml`.                    |
| `symbols/`          | Imported symbol map + function boundaries (TSV) + master list.|
| `generated/`        | Output of `gba_recompile`. **Never** hand-edited.             |
| `src/main.cpp`      | Game runner entry point (links against `gbarecomp_runtime`).  |
| `src/game_config.*` | Game-specific config wiring.                                  |
| `tools/`            | Symbol importer + ROM hash verifier.                          |
| `third_party/`      | Vendored `pret/pokefirered` (reference only; gitignored).     |

---

## Build (once the worktree exists)

```sh
cmake -B build -S . -DGBARECOMP_ROOT=../gbarecomp-wt-firered
cmake --build build
```

This produces `verify_rom_hash` and (once functions are recompiled)
`FireRedRecomp`, linked against the generated C and `gbarecomp_runtime`.

---

## Symbols

`tools/import_pokefirered_symbols/import_pokefirered_symbols.py` parses
pokefirered's prebuilt `.sym` (vendored under `third_party/`) into
`symbols/`. Re-run any time:

```sh
python tools/import_pokefirered_symbols/import_pokefirered_symbols.py
```

Function vs data classification is **heuristic** (the `.sym` has no type
field); see `symbols/README.md`. The recompiler's discovery loop is the
authority. The plan is to seed every known symbol, then back entries out
of the seed as the heuristic finder rediscovers them — measuring the
finder by how much of the decomp's map it can recover unaided.

---

## Status

Phase 0 — pre-build scaffold. ROM hash verified (`41cb23d8…`), symbols
imported, build intentionally gated on the (not-yet-created) tool
worktree. No functions recompiled, no boot path validated. Do **not**
claim boot progress before each milestone in `CLAUDE.md` is measured.

---

## Provide your own ROM

We don't distribute the ROM. The verified dump lives in `roms/`
(gitignored). The runner verifies SHA-1 before doing anything and
refuses to start on an unrecognized hash. See `baserom.md`.
