#!/usr/bin/env bash
# Standalone SystemVerilog testbench — runs on any Verilator 5.x (incl. apt 5.020).
# No cocotb required. Use this if your Verilator is older than 5.036.
set -e
D="$(cd "$(dirname "$0")" && pwd)"
verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED -Wno-UNDRIVEN -Wno-CASEINCOMPLETE \
  -I"$D/../../../axi_common/rtl" \
  "$D/../../../axi_common/rtl/weft_axi_pkg.sv" \
  "$D/../../../common/rtl/weft_rr_arbiter.sv" \
  "$D/../../../common/rtl/weft_sync_fifo.sv" \
  "$D/../../rtl/weft_axi_mux.sv" \
  "$D/weft_axi_mux_flat.sv" \
  "$D/tb_mux_sv.sv" --top-module tb_mux_sv
./obj_dir/Vtb_mux_sv