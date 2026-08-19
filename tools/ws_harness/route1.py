#!/usr/bin/env python3
"""Walk north out of Pallet Town and checkpoint the moment the map changes.

Map connections are where the neighbouring tileset may not be loaded, so this
is the scene the widescreen margins most need proving against.
"""
import struct, sys
sys.path.insert(0, "/Users/jamesdellamorte/FireRedLeafGreenRecomp/tools/ws_harness")
from drive import Dbg, launch

GMAPHEADER = 0x02036DFC
exe, state = sys.argv[1], sys.argv[2]

def layout(d):
    r = d.cmd(cmd="read_ewram", addr=hex(GMAPHEADER), len=4)
    data = r.get("data") or ""
    return struct.unpack("<I", bytes.fromhex(data[:8]))[0] if len(data) >= 8 else 0

p = launch(exe, extra_env={"GBARECOMP_WS_WIP": "1"}, view_width=384)
try:
    d = Dbg()
    d.cmd(cmd="savestate_load", path=state)
    base = layout(d)
    print("pallet layout", hex(base))
    HOUSE = 0x082D5200          # ground floor: walking up off the mat re-enters
    for side in ("left", "right"):
        for cols in range(2, 9):
            d.cmd(cmd="savestate_load", path=state)
            for _ in range(cols):
                d.keys(side); d.run(24)
            d.keys(); d.run(10)
            for step in range(40):
                d.keys("up"); d.run(24)
                cur = layout(d)
                if cur != base and cur != HOUSE:
                    # Step well clear of the seam so both maps are on screen.
                    for _ in range(6):
                        d.keys("up"); d.run(24)
                    d.keys(); d.run(120)
                    d.cmd(cmd="savestate_save", path="/tmp/frlg_route1.gbas")
                    print("REACHED %s via %s+%d up x%d" %
                          (hex(layout(d)), side, cols, step + 1))
                    raise SystemExit(0)
    print("route 1 not reached")
finally:
    p.terminate()
