#!/usr/bin/env python3
import os, sys
sys.path.insert(0, "/Users/jamesdellamorte/FireRedLeafGreenRecomp/tools/ws_harness")
from drive import Dbg, launch

exe = sys.argv[1]
out = sys.argv[2]
env = {"GBARECOMP_WS_WIP": "1"}
if len(sys.argv) > 3 and sys.argv[3] == "policy":
    env["GBARECOMP_WS_SC_GMAIN"] = "0x030030F0"
    env["GBARECOMP_WS_SC_CB2_OVERWORLD"] = "0x080565B4"

p = launch(exe, extra_env=env, view_width=384)
try:
    d = Dbg()
    d.run(1400)          # cold boot through the intro to the title screen
    w, h = d.screenshot(out)
    print(os.path.basename(out), w, "x", h)
finally:
    p.terminate()
