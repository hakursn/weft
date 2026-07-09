#!/usr/bin/env bash
# ALU + branch cross-check vs the golden ISS. Regenerates vectors, then simulates.
set -e; D="$(cd "$(dirname "$0")" && pwd)"; cd "$D"
python3 gen_exec_vectors.py 2>/dev/null || echo "(using committed vectors)"
verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED \
  "$D/../../rtl/warp_pkg.sv" "$D/../../rtl/warp_alu.sv" "$D/../../rtl/warp_branch.sv" \
  "$D/tb_exec_sv.sv" --top-module tb_exec_sv
./obj_dir/Vtb_exec_sv