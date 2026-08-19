#!/usr/bin/env python3
"""Walk until the map changes, capturing each new map. Finds an outdoor scene."""
import struct, sys
sys.path.insert(0, "/Users/jamesdellamorte/FireRedLeafGreenRecomp/tools/ws_harness")
from drive import Dbg, launch

GMAPHEADER = 0x02036DFC   # mapLayout ptr at +0

exe = sys.argv[1]
view = int(sys.argv[2]) if len(sys.argv) > 2 else 384

def layout(d):
    r = d.cmd(cmd="read_ewram", addr=hex(GMAPHEADER), len=4)
    data = r.get("data") or ""
    return struct.unpack("<I", bytes.fromhex(data[:8]))[0] if len(data) >= 8 else 0

p = launch(exe, extra_env={"GBARECOMP_WS_WIP": "1"}, view_width=view)
try:
    d = Dbg()
    d.cmd(cmd="savestate_load", path="/tmp/frlg_overworld.gbas")
    start = layout(d)
    print("start layout", hex(start))

    seen, shot = {start}, 0
    # Sweep each direction in turn; a staircase or door only triggers from the
    # tile in front of it, so coverage matters more than a clever route.
    dirs = ["down", "left", "up", "right"]
    for round_ in range(40):
        for dr in dirs:
            for _ in range(4):
                d.keys(dr)
                d.run(30)
            d.keys("a")
            d.run(20)
            d.keys()
            d.run(20)
            cur = layout(d)
            if cur not in seen:
                seen.add(cur)
                w, h = d.screenshot("/tmp/ws_map_%02d.png" % shot)
                print("NEW MAP %s -> shot %02d (%dx%d) after %s" %
                      (hex(cur), shot, w, h, dr))
                d.cmd(cmd="savestate_save",
                      path="/tmp/frlg_map_%02d.gbas" % shot)
                shot += 1
                if shot >= 4:
                    raise SystemExit(0)
finally:
    p.terminate()
