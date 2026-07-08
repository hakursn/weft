import random, cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotbext.axi import AxiBus, AxiMaster, AxiRam

@cocotb.test()
async def mux_merge(dut):
    cocotb.start_soon(Clock(dut.clk_i, 10, unit="ns").start())
    m0  = AxiMaster(AxiBus.from_prefix(dut, "s0_axi"), dut.clk_i, dut.rst_ni, reset_active_level=False)
    m1  = AxiMaster(AxiBus.from_prefix(dut, "s1_axi"), dut.clk_i, dut.rst_ni, reset_active_level=False)
    ram = AxiRam(AxiBus.from_prefix(dut, "m_axi"), dut.clk_i, dut.rst_ni, reset_active_level=False, size=2**13)

    dut.rst_ni.value = 0
    for _ in range(5): await RisingEdge(dut.clk_i)
    dut.rst_ni.value = 1
    for _ in range(2): await RisingEdge(dut.clk_i)

    # each manager owns a disjoint region of the shared subordinate:
    #   m0 -> [0x0000,0x0800)   m1 -> [0x0800,0x1000)
    # both streams merge onto one AxiRam; responses must return to the right manager
    # (the mux prepends the source index onto the AXI id, then strips it on B/R).
    for _ in range(16):
        a0, d0 = random.randrange(0x0000, 0x0800, 4), random.randbytes(4)
        a1, d1 = random.randrange(0x0800, 0x1000, 4), random.randbytes(4)
        # concurrent writes exercise AW round-robin + W-follow ordering
        t0 = cocotb.start_soon(m0.write(a0, d0))
        t1 = cocotb.start_soon(m1.write(a1, d1))
        await t0; await t1
        # concurrent reads exercise AR round-robin + R id-routing
        r0 = cocotb.start_soon(m0.read(a0, 4))
        r1 = cocotb.start_soon(m1.read(a1, 4))
        res0 = await r0; res1 = await r1
        assert res0.data == d0, f"m0 rd @ {a0:#x}: {res0.data.hex()} != {d0.hex()}"
        assert res1.data == d1, f"m1 rd @ {a1:#x}: {res1.data.hex()} != {d1.hex()}"
        assert ram.read(a0, 4) == d0 and ram.read(a1, 4) == d1

    # interleaved bursts from both managers
    for _ in range(4):
        a0, d0 = random.randrange(0x0000, 0x0700, 4), random.randbytes(64)
        a1, d1 = random.randrange(0x0800, 0x0F00, 4), random.randbytes(128)
        t0 = cocotb.start_soon(m0.write(a0, d0))
        t1 = cocotb.start_soon(m1.write(a1, d1))
        await t0; await t1
        assert (await m0.read(a0, 64)).data == d0
        assert (await m1.read(a1, 128)).data == d1

    dut._log.info("mux cocotbext-axi PASS: 2 managers merged, responses id-routed, data verified")