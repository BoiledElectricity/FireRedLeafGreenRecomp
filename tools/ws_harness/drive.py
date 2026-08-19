#!/usr/bin/env python3
"""Drive FireRedRecomp over the TCP debug server to a known scene and capture it.

Reaching the overworld from a cold boot takes a few thousand frames of intro,
so the first run checkpoints a savestate and later runs load it instead.
"""
import json, os, socket, struct, subprocess, sys, time, zlib

REPO = "/Users/jamesdellamorte/FireRedLeafGreenRecomp"
PORT = 19852
CB2_OVERWORLD = 0x080565B4
GMAIN_CALLBACK2 = 0x030030F4          # gMain 0x030030F0, callback2 at +4

# GBA KEYINPUT is active-low: a clear bit is a held button.
KEY = {"a": 0, "b": 1, "select": 2, "start": 3,
       "right": 4, "left": 5, "up": 6, "down": 7}


class Dbg:
    def __init__(self, port=PORT):
        self.s = socket.create_connection(("127.0.0.1", port), timeout=30)
        self.f = self.s.makefile("rwb")

    def cmd(self, **kw):
        self.f.write((json.dumps(kw) + "\n").encode())
        self.f.flush()
        line = self.f.readline()
        if not line:
            raise RuntimeError("debug server closed the connection")
        return json.loads(line)

    def keys(self, *names):
        v = 0x3FF
        for n in names:
            v &= ~(1 << KEY[n])
        return self.cmd(cmd="set_keyinput", value=v)

    def run(self, frames):
        r = self.cmd(cmd="run_frames", n=frames)
        if not r.get("ok"):
            raise RuntimeError("run_frames failed: %r" % r)
        return r

    def callback2(self):
        r = self.cmd(cmd="read_iwram", addr=hex(GMAIN_CALLBACK2), len=4)
        data = r.get("data") or r.get("bytes") or ""
        if len(data) < 8:
            return None
        return struct.unpack("<I", bytes.fromhex(data[:8]))[0]

    def screenshot(self, path):
        r = self.cmd(cmd="screenshot")
        w, h = r["w"], r["h"]
        rgb = bytes.fromhex(r["data"])
        png(path, w, h, rgb)
        return w, h


def png(path, w, h, rgb):
    raw = b"".join(b"\x00" + rgb[y * w * 3:(y + 1) * w * 3] for y in range(h))
    def chunk(tag, data):
        c = tag + data
        return struct.pack(">I", len(data)) + c + struct.pack(">I", zlib.crc32(c))
    with open(path, "wb") as fp:
        fp.write(b"\x89PNG\r\n\x1a\n")
        fp.write(chunk(b"IHDR", struct.pack(">IIBBBBB", w, h, 8, 2, 0, 0, 0)))
        fp.write(chunk(b"IDAT", zlib.compress(raw, 6)))
        fp.write(chunk(b"IEND", b""))


def launch(exe, extra_env=None, view_width=None):
    env = dict(os.environ)
    env.update(extra_env or {})
    cmd = [exe, "--bios", "gbarecomp/bios/gba_bios.bin",
           "--rom", "variants/firered/roms/firered_usa.gba",
           "--tcp", str(PORT)]
    if view_width:
        cmd += ["--view-width", str(view_width)]
    cmd += ["variants/firered/game.toml"]
    log = open("/tmp/ws_harness.log", "wb")
    p = subprocess.Popen(cmd, cwd=REPO, env=env, stdout=log, stderr=log)
    for _ in range(120):
        time.sleep(0.5)
        try:
            Dbg().s.close()
            return p
        except OSError:
            if p.poll() is not None:
                raise RuntimeError("game exited early; see /tmp/ws_harness.log")
    raise RuntimeError("debug server never came up")


def reach_overworld(d, budget=20000):
    """Mash START/A until gMain.callback2 lands on CB2_Overworld."""
    seen = 0
    while seen < budget:
        for combo in (("start",), (), ("a",), ()):
            d.keys(*combo)
            d.run(8)
            seen += 8
            cb = d.callback2()
            if cb is not None and (cb & ~1) == CB2_OVERWORLD:
                d.keys()
                return seen
    return None


if __name__ == "__main__":
    exe = sys.argv[1]
    p = launch(exe, extra_env={"GBARECOMP_WS_WIP": "1"},
               view_width=int(sys.argv[2]) if len(sys.argv) > 2 else None)
    try:
        d = Dbg()
        print("connected:", d.cmd(cmd="ping"))
        print("callback2 at boot:", hex(d.callback2() or 0))
        n = reach_overworld(d)
        print("overworld after", n, "frames" if n else "NOT REACHED")
        if n:
            print(d.cmd(cmd="savestate_save", path="/tmp/frlg_overworld.gbas"))
        w, h = d.screenshot("/tmp/ws_shot.png")
        print("captured", w, "x", h)
    finally:
        p.terminate()
