import random, cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotbext.axi import AxiBus, AxiMaster, AxiRam

@cocotb.test()
async def demux_route(dut):
    cocotb.start_soon(Clock(dut.clk_i, 10, unit="ns").start())
    master = AxiMaster(AxiBus.from_prefix(dut, "s_axi"),  dut.clk_i, dut.rst_ni, reset_active_level=False)
    ram0   = AxiRam(AxiBus.from_prefix(dut, "m0_axi"), dut.clk_i, dut.rst_ni, reset_active_level=False, size=2**13)
    ram1   = AxiRam(AxiBus.from_prefix(dut, "m1_axi"), dut.clk_i, dut.rst_ni, reset_active_level=False, size=2**13)

    dut.rst_ni.value = 0
    for _ in range(5): await RisingEdge(dut.clk_i)
    dut.rst_ni.value = 1
    for _ in range(2): await RisingEdge(dut.clk_i)

    # region0 [0,0x1000) must land in ram0; region1 [0x1000,0x2000) in ram1
    for _ in range(12):
        a0, d0 = random.randrange(0x0000, 0x1000, 4), random.randbytes(4)
        await master.write(a0, d0)
        assert (await master.read(a0, 4)).data == d0, f"region0 rd @ {a0:#x}"
        assert ram0.read(a0, 4) == d0, f"region0 not physically in ram0 @ {a0:#x}"

        a1, d1 = random.randrange(0x1000, 0x2000, 4), random.randbytes(4)
        await master.write(a1, d1)
        assert (await master.read(a1, 4)).data == d1, f"region1 rd @ {a1:#x}"
        assert ram1.read(a1, 4) == d1, f"region1 not physically in ram1 @ {a1:#x}"

    # bursts within a region
    for _ in range(4):
        a, d = random.randrange(0x0000, 0x0F00, 4), random.randbytes(64)
        await master.write(a, d)
        assert (await master.read(a, 64)).data == d
        assert ram0.read(a, 64) == d

    dut._log.info("demux cocotbext-axi PASS: per-region routing + data verified")