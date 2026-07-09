#!/usr/bin/env bash
# Whole-core smoke test: assemble a program with the golden model, run it through
# warp_axi (both AXI masters) + a behavioral memory, check the result. Any Verilator 5.x.
set -e; D="$(cd "$(dirname "$0")" && pwd)"; cd "$D"
python3 gen_smoke_prog.py 2>/dev/null || echo "(using committed prog.hex)"
verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED -I"$D/../../../axi_common/rtl" \
  "$D/../../../axi_common/rtl/weft_axi_pkg.sv" \
  "$D/../../rtl/warp_pkg.sv" "$D/../../rtl/warp_regfile.sv" "$D/../../rtl/warp_decoder.sv" \
  "$D/../../rtl/warp_alu.sv" "$D/../../rtl/warp_branch.sv" \
  "$D/../../rtl/warp_axi_ifetch.sv" "$D/../../rtl/warp_axi_lsu.sv" \
  "$D/../../rtl/warp_core.sv" "$D/../../rtl/warp_axi.sv" "$D/tb_smoke_sv.sv" --top-module tb_smoke_sv
./obj_dir/Vtb_smoke_sv