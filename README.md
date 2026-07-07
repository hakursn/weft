# Weft

An FPGA SoC builder. It weaves independently packaged IP — a RISC-V core, an AXI
crossbar, memory, peripherals — into clean, **non-flattened** SystemVerilog, with
a **technology abstraction layer** so one design can target more than one FPGA
family. Open-source components first; commercial IP added over time.

First bring-up target: Arty A7-100T (Artix-7).