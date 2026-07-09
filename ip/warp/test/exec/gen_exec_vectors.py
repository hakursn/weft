import os, sys, random
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..", "verif"))
import warp_isa as w
random.seed(1)
EDGE=[0,1,2,0xffffffff,0x80000000,0x7fffffff,0x7f,0x1f,31,32,0xdeadbeef,0xcafebabe,0x00010000]
def rand32(): return random.choice(EDGE+[random.getrandbits(32)]) & 0xffffffff
d=os.path.dirname(os.path.abspath(__file__))
with open(os.path.join(d,"alu_vec.hex"),"w") as f:
    for _ in range(400):
        oi=random.randrange(10); a=rand32(); b=rand32(); res=w.alu(w.ALU_OPS[oi],a,b)
        f.write(f"{oi:01x}{a:08x}{b:08x}{res:08x}\n")
with open(os.path.join(d,"branch_vec.hex"),"w") as f:
    for _ in range(200):
        f3=random.choice([0,1,4,5,6,7]); a=rand32(); b=rand32(); t=1 if w.branch_taken(f3,a,b) else 0
        f.write(f"{f3:01x}{a:08x}{b:08x}{t:01x}\n")
print("wrote alu_vec.hex, branch_vec.hex")