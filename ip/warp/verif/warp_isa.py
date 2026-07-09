"""warp_isa.py — clean-room RV32I assembler + golden ISS for Warp verification.

Fully self-contained (no RISC-V toolchain). Provides:
  assemble(text, base) -> (words, labels)      two-pass, labels + common pseudo-ops
  ISS(mem, pc).run()   -> commit trace          reference execution + trace
The RTL cosim diffs its retire trace against ISS.run()'s trace.
"""
import re

REGS = {f"x{i}": i for i in range(32)}
ABI = {"zero":0,"ra":1,"sp":2,"gp":3,"tp":4,"t0":5,"t1":6,"t2":7,"s0":8,"fp":8,"s1":9,
       "a0":10,"a1":11,"a2":12,"a3":13,"a4":14,"a5":15,"a6":16,"a7":17,
       "s2":18,"s3":19,"s4":20,"s5":21,"s6":22,"s7":23,"s8":24,"s9":25,"s10":26,"s11":27,
       "t3":28,"t4":29,"t5":30,"t6":31}
REGS.update(ABI)

def reg(t):
    t=t.strip()
    if t not in REGS: raise ValueError(f"bad register {t!r}")
    return REGS[t]

def u(x,bits): return x & ((1<<bits)-1)

# ---- encoders ----
def enc_r(f7,rs2,rs1,f3,rd,op): return (f7<<25)|(rs2<<20)|(rs1<<15)|(f3<<12)|(rd<<7)|op
def enc_i(imm,rs1,f3,rd,op):    return (u(imm,12)<<20)|(rs1<<15)|(f3<<12)|(rd<<7)|op
def enc_s(imm,rs2,rs1,f3,op):
    imm=u(imm,12); return (((imm>>5)&0x7f)<<25)|(rs2<<20)|(rs1<<15)|(f3<<12)|((imm&0x1f)<<7)|op
def enc_b(imm,rs2,rs1,f3,op):
    imm=u(imm,13)
    return ((((imm>>12)&1)<<31)|(((imm>>5)&0x3f)<<25)|(rs2<<20)|(rs1<<15)|(f3<<12)|
            (((imm>>1)&0xf)<<8)|(((imm>>11)&1)<<7)|op)
def enc_u(imm,rd,op): return (u(imm,32)&0xfffff000)|(rd<<7)|op
def enc_j(imm,rd,op):
    imm=u(imm,21)
    return ((((imm>>20)&1)<<31)|(((imm>>1)&0x3ff)<<21)|(((imm>>11)&1)<<20)|
            (((imm>>12)&0xff)<<12)|(rd<<7)|op)

Rt={"add":(0x00,0),"sub":(0x20,0),"sll":(0x00,1),"slt":(0x00,2),"sltu":(0x00,3),
    "xor":(0x00,4),"srl":(0x00,5),"sra":(0x20,5),"or":(0x00,6),"and":(0x00,7)}
It={"addi":0,"slti":2,"sltiu":3,"xori":4,"ori":6,"andi":7}
Sh={"slli":(0x00,1),"srli":(0x00,5),"srai":(0x20,5)}
Lt={"lb":0,"lh":1,"lw":2,"lbu":4,"lhu":5}
St={"sb":0,"sh":1,"sw":2}
Bt={"beq":0,"bne":1,"blt":4,"bge":5,"bltu":6,"bgeu":7}

MEMOFF=re.compile(r"(-?\w+)\((\w+)\)")

def assemble(text, base=0x80000000):
    lines=[]
    for raw in text.splitlines():
        raw=raw.split('#')[0].strip()
        if not raw: continue
        lines.append(raw)
    # pass 1: expand pseudo -> real mnemonics, resolve label addresses
    prog=[]; labels={}; pc=base
    def emit(m,*a): 
        nonlocal pc
        prog.append((pc,m,list(a))); pc+=4
    for ln in lines:
        if ln.endswith(':'): labels[ln[:-1]]=pc; continue
        m=re.match(r"(\w+):",ln)
        if m and len(ln.split())==1: labels[m.group(1)]=pc; continue
        parts=ln.replace(',',' ').split()
        op=parts[0].lower(); ar=parts[1:]
        if op=="nop": emit("addi","x0","x0","0")
        elif op=="li":
            rd,imm=ar[0],parse_imm(ar[1],labels)
            if -2048<=imm<2048: emit("addi",rd,"x0",str(imm))
            else:
                hi=(imm+0x800)>>12; lo=imm-(hi<<12)
                emit("lui",rd,str(hi&0xfffff)); emit("addi",rd,rd,str(lo))
        elif op=="mv": emit("addi",ar[0],ar[1],"0")
        elif op=="j": emit("jal","x0",ar[0])
        elif op=="jr": emit("jalr","x0","0("+ar[0]+")")
        elif op=="ret": emit("jalr","x0","0(x1)")
        elif op=="beqz": emit("beq",ar[0],"x0",ar[1])
        elif op=="bnez": emit("bne",ar[0],"x0",ar[1])
        elif op=="call": emit("jal","x1",ar[0])
        else: emit(op,*ar)
    # pass 2: encode
    words=[]
    for (a,op,ar) in prog:
        words.append(encode(a,op,ar,labels))
    return words, labels

