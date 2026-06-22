# FireRedRecomp — Pokémon FireRed + LeafGreen

Static recompilation of *Pokémon FireRed* and *Pokémon LeafGreen* (GBA),
built on top of [`gbarecomp`](../gbarecomp).

One repo hosts **both** games as separate native targets that share one
source tree and one engine — the
[Sonic3AndKnucklesRecomp](../../segagenesisrecomp/Sonic3AndKnucklesRecomp)
pattern (an `add_gba_variant()` CMake function emits one executable per
game). FireRed and LeafGreen are the same engine built from one decomp
(`pret/pokefirered`, different `GAME_VERSION` target), so they live
together here. Their Gen3 siblings are `../RubySapphireRecomp` and
`../EmeraldRecomp`.

This is a **recomp**, not a port and not a decomp. The original ROM's
ARM/THUMB machine code is lifted to native C/C++ that runs against a
principled GBA hardware/runtime model. Only symbol metadata (names,
addresses, sizes) from [`pret/pokefirered`](https://github.com/pret/pokefirered)
enters this repo, via `tools/import_pokefirered_symbols/`.

---

## Variants

| Target            | Game      | ROM rev | sha1        | Debug port |
|-------------------|-----------|---------|-------------|------------|
| `FireRedRecomp`   | FireRed   | rev0    | `41cb23d8…` | 19852      |
| `LeafGreenRecomp` | LeafGreen | rev1    | `7862c67b…` | 19862      |

The on-disk LeafGreen dump is rev1 (no rev0 here), so that variant targets
the `leafgreen_rev1` decomp build.

## Layout

```
FireRedRecomp/
  CMakeLists.txt              two add_gba_variant() targets
  src/main.cpp                variant-agnostic entry (builtins via compile-defs)
  variants/firered/          ┐ each: game.toml + config/ + symbols/
  variants/leafgreen/        ┘       + generated/ + roms/
  third_party/pokefirered/    vendored decomp (reference only; gitignored)
  tools/import_pokefirered_symbols/  readelf/nm dump → symbols/
  tools/verify_rom_hash/
```

Each `variants/<name>/game.toml` is self-contained: ROM/BIOS/save/port
facts, with all paths resolved relative to that file's directory.

---

## Build & run

Builds against the **live `../gbarecomp` checkout on `main`** ("gbarecomp
as it is today"). MSYS2 mingw64 + Ninja; invoke the build from PowerShell
(the Bash sandbox forces `TEMP=C:\Windows`, which breaks `cc1plus`).

```sh
# (one-time) regenerate symbols from a byte-matching pokefirered WSL build
#   FireRed:  symbols already committed under variants/firered/symbols/
#   LeafGreen: see ../_gen3_build_symbols.sh + import_decomp_symbols.py

# recompile a variant → variants/<name>/generated/
../gbarecomp/build/gba_recompile.exe \
    --rom variants/leafgreen/roms/leafgreen_usa.gba \
    --config variants/leafgreen/symbols/leafgreen_usa.toml \
    --out variants/leafgreen/generated

# configure + build (both targets, or one)
cmake -G Ninja -S . -B build
cmake --build build --target FireRedRecomp   -j
cmake --build build --target LeafGreenRecomp -j

# run (BIOS + ROM both hash-verify or the runtime refuses to start)
./build/FireRedRecomp.exe
./build/LeafGreenRecomp.exe
```

---

## Status

- **FireRed** — boots copyright → intro → **title screen** (milestone 7).
  rev0, `41cb23d8…`. Three early freezes fixed (see project history).
- **LeafGreen** — scaffolded + recompiled against gbarecomp `main`
  @ `a4e22d7` (90,119 functions; one mis-modeled lib switch self-heals,
  see below). Boot bring-up follows the same milestone ladder.

### Note on the LeafGreen / Emerald auto-jt self-heal
LeafGreen rev1 (and Emerald) contain a packed THUMB switch the recompiler's
abs32 auto-jump-table detector mis-models, producing branches that appear
to enter the table's own data bytes. The recompiler now treats
control-flow into an **auto-detected** jump_table as a non-fatal warning
(the bytes stay data, residual branches resolve through the runtime's
honest self-heal path) while still hard-erroring on authoritative
`[[data_range]]` / manual `[[jump_table]]` collisions. The fix lives in
`gbarecomp/src/recompile/function_finder.cpp` + `tools/gba_recompile/main.cpp`.

---

## Provide your own ROM

We don't distribute ROMs. Verified dumps live in `variants/<name>/roms/`
(gitignored). The runner verifies SHA-1 before doing anything and refuses
to start on an unrecognized hash. See each variant's `config/<region>.toml`.
