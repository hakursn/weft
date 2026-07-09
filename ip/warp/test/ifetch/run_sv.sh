#!/usr/bin/env bash
# Standalone SV testbench for warp_axi_ifetch — runs on any Verilator 5.x.
set -e
D="$(cd "$(dirname "$0")" && pwd)"
verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED \
  -I"$D/../../../axi_common/rtl" \
  "$D/../../../axi_common/rtl/weft_axi_pkg.sv" \
  "$D/../../rtl/warp_pkg.sv" \
  "$D/../../rtl/warp_axi_ifetch.sv" \
  "$D/tb_ifetch_sv.sv" --top-module tb_ifetch_sv
./obj_dir/Vtb_ifetch_sv