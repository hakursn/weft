// warp_pkg.sv — Warp core parameters (clean-room, FPGA-first RV32I core for Weft).
package warp_pkg;
  localparam int unsigned XLEN         = 32;
  localparam logic [31:0]  RESET_VECTOR = 32'h8000_0000;
  // AXI is driven single-outstanding, single-beat, full-word by the core's masters.
  localparam logic [2:0]   AX_SIZE_4B  = 3'd2;
endpackage