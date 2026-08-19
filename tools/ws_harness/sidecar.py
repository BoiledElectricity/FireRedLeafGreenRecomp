#!/usr/bin/env python3
"""Same outdoor scene with the Step C sidecar OFF vs fully configured."""
import sys
sys.path.insert(0, "/Users/jamesdellamorte/FireRedLeafGreenRecomp/tools/ws_harness")
from drive import Dbg, launch

# Guest addresses from gbarecomp/docs/WIDESCREEN_STEPC_PLAN.md.
SIDECAR = {
    "GBARECOMP_WS_WIP": "1",
    "GBARECOMP_WS_SIDECAR": "1",
    "GBARECOMP_WS_SC_ACTIVE": "1",
    "GBARECOMP_WS_SC_DRAWMETATILE": "0x0805A948",
    "GBARECOMP_WS_SC_TILEMAP_PTRS": "0x03005014",
    "GBARECOMP_WS_SC_MAPHEADER": "0x02036DFC",
    "GBARECOMP_WS_SC_GMAIN": "0x030030F0",
    "GBARECOMP_WS_SC_CB2_OVERWORLD": "0x080565B4",
    "GBARECOMP_WS_SC_CURCOORDS": "0x02036E48",
}

exe, state, mode, out = sys.argv[1], sys.argv[2], sys.argv[3], sys.argv[4]
env = dict(SIDECAR) if mode == "on" else {"GBARECOMP_WS_WIP": "1"}

p = launch(exe, extra_env=env, view_width=384)
try:
    d = Dbg()
    d.cmd(cmd="savestate_load", path=state)
    d.keys(); d.run(90)
    w, h = d.screenshot(out)
    print(mode, w, "x", h)
finally:
    p.terminate()
