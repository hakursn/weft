import random, cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly

@cocotb.test()
async def fifo_random(dut):
    cocotb.start_soon(Clock(dut.clk_i, 10, unit="ns").start())
    dut.rst_ni.value=0; dut.flush_i.value=0
    dut.push_i.value=0; dut.pop_i.value=0; dut.wdata_i.value=0
    for _ in range(3): await RisingEdge(dut.clk_i)
    dut.rst_ni.value=1

    model=[]; nxt=0; recv=0
    drv_push=0; drv_pop=0; drv_w=0
    for _ in range(6000):
        await ReadOnly()
        full=int(dut.full_o.value); empty=int(dut.empty_o.value)
        assert int(dut.usage_o.value)==len(model), \
            f"usage {int(dut.usage_o.value)} != model {len(model)}"
        push_fire = drv_push and not full
        pop_fire  = drv_pop  and not empty
        if pop_fire:
            assert model, "pop when empty"
            assert model[0]==int(dut.rdata_o.value), \
                f"data exp {model[0]} got {int(dut.rdata_o.value)}"
        await RisingEdge(dut.clk_i)
        if pop_fire: model.pop(0); recv+=1
        if push_fire: model.append(drv_w)
        drv_push = 1 if random.random()<0.5 else 0
        drv_w = nxt & 0xFF
        if drv_push: nxt+=1
        drv_pop = 1 if random.random()<0.5 else 0
        dut.push_i.value=drv_push; dut.wdata_i.value=drv_w; dut.pop_i.value=drv_pop
    assert recv>500, f"too few: {recv}"
    dut._log.info(f"fifo cocotb PASS: recv={recv} leftover={len(model)}")