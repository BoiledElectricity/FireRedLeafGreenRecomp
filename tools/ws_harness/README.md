# ws_harness — drive the game over TCP and capture frames

Widescreen work needs the same scene rendered repeatedly under different
settings. Playing to that scene by hand each time is not repeatable, so these
scripts drive the debug server (`--tcp 19852`) instead: input, frame stepping,
savestates, and framebuffer capture at the *active* view width.

    drive.py <exe> [view_width]        boot -> overworld, checkpoint + shoot
    findexit.py <exe> <state> [w]      sweep columns to find a map exit
    motion.py <exe> <state> [w]        capture mid-scroll, where artifacts live
    sidecar.py <exe> <state> on|off <out>   Step C sidecar A/B
    title.py <exe> <out> [policy]      cold boot to the attract screens

Checkpoints and captures land in /tmp. Reaching the overworld from a cold boot
takes ~4800 frames of intro, so do it once and reuse the savestate.

Walking blind accumulates position error; findexit.py reloads the checkpoint
before each attempt so a sweep really does cover distinct columns.

## Correctness gate

The faithful view must be untouched by expansion — the central 240 columns of
a wide frame have to be byte-identical to a 240-wide capture of the same
savestate. `magick compare -metric AE` over the cropped centre is the check.