def parse_imm(t,labels):
    t=t.strip()
    if t in labels: return labels[t]
    return int(t,0)

def encode(addr,op,ar,labels):
    if op in Rt: f7,f3=Rt[op]; return enc_r(f7,reg(ar[2]),reg(ar[1]),f3,reg(ar[0]),0x33)
    if op in It: return enc_i(parse_imm(ar[2],labels),reg(ar[1]),It[op],reg(ar[0]),0x13)
    if op in Sh: f7,f3=Sh[op]; return enc_i((f7<<5)|(parse_imm(ar[2],labels)&0x1f),reg(ar[1]),f3,reg(ar[0]),0x13)
    if op=="lui":   return enc_u(parse_imm(ar[1],labels)<<12,reg(ar[0]),0x37)
    if op=="auipc": return enc_u(parse_imm(ar[1],labels)<<12,reg(ar[0]),0x17)
    if op in Lt:
        m=MEMOFF.match(ar[1]); off=parse_imm(m.group(1),labels); rs1=reg(m.group(2))
        return enc_i(off,rs1,Lt[op],reg(ar[0]),0x03)
    if op in St:
        m=MEMOFF.match(ar[1]); off=parse_imm(m.group(1),labels); rs1=reg(m.group(2))
        return enc_s(off,reg(ar[0]),rs1,St[op],0x23)
    if op in Bt:
        tgt=parse_imm(ar[2],labels); return enc_b(tgt-addr,reg(ar[1]),reg(ar[0]),Bt[op],0x63)
    if op=="jal":
        tgt=parse_imm(ar[1],labels); return enc_j(tgt-addr,reg(ar[0]),0x6f)
    if op=="jalr":
        m=MEMOFF.match(ar[1]); off=parse_imm(m.group(1),labels); rs1=reg(m.group(2))
        return enc_i(off,rs1,0,reg(ar[0]),0x67)
    raise ValueError(f"cannot encode {op} {ar}")

# ---- golden ISS ----
def sx(v,bits): 
    v&=(1<<bits)-1
    return v-(1<<bits) if v&(1<<(bits-1)) else v


# ---- shared ALU / branch semantics (single source for RTL cross-check) ----
ALU_OPS = ["add","sub","sll","slt","sltu","xor","srl","sra","or","and"]  # index == warp_pkg enum

def alu(op, x, y):
    x &= 0xffffffff; y &= 0xffffffff
    if op=='add':  return (x+y)&0xffffffff
    if op=='sub':  return (x-y)&0xffffffff
    if op=='sll':  return (x<<(y&31))&0xffffffff
    if op=='srl':  return (x>>(y&31))
    if op=='sra':  return (sx(x,32)>>(y&31))&0xffffffff
    if op=='or':   return x|y
    if op=='and':  return x&y
    if op=='xor':  return x^y
    if op=='slt':  return 1 if sx(x,32)<sx(y,32) else 0
    if op=='sltu': return 1 if x<y else 0
    raise ValueError(op)

def branch_taken(f3, a, b):
    a &= 0xffffffff; b &= 0xffffffff
    return {0:a==b,1:a!=b,4:sx(a,32)<sx(b,32),5:sx(a,32)>=sx(b,32),
            6:a<b,7:a>=b}[f3]

