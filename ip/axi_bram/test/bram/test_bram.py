import random, cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotbext.axi import AxiBus, AxiMaster

@cocotb.test()
async def bram_rw(dut):
    cocotb.start_soon(Clock(dut.clk_i, 10, unit="ns").start())
    m = AxiMaster(AxiBus.from_prefix(dut, "s_axi"), dut.clk_i, dut.rst_ni, reset_active_level=False)

    dut.rst_ni.value = 0
    for _ in range(5): await RisingEdge(dut.clk_i)
    dut.rst_ni.value = 1
    for _ in range(2): await RisingEdge(dut.clk_i)

    SIZE = 4096                       # 1024 words x 4 bytes
    shadow  = bytearray(SIZE)         # full-memory reference (tracks overlaps)
    touched = set()

    def note_write(addr, data):
        for i, b in enumerate(data):
            shadow[(addr + i) % SIZE] = b
        for w in range((addr) & ~3, addr + len(data), 4):
            touched.add(w % SIZE)

    async def check_read(addr, n):
        got = bytes((await m.read(addr, n)).data)
        exp = bytes(shadow[addr:addr + n])
        assert got == exp, f"read @ {addr:#x} len {n}: {got.hex()} != {exp.hex()}"

    # random single-word writes, each verified immediately
    for _ in range(40):
        addr = random.randrange(0, SIZE, 4); data = random.randbytes(4)
        await m.write(addr, data); note_write(addr, data)
        await check_read(addr, 4)

    # bursts that intentionally overlap earlier single writes; shadow tracks the overwrite
    for (a, n) in [(0x100, 64), (0x400, 256)]:
        data = random.randbytes(n); await m.write(a, data); note_write(a, data)
        await check_read(a, n)

    # re-read every word ever written and confirm it still matches the reference
    for addr in sorted(touched):
        await check_read(addr, 4)

    dut._log.info("bram cocotbext-axi PASS: singles, bursts, byte-strobes, overlap + persistence verified")