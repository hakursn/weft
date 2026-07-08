#!/usr/bin/env bash
# Standalone SystemVerilog testbench for the 2x2 xbar — runs on any Verilator 5.x.
set -e
D="$(cd "$(dirname "$0")" && pwd)"
verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED -Wno-UNDRIVEN -Wno-CASEINCOMPLETE \
  -I"$D/../../../axi_common/rtl" \
  "$D/../../../axi_common/rtl/weft_axi_pkg.sv" \
  "$D/../../../common/rtl/weft_addr_decode.sv" \
  "$D/../../../common/rtl/weft_rr_arbiter.sv" \
  "$D/../../../common/rtl/weft_sync_fifo.sv" \
  "$D/../../rtl/weft_axi_demux.sv" \
  "$D/../../rtl/weft_axi_mux.sv" \
  "$D/../../rtl/weft_axi_err_slv.sv" \
  "$D/../../rtl/weft_axi_xbar.sv" \
  "$D/weft_axi_xbar_flat.sv" \
  "$D/tb_xbar_sv.sv" --top-module tb_xbar_sv
./obj_dir/Vtb_xbar_sv