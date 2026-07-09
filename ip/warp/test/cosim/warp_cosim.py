#!/usr/bin/env python3
"""warp_cosim.py — lock-step cosim: RTL retire trace vs golden ISS, over many programs."""
import os, sys, subprocess, random
_here=os.path.dirname(os.path.abspath(__file__)); _d=_here; _verif=None
for _ in range(6):
    if os.path.exists(os.path.join(_d,"verif","warp_isa.py")): _verif=os.path.join(_d,"verif"); break
    _d=os.path.dirname(_d)
sys.path.insert(0, _verif or _here); import warp_isa as w

BIN=os.path.join(_here,"obj_dir","Vtb_cosim_sv")
BASE=0x80000000

def run_one(asm, name):
    words,_=w.assemble(asm, base=BASE)
    iss=w.ISS(words); iss.run(max_steps=200000)
    golden=[(t['pc'],t['ins'],t['rd'],t['rd_val']) for t in iss.trace]
    padded=words+[0x0000006f]*(256-len(words))
    with open(os.path.join(_here,"prog.hex"),"w") as f:
        for x in padded: f.write(f"{x:08x}\n")
    subprocess.run([BIN], cwd=_here, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, timeout=60)
    rtl=[]
    with open(os.path.join(_here,"rtl_trace.txt")) as f:
        for ln in f:
            p=ln.split(); rtl.append((int(p[0],16),int(p[1],16),int(p[2],16),int(p[3],16)))
    # trace compare
    if len(rtl)!=len(golden):
        return f"{name}: LENGTH mismatch rtl={len(rtl)} iss={len(golden)}"
    for i,(g,r) in enumerate(zip(golden,rtl)):
        if g!=r:
            return (f"{name}: DIVERGE at retire {i}\n   iss: pc={g[0]:08x} ins={g[1]:08x} rd={g[2]:02x} val={g[3]:08x}\n"
                    f"   rtl: pc={r[0]:08x} ins={r[1]:08x} rd={r[2]:02x} val={r[3]:08x}")
    # memory compare [0,0x800)
    with open(os.path.join(_here,"rtl_mem.txt")) as f:
        rmem=[int(x,16) for x in f.read().split()]
    for i,rv in enumerate(rmem):
        gv=iss.rd32(i*4)
        if rv!=gv:
            return f"{name}: MEM mismatch @0x{i*4:x} rtl={rv:08x} iss={gv:08x}"
    return None  # pass

# ---- directed programs ----
DIRECTED={
"alu_imm":"""
 li x1,0x12345678
 addi x2,x1,0x7ff
 xori x3,x1,-1
 andi x4,x1,0xf
 ori x5,x1,0x700
 slli x6,x1,4
 srli x7,x1,8
 srai x8,x1,8
 slti x9,x1,0
 sltiu x10,x1,1
 li x20,0
 sw x2,0x200(x20)
 lw x11,0x200(x20)
 li x30,0x100
 sw x11,0(x30)
 li x31,0x1000
 sw x11,0(x31)
""",
"alu_reg":"""
 li x1,-5
 li x2,3
 add x3,x1,x2
 sub x4,x1,x2
 sll x5,x2,x1
 slt x6,x1,x2
 sltu x7,x1,x2
 xor x8,x1,x2
 srl x9,x1,x2
 sra x10,x1,x2
 or x11,x1,x2
 and x12,x1,x2
 li x30,0x100
 sw x3,0(x30)
 li x31,0x1000
 sw x3,0(x31)
""",
"loads_stores":"""
 li x20,0
 li x1,0xAABBCCDD
 sw x1,0x40(x20)
 lb x2,0x40(x20)
 lbu x3,0x40(x20)
 lh x4,0x40(x20)
 lhu x5,0x40(x20)
 lb x6,0x43(x20)
 sb x1,0x50(x20)
 lbu x7,0x50(x20)
 sh x1,0x54(x20)
 lhu x8,0x54(x20)
 li x30,0x100
 sw x2,0(x30)
 li x31,0x1000
 sw x2,0(x31)
""",
"branches":"""
 li x1,5
 li x2,5
 li x3,0
 beq x1,x2,eq1
 li x3,0xbad
eq1:
 bne x1,x2,ne1
 addi x3,x3,1
ne1:
 blt x1,x2,lt1
 addi x3,x3,10
lt1:
 bge x1,x2,ge1
 li x3,0xbad
ge1:
 li x30,0x100
 sw x3,0(x30)
 li x31,0x1000
 sw x3,0(x31)
""",
"loop_jal":"""
 li x10,0
 li x2,0
 li x3,6
top:
 add x10,x10,x2
 addi x2,x2,1
 blt x2,x3,top
 call sub1
 li x30,0x100
 sw x10,0(x30)
 li x31,0x1000
 sw x10,0(x31)
 j spin
sub1:
 ret
spin:
 j spin
""",
"lui_auipc":"""
 lui x1,0x12345
 auipc x2,0
 addi x1,x1,0x678
 li x30,0x100
 sw x1,0(x30)
 li x31,0x1000
 sw x1,0(x31)
""",
}

def gen_random(seed):
    random.seed(seed)
    RR=["add","sub","sll","slt","sltu","xor","srl","sra","or","and"]
    RI=["addi","slti","sltiu","xori","ori","andi"]
    SH=["slli","srli","srai"]
    lines=[]
    for r in range(1,13): lines.append(f"li x{r}, {random.randint(-(1<<31),(1<<31)-1)}")
    lines.append("li x20, 0")
    for _ in range(random.randint(20,40)):
        k=random.random()
        rd=random.randint(1,12); a=random.randint(1,12); b=random.randint(1,12)
        if k<0.4:   lines.append(f"{random.choice(RR)} x{rd}, x{a}, x{b}")
        elif k<0.65:lines.append(f"{random.choice(RI)} x{rd}, x{a}, {random.randint(-2048,2047)}")
        elif k<0.8: lines.append(f"{random.choice(SH)} x{rd}, x{a}, {random.randint(0,31)}")
        else:
            off=random.randrange(0x200,0x3f8,4)
            sty,lty=random.choice([("sw","lw"),("sh","lhu"),("sh","lh"),("sb","lbu"),("sb","lb")])
            lines.append(f"{sty} x{a}, {off}(x20)")
            lines.append(f"{lty} x{rd}, {off}(x20)")
    lines.append("li x30, 0x100"); lines.append("sw x1, 0(x30)")
    lines.append("li x31, 0x1000"); lines.append("sw x1, 0(x31)")
    return "\n".join(lines)

if __name__=="__main__":
    fails=0; total=0
    for nm,asm in DIRECTED.items():
        total+=1; r=run_one(asm,nm)
        print(f"[{'PASS' if r is None else 'FAIL'}] {nm}")
        if r: print(r); fails+=1
    N=int(sys.argv[1]) if len(sys.argv)>1 else 40
    for s in range(N):
        total+=1; r=run_one(gen_random(s), f"random_{s}")
        if r: print(f"[FAIL] random_{s}"); print(r); fails+=1
    print(f"\ncosim: {total-fails}/{total} programs passed"+("" if fails==0 else f"  ({fails} FAILED)"))
    sys.exit(1 if fails else 0)