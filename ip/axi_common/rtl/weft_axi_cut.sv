// weft_axi_cut.sv — AXI4 register slice: a skid buffer on each of the five
// channels. Fully pipelines an AXI link (breaks valid+ready timing paths both
// ways) using only the verified weft_skid_buffer. Generic AXI plumbing.
`include "weft_axi_typedef.svh"
`default_nettype none
module weft_axi_cut #(
  parameter type aw_chan_t = logic,
  parameter type w_chan_t  = logic,
  parameter type b_chan_t  = logic,
  parameter type ar_chan_t = logic,
  parameter type r_chan_t  = logic,
  parameter type req_t     = logic,
  parameter type rsp_t     = logic,
  parameter bit  Bypass    = 1'b0
) (
  input  wire   clk_i,
  input  wire   rst_ni,
  input  req_t  slv_req_i,   // from manager
  output rsp_t  slv_rsp_o,
  output req_t  mst_req_o,   // to subordinate
  input  rsp_t  mst_rsp_i
);
  // forward: manager -> subordinate
  weft_skid_buffer #(.data_t(aw_chan_t), .Bypass(Bypass)) i_aw (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .in_data_i(slv_req_i.aw), .in_valid_i(slv_req_i.aw_valid), .in_ready_o(slv_rsp_o.aw_ready),
    .out_data_o(mst_req_o.aw), .out_valid_o(mst_req_o.aw_valid), .out_ready_i(mst_rsp_i.aw_ready));
  weft_skid_buffer #(.data_t(w_chan_t), .Bypass(Bypass)) i_w (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .in_data_i(slv_req_i.w), .in_valid_i(slv_req_i.w_valid), .in_ready_o(slv_rsp_o.w_ready),
    .out_data_o(mst_req_o.w), .out_valid_o(mst_req_o.w_valid), .out_ready_i(mst_rsp_i.w_ready));
  weft_skid_buffer #(.data_t(ar_chan_t), .Bypass(Bypass)) i_ar (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .in_data_i(slv_req_i.ar), .in_valid_i(slv_req_i.ar_valid), .in_ready_o(slv_rsp_o.ar_ready),
    .out_data_o(mst_req_o.ar), .out_valid_o(mst_req_o.ar_valid), .out_ready_i(mst_rsp_i.ar_ready));
  // backward: subordinate -> manager
  weft_skid_buffer #(.data_t(b_chan_t), .Bypass(Bypass)) i_b (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .in_data_i(mst_rsp_i.b), .in_valid_i(mst_rsp_i.b_valid), .in_ready_o(mst_req_o.b_ready),
    .out_data_o(slv_rsp_o.b), .out_valid_o(slv_rsp_o.b_valid), .out_ready_i(slv_req_i.b_ready));
  weft_skid_buffer #(.data_t(r_chan_t), .Bypass(Bypass)) i_r (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .in_data_i(mst_rsp_i.r), .in_valid_i(mst_rsp_i.r_valid), .in_ready_o(mst_req_o.r_ready),
    .out_data_o(slv_rsp_o.r), .out_valid_o(slv_rsp_o.r_valid), .out_ready_i(slv_req_i.r_ready));
endmodule
`default_nettype wire