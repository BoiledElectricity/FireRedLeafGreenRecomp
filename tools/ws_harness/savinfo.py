#!/usr/bin/env python3
"""Read player name / playtime / badges straight out of a Gen 3 flash save.

128 KB = 2 slots x 14 sectors x 4096. Each sector ends with a footer holding its
id, a signature and a counter; the live slot is the one whose sectors carry the
higher counter. SaveBlock2 is sector id 0, and playtime sits at its start.
"""
import struct, sys

SECTOR, DATA, SIG = 4096, 3968, 0x08012025

def sectors(blob):
    for i in range(len(blob) // SECTOR):
        base = i * SECTOR
        sid, _chk = struct.unpack_from("<HH", blob, base + 0x0FF4)
        sig, ctr  = struct.unpack_from("<II", blob, base + 0x0FF8)
        if sig == SIG:
            yield i, sid, ctr, blob[base:base + DATA]

def info(path):
    blob = open(path, "rb").read()
    best = {}
    for idx, sid, ctr, data in sectors(blob):
        # Highest counter wins: that is the most recently written slot.
        if sid not in best or ctr > best[sid][0]:
            best[sid] = (ctr, data)
    if 0 not in best:
        return "no SaveBlock2 sector found (unwritten or foreign save)"
    sb2 = best[0][1]
    # Player name is 7 bytes in the game's own character set.
    charmap = {0xBB+i: c for i, c in enumerate("ABCDEFGHIJKLMNOPQRSTUVWXYZ")}
    charmap.update({0xD5+i: c for i, c in enumerate("abcdefghijklmnopqrstuvwxyz")})
    charmap[0x00] = " "
    name = "".join(charmap.get(b, "") for b in sb2[0:7] if b != 0xFF)
    hours  = struct.unpack_from("<H", sb2, 0x0E)[0]
    mins   = sb2[0x10]
    secs   = sb2[0x11]
    return "player=%-8s playtime=%d:%02d:%02d  counter=%d" % (
        name or "?", hours, mins, secs, best[0][0])

for p in sys.argv[1:]:
    print("%-46s %s" % (p.split('/')[-1], info(p)))
