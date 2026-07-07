import random, cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotbext.axi import AxiBus, AxiMaster, AxiRam

@cocotb.test()
async def cut_axi(dut):
    cocotb.start_soon(Clock(dut.clk_i, 10, unit="ns").start())
    master = AxiMaster(AxiBus.from_prefix(dut, "s_axi"), dut.clk_i, dut.rst_ni, reset_active_level=False)
    ram    = AxiRam(AxiBus.from_prefix(dut, "m_axi"), dut.clk_i, dut.rst_ni, reset_active_level=False, size=2**16)

    dut.rst_ni.value = 0
    for _ in range(5): await RisingEdge(dut.clk_i)
    dut.rst_ni.value = 1
    for _ in range(2): await RisingEdge(dut.clk_i)

    # single-beat writes/reads
    for _ in range(16):
        addr = random.randrange(0, 2**16, 4)
        data = random.randbytes(4)
        await master.write(addr, data)
        r = await master.read(addr, 4)
        assert r.data == data, f"single @ {addr:#x}: wrote {data.hex()} read {r.data.hex()}"

    # burst writes/reads (exercises W last, R last)
    for _ in range(8):
        addr = random.randrange(0, 2**16, 4)
        n = random.choice([8, 16, 32, 64])
        data = random.randbytes(n)
        await master.write(addr, data)
        r = await master.read(addr, n)
        assert r.data == data, f"burst @ {addr:#x} len {n}: mismatch"

    dut._log.info("cut cocotbext-axi PASS: single + burst reads matched writes")