class ISS:
    def __init__(self, words, base=0x80000000, finish=0x00001000):
        self.mem=bytearray(1<<20)          # 1 MiB flat, wraps by mask
        self.base=base; self.finish=finish
        for i,w in enumerate(words): self.wr32(base+4*i, w)
        self.reg=[0]*32; self.pc=base; self.trace=[]
    def _idx(self,a): return a & ((1<<20)-1)
    def rd32(self,a):
        i=self._idx(a); return int.from_bytes(self.mem[i:i+4],'little')
    def wr32(self,a,v):
        i=self._idx(a); self.mem[i:i+4]=(v&0xffffffff).to_bytes(4,'little')
    def run(self,max_steps=100000):
        for _ in range(max_steps):
            pc=self.pc; ins=self.rd32(pc)
            rec=self.step(ins)
            self.trace.append(rec)
            if rec.get('finish'): break
        return self.trace
    def step(self,ins):
        R=self.reg; pc=self.pc
        op=ins&0x7f; rd=(ins>>7)&0x1f; f3=(ins>>12)&7; rs1=(ins>>15)&0x1f; rs2=(ins>>20)&0x1f; f7=(ins>>25)&0x7f
        a=R[rs1]; b=R[rs2]
        immI=sx(ins>>20,12); immS=sx(((ins>>25)<<5)|((ins>>7)&0x1f),12)
        immB=sx((((ins>>31)&1)<<12)|(((ins>>7)&1)<<11)|(((ins>>25)&0x3f)<<5)|(((ins>>8)&0xf)<<1),13)
        immU=ins&0xfffff000
        immJ=sx((((ins>>31)&1)<<20)|(((ins>>12)&0xff)<<12)|(((ins>>20)&1)<<11)|(((ins>>21)&0x3ff)<<1),21)
        wb=None; npc=(pc+4)&0xffffffff; ma=mw=ms=None; fin=False
        if op==0x33:
            key={(0x00,0):'add',(0x20,0):'sub',(0x00,1):'sll',(0x00,2):'slt',(0x00,3):'sltu',
                 (0x00,4):'xor',(0x00,5):'srl',(0x20,5):'sra',(0x00,6):'or',(0x00,7):'and'}[(f7,f3)]
            wb=alu(key,a,b)
        elif op==0x13:
            if f3==0: wb=alu('add',a,immI)
            elif f3==2: wb=1 if sx(a,32)<immI else 0
            elif f3==3: wb=1 if (a&0xffffffff)<(immI&0xffffffff) else 0
            elif f3==4: wb=alu('xor',a,immI)
            elif f3==6: wb=alu('or',a,immI)
            elif f3==7: wb=alu('and',a,immI)
            elif f3==1: wb=alu('sll',a,immI&0x1f)
            elif f3==5: wb=alu('sra' if f7&0x20 else 'srl',a,immI&0x1f)
        elif op==0x37: wb=immU
        elif op==0x17: wb=(pc+immU)&0xffffffff
        elif op==0x6f: wb=npc; npc=(pc+immJ)&0xffffffff
        elif op==0x67: wb=npc; npc=(a+immI)&0xfffffffe
        elif op==0x63:
            take=branch_taken(f3,a,b)
            if take: npc=(pc+immB)&0xffffffff
        elif op==0x03:
            ea=(a+immI)&0xffffffff; w=self.rd32(ea&~3); sh=(ea&3)*8
            if f3==2: wb=w
            elif f3==0: wb=sx((w>>sh)&0xff,8)&0xffffffff
            elif f3==1: wb=sx((w>>sh)&0xffff,16)&0xffffffff
            elif f3==4: wb=(w>>sh)&0xff
            elif f3==5: wb=(w>>sh)&0xffff
        elif op==0x23:
            ea=(a+immS)&0xffffffff; ms=f3
            base=ea&~3; sh=(ea&3)*8; cur=self.rd32(base)
            if f3==2: nv=b&0xffffffff; strb=0xf
            elif f3==0: nv=(cur&~(0xff<<sh))|((b&0xff)<<sh); strb=1<<(ea&3)
            elif f3==1: nv=(cur&~(0xffff<<sh))|((b&0xffff)<<sh); strb=3<<(ea&3)
            self.wr32(base,nv); ma=base; mw=nv
            if base==self.finish: fin=True
        if wb is not None and rd!=0: R[rd]=wb&0xffffffff
        self.pc=npc
        return {'pc':pc,'ins':ins,'rd':rd if (wb is not None and rd!=0) else 0,
                'rd_val':(R[rd] if (wb is not None and rd!=0) else 0),
                'ma':ma,'mw':mw,'finish':fin}

if __name__=="__main__":
    prog="""
        li   x1, 0          # acc
        li   x2, 1          # i
        li   x3, 11         # limit
    loop:
        bge  x2, x3, done
        add  x1, x1, x2
        addi x2, x2, 1
        j    loop
    done:
        li   x4, 0x100
        sw   x1, 0(x4)
        li   x5, 0x1000     # finish (magic) address
        sw   x1, 0(x5)
    """
    words,labels=assemble(prog)
    iss=ISS(words); tr=iss.run()
    print(f"assembled {len(words)} words, {len(tr)} instrs retired")
    print(f"x1 (sum 1..10) = {iss.reg[1]}  expect 55  -> {'OK' if iss.reg[1]==55 else 'FAIL'}")
    print(f"mem[0x100]     = {iss.rd32(0x100)}  -> {'OK' if iss.rd32(0x100)==55 else 'FAIL'}")
    # a couple more self-checks: arithmetic + branches + shifts
    p2="""
        li x1, -5
        li x2, 3
        add x3, x1, x2      # -2
        slt x4, x1, x2      # 1
        sltu x5, x1, x2     # 0 (x1 huge unsigned)
        slli x6, x2, 4      # 48
        srai x7, x1, 1      # -3
        li x8, 0x1000
        sw x3, 0(x8)
    """
    w2,_=assemble(p2); i2=ISS(w2); i2.run()
    exp={3:(-2)&0xffffffff,4:1,5:0,6:48,7:(-3)&0xffffffff}
    ok=all(i2.reg[k]==v for k,v in exp.items())
    print(f"arith/branch/shift checks -> {'OK' if ok else 'FAIL'}  {[i2.reg[k] for k in exp]}")