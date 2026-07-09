#!/usr/bin/env bash
# Lock-step cosim: builds the RTL harness once, then runs directed + random programs,
# diffing the RTL retire trace + memory against the golden ISS (warp_isa.py).
# Usage: bash run_cosim.sh [num_random]   (default 60)
set -e; D="$(cd "$(dirname "$0")" && pwd)"; cd "$D"
AXI="$D/../../../axi_common/rtl"; RTL="$D/../../rtl"
verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED -I"$AXI" \
  "$AXI/weft_axi_pkg.sv" \
  "$RTL/warp_pkg.sv" "$RTL/warp_regfile.sv" "$RTL/warp_decoder.sv" "$RTL/warp_alu.sv" \
  "$RTL/warp_branch.sv" "$RTL/warp_axi_ifetch.sv" "$RTL/warp_axi_lsu.sv" \
  "$RTL/warp_core.sv" "$RTL/warp_axi.sv" "$D/tb_cosim_sv.sv" \
  --top-module tb_cosim_sv -Mdir "$D/obj_dir"
python3 "$D/warp_cosim.py" "${1:-60}"