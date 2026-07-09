#!/usr/bin/env bash
set -e; D="$(cd "$(dirname "$0")" && pwd)"
verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED "$D/../../rtl/warp_regfile.sv" "$D/tb_regfile_sv.sv" --top-module tb_regfile_sv
./obj_dir/Vtb_regfile_sv