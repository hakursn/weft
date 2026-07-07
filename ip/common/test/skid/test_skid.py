# cocotb test for weft_skid_buffer: random producer/consumer with backpressure,
# scoreboard checks that every beat comes out exactly once, in order.
import random
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly

@cocotb.test()
async def skid_random(dut):
    cocotb.start_soon(Clock(dut.clk_i, 10, unit="ns").start())
    dut.rst_ni.value = 0
    dut.in_valid_i.value = 0
    dut.in_data_i.value = 0
    dut.out_ready_i.value = 0
    for _ in range(3):
        await RisingEdge(dut.clk_i)
    dut.rst_ni.value = 1

    scoreboard, recv, nxt = [], 0, 0
    drv_valid, drv_data, drv_oready = 1, 0, 0
    dut.in_valid_i.value = drv_valid
    dut.in_data_i.value = drv_data
    dut.out_ready_i.value = drv_oready

    for _ in range(4000):
        await ReadOnly()                         # pre-edge sample point
        in_acc  = drv_valid and int(dut.in_ready_o.value)
        out_acc = int(dut.out_valid_o.value) and drv_oready
        if in_acc:
            scoreboard.append(drv_data)
        if out_acc:
            assert scoreboard, "output beat with empty scoreboard (underflow)"
            exp, got = scoreboard.pop(0), int(dut.out_data_o.value)
            assert exp == got, f"mismatch: expected {exp}, got {got}"
            recv += 1

        await RisingEdge(dut.clk_i)              # commit the edge, then drive next
        if in_acc or not drv_valid:
            if random.random() < 0.5:
                drv_valid, drv_data = 1, nxt & 0xFF
                nxt += 1
            else:
                drv_valid = 0
        drv_oready = 1 if random.random() < 0.5 else 0
        dut.in_valid_i.value = drv_valid
        dut.in_data_i.value = drv_data
        dut.out_ready_i.value = drv_oready

    assert recv > 500, f"too few beats exercised: {recv}"
    dut._log.info(f"skid cocotb PASS: received={recv}, leftover={len(scoreboard)}")