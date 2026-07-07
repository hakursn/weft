import random, cocotb
from cocotb.triggers import Timer

RULES = [(0,0x0,0x1000),(1,0x1000,0x2000),(2,0x2000,0x3000)]
def model(a):
    for idx,s,e in RULES:
        if s <= a < e: return idx,1,0
    return 0,0,1

@cocotb.test()
async def addr_decode_check(dut):
    tests = [0x0,0xFFF,0x1000,0x1500,0x2FFF,0x3000,0xDEADBEEF]
    tests += [random.randint(0,0xFFFFFFFF) for _ in range(500)]
    for a in tests:
        dut.addr_i.value = a
        await Timer(1, unit="ns")
        ei,ev,ee = model(a)
        gv=int(dut.dec_valid_o.value); ge=int(dut.dec_error_o.value); gi=int(dut.idx_o.value)
        assert gv==ev and ge==ee, f"addr {a:#x}: v/e exp {ev}/{ee} got {gv}/{ge}"
        if ev: assert gi==ei, f"addr {a:#x}: idx exp {ei} got {gi}"
    dut._log.info(f"addr_decode cocotb PASS: {len(tests)} addresses")