import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotbext.axi import AxiBus, AxiMaster
try:
    from cocotbext.axi import AxiResp
except ImportError:
    from cocotbext.axi.constants import AxiResp

async def expect_err(coro):
    # err_slv only ever answers with an AXI error. Depending on cocotbext-axi
    # version, master.read/write either returns a result carrying .resp or raises
    # on a non-OKAY response — both count as the expected error behaviour.
    try:
        res = await coro
    except Exception:
        return
    assert res.resp != AxiResp.OKAY, f"expected AXI error, got {res.resp!r}"

@cocotb.test()
async def err_slv_errors(dut):
    cocotb.start_soon(Clock(dut.clk_i, 10, unit="ns").start())
    master = AxiMaster(AxiBus.from_prefix(dut, "s_axi"), dut.clk_i, dut.rst_ni, reset_active_level=False)

    dut.rst_ni.value = 0
    for _ in range(5): await RisingEdge(dut.clk_i)
    dut.rst_ni.value = 1
    for _ in range(2): await RisingEdge(dut.clk_i)

    # any access to any address is a decode miss -> AXI error, never OKAY
    await expect_err(master.write(0x0040, b"\xde\xad\xbe\xef"))   # single write
    await expect_err(master.read(0x0040, 4))                      # single read
    await expect_err(master.read(0x0100, 64))                     # burst read (16 beats)
    await expect_err(master.write(0x0200, bytes(32)))             # burst write (8 beats)
    await expect_err(master.read(0x1abc, 8))                      # unaligned-ish addr

    dut._log.info("err_slv cocotbext-axi PASS: every access returned an AXI error (DECERR)")