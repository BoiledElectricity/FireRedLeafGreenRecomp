#!/usr/bin/env python3
"""Find a map exit by sweeping columns, reloading the checkpoint each attempt.

Walking blind accumulates position error; reloading makes every attempt start
from the same tile, so the sweep actually covers distinct columns.
"""
import struct, sys
sys.path.insert(0, "/Users/jamesdellamorte/FireRedLeafGreenRecomp/tools/ws_harness")
from drive import Dbg, launch

GMAPHEADER = 0x02036DFC
exe, state = sys.argv[1], sys.argv[2]
view = int(sys.argv[3]) if len(sys.argv) > 3 else 384

def layout(d):
    r = d.cmd(cmd="read_ewram", addr=hex(GMAPHEADER), len=4)
    data = r.get("data") or ""
    return struct.unpack("<I", bytes.fromhex(data[:8]))[0] if len(data) >= 8 else 0

p = launch(exe, extra_env={"GBARECOMP_WS_WIP": "1"}, view_width=view)
try:
    d = Dbg()
    d.cmd(cmd="savestate_load", path=state)
    base = layout(d)
    print("base layout", hex(base))

    for side in ("left", "right"):
        for cols in range(0, 9):
            d.cmd(cmd="savestate_load", path=state)
            for _ in range(cols):
                d.keys(side); d.run(24)
            d.keys(); d.run(10)
            for step in range(14):
                d.keys("down"); d.run(24)
                cur = layout(d)
                if cur != base:
                    d.keys(); d.run(120)
                    w, h = d.screenshot("/tmp/ws_outside.png")
                    d.cmd(cmd="savestate_save", path="/tmp/frlg_outside.gbas")
                    print("EXIT via %s+%d then down x%d -> %s (%dx%d)" %
                          (side, cols, step + 1, hex(cur), w, h))
                    # Walk into open ground so the camera is off the map edge.
                    for _ in range(10):
                        d.keys("down"); d.run(24)
                    d.keys(); d.run(90)
                    d.screenshot("/tmp/ws_outside_walked.png")
                    d.cmd(cmd="savestate_save", path="/tmp/frlg_outside_walked.gbas")
                    raise SystemExit(0)
    print("no exit found")
finally:
    p.terminate()
