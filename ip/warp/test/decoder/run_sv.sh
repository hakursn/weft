#!/usr/bin/env bash
set -e; D="$(cd "$(dirname "$0")" && pwd)"
verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED "$D/../../rtl/warp_pkg.sv" "$D/../../rtl/warp_decoder.sv" "$D/tb_decoder_sv.sv" --top-module tb_decoder_sv
./obj_dir/Vtb_decoder_sv