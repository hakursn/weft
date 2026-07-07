# Weft

An FPGA SoC builder. It weaves independently packaged IP — a RISC-V core, an AXI
crossbar, memory, peripherals — into clean, **non-flattened** SystemVerilog, with
a **technology abstraction layer** so one design can target more than one FPGA
family. Open-source components first; commercial IP added over time.

First bring-up target: Arty A7-100T (Artix-7).

## Layout

    ip/         self-contained IP-XACT components (rtl/ + tech/<family>/ + ipxact/)
    vendor/     pinned upstream sources (git submodules)
    designs/    hierarchical IP-XACT designs (the SoCs)
    targets/    FuseSoC .core files + board constraints
    generators/ optional custom IP-XACT generators
    scripts/    build + tooling helpers
    docs/       blog series and notes
    output/     generated non-flattened SystemVerilog (git-ignored)

## Getting started

    git init
    bash scaffold_weft.sh .                 # (this script)
    # add upstream deps — see vendor/README.md
    # package IPs and assemble the design in Kactus2
    bash scripts/build.sh                    # generate + FuseSoC -> Vivado

## Tooling

IP-XACT packaging + design capture (Kactus2), build orchestration (FuseSoC +
Edalize), AXI/AXI-Lite (pulp-platform/axi), AXI-Stream (verilog-axis),
registers (PeakRDL / SystemRDL), tech cells (tech_cells_generic pattern).
