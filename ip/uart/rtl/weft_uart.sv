// weft_uart.sv — clean-room memory-mapped UART (AXI4 subordinate + 8N1 TX).
//
// Register map (word-aligned, within the port's address region):
//   0x00  TXDATA  (W)  write low byte -> transmit (dropped if TX busy)
//   0x04  STATUS  (R)  bit0 = tx_busy
// Single outstanding per direction; single-beat accesses (len ignored).
// TX is real 8N1 serial at CLKS_PER_BIT clocks/bit -> drives tx_o for the board.
`default_nettype none
module weft_uart import weft_axi_pkg::*; #(
  parameter type         req_t        = logic,
  parameter type         rsp_t        = logic,
  parameter int unsigned CLKS_PER_BIT = 868    // 100 MHz / 115200
) (
  input  wire  clk_i,
  input  wire  rst_ni,
  input  req_t slv_req_i,
  output rsp_t slv_rsp_o,
  output logic tx_o
);
  // ---- AXI write channel ----
  typedef enum logic [1:0] {W_IDLE, W_DATA, W_RESP} w_e; w_e w_q;
  logic [11:0] waddr_q; logic [$bits(slv_req_i.aw.id)-1:0] wid_q;
  // ---- AXI read channel ----
  typedef enum logic {R_IDLE, R_DATA} r_e; r_e r_q;
  logic [11:0] raddr_q; logic [$bits(slv_req_i.ar.id)-1:0] rid_q;

  // ---- TX serializer ----
  logic [9:0]  tx_sh;  logic [3:0] tx_bits; logic [15:0] tx_div;
  wire         tx_busy = (tx_bits != 4'd0);
  wire         wr_fire = (w_q == W_DATA) && slv_req_i.w_valid;
  wire         tx_start = wr_fire && (waddr_q[3:2] == 2'd0);   // write to TXDATA
  wire [7:0]   tx_byte  = slv_req_i.w.data[7:0];
  assign tx_o = tx_busy ? tx_sh[0] : 1'b1;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      tx_sh <= 10'h3FF; tx_bits <= '0; tx_div <= '0;
    end else if (tx_bits == 4'd0) begin
      if (tx_start) begin tx_sh <= {1'b1, tx_byte, 1'b0}; tx_bits <= 4'd10; tx_div <= 16'(CLKS_PER_BIT-1); end
    end else if (tx_div == 16'd0) begin
      tx_div <= 16'(CLKS_PER_BIT-1); tx_sh <= {1'b1, tx_sh[9:1]}; tx_bits <= tx_bits - 4'd1;
    end else tx_div <= tx_div - 16'd1;
  end

  // ---- AXI responses ----
  always_comb begin
    slv_rsp_o          = '0;
    slv_rsp_o.aw_ready = (w_q == W_IDLE);
    slv_rsp_o.w_ready  = (w_q == W_DATA);
    slv_rsp_o.b_valid  = (w_q == W_RESP);
    slv_rsp_o.b.id     = wid_q;
    slv_rsp_o.b.resp   = RESP_OKAY;
    slv_rsp_o.ar_ready = (r_q == R_IDLE);
    slv_rsp_o.r_valid  = (r_q == R_DATA);
    slv_rsp_o.r.id     = rid_q;
    slv_rsp_o.r.data   = (raddr_q[3:2] == 2'd1) ? {31'd0, tx_busy} : 32'd0;  // STATUS / else 0
    slv_rsp_o.r.resp   = RESP_OKAY;
    slv_rsp_o.r.last   = 1'b1;
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin w_q <= W_IDLE; r_q <= R_IDLE; end
    else begin
      unique case (w_q)
        W_IDLE: if (slv_req_i.aw_valid) begin waddr_q <= slv_req_i.aw.addr[11:0]; wid_q <= slv_req_i.aw.id; w_q <= W_DATA; end
        W_DATA: if (slv_req_i.w_valid && slv_req_i.w.last) w_q <= W_RESP;
        W_RESP: if (slv_req_i.b_ready) w_q <= W_IDLE;
      endcase
      unique case (r_q)
        R_IDLE: if (slv_req_i.ar_valid) begin raddr_q <= slv_req_i.ar.addr[11:0]; rid_q <= slv_req_i.ar.id; r_q <= R_DATA; end
        R_DATA: if (slv_req_i.r_ready) r_q <= R_IDLE;
      endcase
    end
  end
endmodule
`default_nettype wire