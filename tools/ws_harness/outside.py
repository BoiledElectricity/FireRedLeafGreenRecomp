#!/usr/bin/env python3
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
    seen = {layout(d)}
    shot = 0
    routes = [["down"], ["left", "down"], ["right", "down"], ["down", "left"],
              ["down", "right"], ["down"], ["up"], ["left"], ["right"]]
    for route in routes:
        for dr in route:
            for _ in range(25):
                d.keys(dr); d.run(30)
                cur = layout(d)
                if cur not in seen:
                    seen.add(cur)
                    d.keys(); d.run(90)
                    w, h = d.screenshot("/tmp/ws_out_%02d.png" % shot)
                    d.cmd(cmd="savestate_save", path="/tmp/frlg_out_%02d.gbas" % shot)
                    print("NEW MAP %s shot %02d %dx%d" % (hex(cur), shot, w, h))
                    # Outdoors: walk a bit further so the camera is mid-map,
                    # away from the edge clamp, then capture again.
                    for _ in range(8):
                        d.keys("down"); d.run(30)
                    d.keys(); d.run(60)
                    d.screenshot("/tmp/ws_out_%02d_walked.png" % shot)
                    shot += 1
                    if shot >= 2:
                        raise SystemExit(0)
            d.keys(); d.run(20)
    print("layouts:", [hex(x) for x in seen])
finally:
    p.terminate()
