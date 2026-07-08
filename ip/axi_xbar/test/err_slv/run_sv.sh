#!/usr/bin/env bash
# Standalone SystemVerilog testbench — runs on any Verilator 5.x (incl. apt 5.020).
# No cocotb required.
set -e
D="$(cd "$(dirname "$0")" && pwd)"
verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED \
  -I"$D/../../../axi_common/rtl" \
  "$D/../../../axi_common/rtl/weft_axi_pkg.sv" \
  "$D/../../rtl/weft_axi_err_slv.sv" \
  "$D/tb_err_slv_sv.sv" --top-module tb_err_slv_sv
./obj_dir/Vtb_err_slv_sv