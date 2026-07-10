#!/usr/bin/env bash
set -e; D="$(cd "$(dirname "$0")" && pwd)"; A="$D/../../../axi_common/rtl"
verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED -I"$A" \
  "$A/weft_axi_pkg.sv" "$D/../../rtl/weft_uart.sv" "$D/tb_uart_sv.sv" --top-module tb_uart_sv
./obj_dir/Vtb_uart_sv