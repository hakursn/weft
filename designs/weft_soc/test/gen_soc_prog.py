import os, sys
_here=os.path.dirname(os.path.abspath(__file__)); _d=_here; _verif=None
for _ in range(8):
    cand=os.path.join(_d,"ip","warp","verif","warp_isa.py")   # search for the repo's golden model
    if os.path.exists(cand): _verif=os.path.join(_d,"ip","warp","verif"); break
    _d=os.path.dirname(_d)
if _verif is None:
    # also allow a plain verif/ sibling (in case of a flattened layout)
    _d=_here
    for _ in range(8):
        if os.path.exists(os.path.join(_d,"verif","warp_isa.py")): _verif=os.path.join(_d,"verif"); break
        _d=os.path.dirname(_d)
if _verif is None:
    sys.exit("ERROR: cannot find ip/warp/verif/warp_isa.py from "+_here)
sys.path.insert(0,_verif); import warp_isa as w
MSG="WEFT SOC OK\n"
body=[" li x8, 0x10000000"]
for ch in MSG:
    body.append(f" li x10, {ord(ch)}")
    body.append(" call putchar")
body += [" done:", " j done",
         " putchar:", " lw x5, 4(x8)", " andi x5, x5, 1", " bnez x5, putchar",
         " sw x10, 0(x8)", " ret"]
words,_=w.assemble("\n".join(body), base=0x80000000)
words=words+[0x0000006f]*(256-len(words))
with open(os.path.join(_here,"prog.hex"),"w") as f:
    for x in words: f.write(f"{x:08x}\n")
print(f"assembled print program: {MSG!r} ({_verif})")