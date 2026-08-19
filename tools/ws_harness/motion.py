#!/usr/bin/env python3
"""Capture frames DURING camera scroll, where the margin artifacts live."""
import sys
sys.path.insert(0, "/Users/jamesdellamorte/FireRedLeafGreenRecomp/tools/ws_harness")
from drive import Dbg, launch

exe, state = sys.argv[1], sys.argv[2]
view = int(sys.argv[3]) if len(sys.argv) > 3 else 384

p = launch(exe, extra_env={"GBARECOMP_WS_WIP": "1"}, view_width=view)
try:
    d = Dbg()
    d.cmd(cmd="savestate_load", path=state)
    shot = 0
    # No settling: hold the direction and grab a frame every few frames so the
    # capture lands mid-scroll.
    for direction in ("right", "down", "left", "up"):
        for i in range(6):
            d.keys(direction)
            d.run(4)
            d.screenshot("/tmp/mo_%s_%d.png" % (direction, i))
            shot += 1
    d.keys()
    print("captured", shot, "in-motion frames")
finally:
    p.terminate()
