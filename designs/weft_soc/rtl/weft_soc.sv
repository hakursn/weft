// weft_soc.sv — first Weft SoC: Warp core -> AXI crossbar -> BRAM + UART.
//
//   Warp (2 masters: I-fetch, data) --> weft_axi_xbar (2x2) --> BRAM  @ 0x8000_0000 (64 KiB)
//                                                           \-> UART  @ 0x1000_0000
// Reset is synchronized (async assert / sync deassert). MEM_INIT preloads the BRAM in sim.
`include "weft_axi_typedef.svh"
`default_nettype none
module weft_soc import weft_axi_pkg::*; #(
  parameter string       MEM_INIT   = "",
  parameter int unsigned MEM_WORDS  = 16384,          // 64 KiB
  parameter int unsigned UART_CPB   = 868,
  parameter logic [31:0] RESET_ADDR = 32'h8000_0000
) (
  input  wire  clk_i,
  input  wire  arst_ni,        // async reset in (from board)
  output wire  uart_tx_o,
  // retire trace (observability)
  output logic        retire_valid_o,
  output logic [31:0] retire_pc_o
);
  // ---- reset synchronizer ----
  logic rst_n1, rst_n2;
  always_ff @(posedge clk_i or negedge arst_ni)
    if (!arst_ni) {rst_n2, rst_n1} <= 2'b00; else {rst_n2, rst_n1} <= {rst_n1, 1'b1};
  wire rst_ni = rst_n2;

  // ---- AXI types: managers id=4, subordinates id = 4 + clog2(2) = 5 ----
  typedef logic [31:0] addr_t; typedef logic [31:0] data_t; typedef logic [3:0] strb_t; typedef logic user_t;
  typedef logic [3:0]  mid_t;  typedef logic [4:0]  sid_t;
  `WEFT_AXI_TYPEDEF_ALL(m, addr_t, mid_t, data_t, strb_t, user_t)   // manager side
  `WEFT_AXI_TYPEDEF_ALL(s, addr_t, sid_t, data_t, strb_t, user_t)   // subordinate side

  m_req_t s_req [2]; m_rsp_t s_rsp [2];   // xbar manager (slave) ports
  s_req_t d_req [2]; s_rsp_t d_rsp [2];   // xbar subordinate (master) ports

  // ---- address map ----
  localparam xbar_rule_t [1:0] MAP = '{
    '{idx:32'd1, start_addr:64'h0000_0000_1000_0000, end_addr:64'h0000_0000_1000_1000},  // UART
    '{idx:32'd0, start_addr:64'h0000_0000_8000_0000, end_addr:64'h0000_0000_8001_0000}   // BRAM
  };

  // ---- Warp core (two AXI masters) ----
  warp_axi #(.req_t(m_req_t), .rsp_t(m_rsp_t), .RESET_ADDR(RESET_ADDR)) u_cpu (
    .clk_i, .rst_ni,
    .i_req_o(s_req[0]), .i_rsp_i(s_rsp[0]),
    .d_req_o(s_req[1]), .d_rsp_i(s_rsp[1]),
    .retire_valid_o(retire_valid_o), .retire_pc_o(retire_pc_o),
    .retire_instr_o(), .retire_rd_o(), .retire_rd_wdata_o(),
    .retire_mem_valid_o(), .retire_mem_addr_o(), .retire_mem_wstrb_o(), .retire_mem_wdata_o());

  // ---- crossbar ----
  weft_axi_xbar #(
    .NoSlvPorts(2), .NoMstPorts(2), .SlvIdWidth(4), .NoRules(2),
    .rule_t(xbar_rule_t), .AddrMap(MAP),
    .slv_req_t(m_req_t), .slv_rsp_t(m_rsp_t), .mst_req_t(s_req_t), .mst_rsp_t(s_rsp_t)
  ) u_xbar (
    .clk_i, .rst_ni, .slv_reqs_i(s_req), .slv_rsps_o(s_rsp), .mst_reqs_o(d_req), .mst_rsps_i(d_rsp));

  // ---- subordinates ----
  weft_axi_bram #(.req_t(s_req_t), .rsp_t(s_rsp_t), .MemWords(MEM_WORDS), .InitFile(MEM_INIT)) u_bram (
    .clk_i, .rst_ni, .slv_req_i(d_req[0]), .slv_rsp_o(d_rsp[0]));

  weft_uart #(.req_t(s_req_t), .rsp_t(s_rsp_t), .CLKS_PER_BIT(UART_CPB)) u_uart (
    .clk_i, .rst_ni, .slv_req_i(d_req[1]), .slv_rsp_o(d_rsp[1]), .tx_o(uart_tx_o));
endmodule
`default_nettype wire