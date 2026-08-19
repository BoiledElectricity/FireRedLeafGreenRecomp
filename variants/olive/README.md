# Olive variant

Pokémon Olive is a pokefirered decomp fork, vendored as the `pokemon-olive/`
submodule. That split is the point: gameplay, data and asset changes belong in
Olive's own repo, and only the recompilation of its built ROM belongs here.

## What lives where

| Change | Repo |
|---|---|
| Maps, scripts, species, balance, graphics | `pokemon-olive/` |
| Recompiling that ROM, runtime, host, save handling | this repo + `gbarecomp/` |

Olive builds to a byte-matching ELF, so its symbols are exact — every function
boundary comes from `st_size` rather than being a seed the recompiler's
discovery walk has to refine. That makes it a better recompiler input than the
games it descends from.

## Regenerating after an Olive change

Build Olive, then re-import and recompile:

```sh
# 1. in pokemon-olive/, produce "Pokemon Olive.gba" + .elf
make -j

# 2. ELF metadata (llvm-readelf; binutils readelf works too)
llvm-readelf -sW "pokemon-olive/Pokemon Olive.elf" > /tmp/olive_syms.txt
llvm-readelf -SW "pokemon-olive/Pokemon Olive.elf" > /tmp/olive_sections.txt
cp "pokemon-olive/Pokemon Olive.gba" variants/olive/roms/olive.gba

# 3. symbols -> olive.toml + the three TSVs
python3 tools/import_pokefirered_symbols/import_decomp_symbols.py \
    --name "Pokemon Olive" --id olive \
    --syms /tmp/olive_syms.txt --sections /tmp/olive_sections.txt \
    --rom variants/olive/roms/olive.gba --out variants/olive/symbols

# 4. recompile
build/gbarecomp_build/gba_recompile \
    --rom variants/olive/roms/olive.gba \
    --config variants/olive/symbols/olive.toml \
    --symbols variants/olive/symbols/imported_symbols.tsv \
    --out variants/olive/generated
```

The ROM's SHA-1 changes on every Olive build, so step 3 rewrites `[identity]`
in `olive.toml` and the `add_gba_variant()` hash in the top-level
`CMakeLists.txt` has to be updated to match, or the runtime's hash gate
refuses to launch.

## Saves

Flash 1M, same as its FireRed base, so RetroArch/mGBA `.srm` files are a
byte-for-byte swap with `variants/olive/roms/olive.sav`.
