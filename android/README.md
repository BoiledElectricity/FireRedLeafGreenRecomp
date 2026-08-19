# Android build

Builds `FireRedRecomp` / `LeafGreenRecomp` as arm64 Android apps. The engine
is the same `gbarecomp` static-recompilation runtime the desktop targets use —
only the host shell differs: SDL2 is compiled from source into the APK, and
`SDLActivity` loads the game library and calls `SDL_main`.

## Prerequisites

- JDK 17 or newer
- Android SDK with platform 35 and CMake 3.31.6
- NDK **28.2.13676358**
- Submodules checked out, including SDL2 inside the engine:

```sh
git submodule update --init --recursive
```

Point Gradle at the SDK with `ANDROID_SDK_ROOT`, or write `local.properties`:

```
sdk.dir=/Users/you/Library/Android/sdk
```

## Build

```sh
cd android
./gradlew assembleDebug                # both games
./gradlew assembleFireredDebug         # just FireRed
./gradlew assembleLeafgreenDebug       # just LeafGreen
```

APKs land in `app/build/outputs/apk/<flavor>/debug/`.

Each flavor gets its own CMake build tree, so the two games do not share
generated code and can build in parallel.

## Installing the BIOS and ROM

The APK ships no game content. Both files are read from the app's external
files directory, which needs no runtime permission and is reachable from any
file manager or over USB:

```
/sdcard/Android/data/com.mstan.frlgrecomp.firered/files/
/sdcard/Android/data/com.mstan.frlgrecomp.leafgreen/files/
```

Copy the GBA BIOS and the matching ROM in there under any name — the runtime
identifies them by size and SHA-1, not by filename, and the usual hash gate
applies. `adb push` works too:

```sh
adb push gba_bios.bin /sdcard/Android/data/com.mstan.frlgrecomp.firered/files/
adb push firered.gba  /sdcard/Android/data/com.mstan.frlgrecomp.firered/files/
```

The resolved paths are cached in that directory, so later launches skip the
scan.

## Controls

**Gamepad** — any controller Android exposes works, including clamp-on
handhelds (GameSir and friends). Hotplug is handled live.

| GBA | Controller |
|---|---|
| A | South (`A`) |
| B | East (`B`) |
| Start / Select | Start / Back |
| L / R | Shoulders, or triggers |
| D-pad | D-pad, or left stick |

South-is-A matches mGBA and the wider GB/GBA emulator default. Set
`GBARECOMP_PAD_SWAP_AB=1` for the positional reading, where GBA A sits on the
east button.

**Touch** — an on-screen pad is drawn over the frame when no controller is
attached, and stands down as soon as one is. `GBARECOMP_TOUCH=0` disables it;
`GBARECOMP_TOUCH_ALPHA` (0-255) sets its opacity.

## What is different from the desktop build

- **Self-healing recompilation is off.** The desktop runtime emits C for an
  uncovered function, shells out to `g++`/`tcc`, and loads the resulting DLL.
  Android has no on-device toolchain, and since Android 10 an app cannot
  `dlopen` a library it wrote into its own data directory. Uncovered paths
  therefore stay on the interpreter. The fix is to pre-bake: harvest
  `recomp_cache/<image_sha1>/` from desktop play and fold those functions into
  the static corpus the Android build compiles.
- **No pre-boot launcher.** `recomp-ui` needs desktop OpenGL, so
  `GBAGAME_RECOMP_UI` defaults off here. The in-game runtime UI is unaffected —
  it renders through `SDL_Renderer`.
- **The game runs on a 256 MB stack** created by the runtime, because
  `SDLActivity` starts `SDL_main` on a ~1 MB Java thread that deep recompiled
  call chains would overflow.
- **Host tools are not configured.** `gba_recompile` and the ctest suite are
  build-machine binaries; run the recompile on desktop and build the APK
  against the generated sources.
