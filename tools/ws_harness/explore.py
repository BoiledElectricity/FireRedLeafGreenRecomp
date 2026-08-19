#!/usr/bin/env python3
"""Load the overworld checkpoint, walk outdoors, and capture a strip of frames."""
import sys, time
sys.path.insert(0, "/Users/jamesdellamorte/FireRedLeafGreenRecomp/tools/ws_harness")
from drive import Dbg, launch, png

exe = sys.argv[1]
view = int(sys.argv[2]) if len(sys.argv) > 2 else 384

p = launch(exe, extra_env={"GBARECOMP_WS_WIP": "1"}, view_width=view)
try:
    d = Dbg()
    print(d.cmd(cmd="savestate_load", path="/tmp/frlg_overworld.gbas"))
    # Downstairs, then out the front door: south until the map changes, with A
    # taps to clear any prompt that interrupts the walk.
    plan = [("down", 240), ("a", 20), ("down", 240), ("a", 20),
            ("down", 300), ("a", 20), ("down", 300),
            ("left", 120), ("down", 200), ("right", 200), ("up", 120)]
    shot = 0
    for keys, frames in plan:
        step = 60
        for _ in range(0, frames, step):
            d.keys(keys)
            d.run(step)
        d.keys()
        d.run(20)
        w, h = d.screenshot("/tmp/ws_walk_%02d.png" % shot)
        print("shot %02d after %-6s %dx%d" % (shot, keys, w, h))
        shot += 1
finally:
    p.terminate()
