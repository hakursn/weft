import os, sys
_here=os.path.dirname(os.path.abspath(__file__)); _d=_here; _verif=None
for _ in range(6):
    if os.path.exists(os.path.join(_d,"verif","warp_isa.py")): _verif=os.path.join(_d,"verif"); break
    _d=os.path.dirname(_d)
if _verif is None: sys.exit("ERROR: cannot find verif/warp_isa.py (expected ip/warp/verif/warp_isa.py)")
sys.path.insert(0,_verif); import warp_isa as w
prog = """
        li x1,0
        li x2,1
        li x3,11
    loop:
        bge  x2, x3, done
        add  x1, x1, x2
        addi x2, x2, 1
        j    loop
    done:
        li x4, 0x100
        sw x1, 0(x4)
        li x5, 0x1000
        sw x1, 0(x5)
    spin:
        j spin
"""
words,_=w.assemble(prog, base=0x80000000)
iss=w.ISS(words); iss.run()
words=words+[0x0000006f]*(64-len(words))
with open(os.path.join(_here,"prog.hex"),"w") as f:
    for x in words: f.write(f"{x:08x}\n")
print(f"golden: x1={iss.reg[1]} mem[0x100]={iss.rd32(0x100)}")