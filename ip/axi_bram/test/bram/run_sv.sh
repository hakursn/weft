#!/usr/bin/env bash
# Standalone SystemVerilog testbench — runs on any Verilator 5.x.
set -e
D="$(cd "$(dirname "$0")" && pwd)"
verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED \
  -I"$D/../../../axi_common/rtl" \
  "$D/../../../axi_common/rtl/weft_axi_pkg.sv" \
  "$D/../../rtl/weft_axi_bram.sv" \
  "$D/tb_bram_sv.sv" --top-module tb_bram_sv
./obj_dir/Vtb_bram_sv