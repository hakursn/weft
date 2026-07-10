#!/usr/bin/env bash
# First Weft SoC: Warp -> crossbar -> BRAM + UART. Assembles a print program, runs it,
# deserializes the UART line, checks the output. Any Verilator 5.x.
set -e; D="$(cd "$(dirname "$0")" && pwd)"; R="$D/../../.."
python3 "$D/gen_soc_prog.py" 2>/dev/null || echo "(using committed prog.hex)"
verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED -I"$R/ip/axi_common/rtl" \
  "$R/ip/axi_common/rtl/weft_axi_pkg.sv" \
  "$R/ip/common/rtl/weft_skid_buffer.sv" "$R/ip/common/rtl/weft_rr_arbiter.sv" \
  "$R/ip/common/rtl/weft_sync_fifo.sv" "$R/ip/common/rtl/weft_addr_decode.sv" \
  "$R/ip/axi_xbar/rtl/weft_axi_demux.sv" "$R/ip/axi_xbar/rtl/weft_axi_mux.sv" \
  "$R/ip/axi_xbar/rtl/weft_axi_err_slv.sv" "$R/ip/axi_xbar/rtl/weft_axi_xbar.sv" \
  "$R/ip/axi_bram/rtl/weft_axi_bram.sv" "$R/ip/uart/rtl/weft_uart.sv" \
  "$R/ip/warp/rtl/warp_pkg.sv" "$R/ip/warp/rtl/warp_regfile.sv" "$R/ip/warp/rtl/warp_decoder.sv" \
  "$R/ip/warp/rtl/warp_alu.sv" "$R/ip/warp/rtl/warp_branch.sv" \
  "$R/ip/warp/rtl/warp_axi_ifetch.sv" "$R/ip/warp/rtl/warp_axi_lsu.sv" \
  "$R/ip/warp/rtl/warp_core.sv" "$R/ip/warp/rtl/warp_axi.sv" \
  "$D/../rtl/weft_soc.sv" "$D/tb_soc_sv.sv" --top-module tb_soc_sv
./obj_dir/Vtb_soc_sv