#!/usr/bin/env python3
"""Long single-direction walks to reach a corner warp (stairs/door)."""
import struct, sys
sys.path.insert(0, "/Users/jamesdellamorte/FireRedLeafGreenRecomp/tools/ws_harness")
from drive import Dbg, launch

GMAPHEADER = 0x02036DFC
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
    seen = {layout(d)}
    print("start", hex(list(seen)[0]))
    shot = 0
    # Corners first: a bedroom staircase and a house door both sit against a
    # wall, so hugging one edge and sweeping the other finds them.
    routes = [["left", "down"], ["down", "left"], ["right", "down"],
              ["down", "right"], ["up", "left"], ["left", "up"]]
    for route in routes:
        for dr in route:
            for _ in range(20):
                d.keys(dr)
                d.run(30)
                cur = layout(d)
                if cur not in seen:
                    seen.add(cur)
                    d.keys(); d.run(60)
                    w, h = d.screenshot("/tmp/ws_map_%02d.png" % shot)
                    d.cmd(cmd="savestate_save", path="/tmp/frlg_map_%02d.gbas" % shot)
                    print("NEW MAP %s shot %02d %dx%d (walking %s)" %
                          (hex(cur), shot, w, h, dr))
                    shot += 1
                    if shot >= 3:
                        raise SystemExit(0)
            d.keys(); d.run(20)
    print("no map change; layouts seen:", [hex(x) for x in seen])
finally:
    p.terminate()
