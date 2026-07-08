// weft_axi_err_slv.sv — terminal AXI subordinate for decode misses.
//
// Accepts any AW/AR (and drains the associated W burst) and answers with an
// AXI error response (DECERR by default; SLVERR selectable). Reads return the
// correct number of beats (len+1), each carrying the error code, data 0, and
// last on the final beat. The AXI id is echoed on B/R. One outstanding
// transaction per direction — write and read channels run independently.
`default_nettype none
module weft_axi_err_slv import weft_axi_pkg::*; #(
  parameter type   req_t = logic,
  parameter type   rsp_t = logic,
  parameter resp_t Resp  = RESP_DECERR   // RESP_DECERR or RESP_SLVERR
) (
  input  wire  clk_i,
  input  wire  rst_ni,
  input  req_t slv_req_i,
  output rsp_t slv_rsp_o
);
  // ---- write channel ----
  typedef enum logic [1:0] {W_IDLE, W_DATA, W_RESP} w_state_e;
  w_state_e w_q;
  logic [$bits(slv_req_i.aw.id)-1:0] w_id_q;

  // ---- read channel ----
  typedef enum logic {R_IDLE, R_DATA} r_state_e;
  r_state_e r_q;
  logic [$bits(slv_req_i.ar.id)-1:0] r_id_q;
  logic [7:0]                        r_len_q, r_cnt_q;

  always_comb begin
    slv_rsp_o = '0;
    // write handshakes
    slv_rsp_o.aw_ready = (w_q == W_IDLE);
    slv_rsp_o.w_ready  = (w_q == W_DATA);
    slv_rsp_o.b_valid  = (w_q == W_RESP);
    slv_rsp_o.b.id     = w_id_q;
    slv_rsp_o.b.resp   = Resp;
    // read handshakes
    slv_rsp_o.ar_ready = (r_q == R_IDLE);
    slv_rsp_o.r_valid  = (r_q == R_DATA);
    slv_rsp_o.r.id     = r_id_q;
    slv_rsp_o.r.data   = '0;
    slv_rsp_o.r.resp   = Resp;
    slv_rsp_o.r.last   = (r_cnt_q == r_len_q);
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      w_q <= W_IDLE;
      r_q <= R_IDLE;
      r_cnt_q <= '0;
    end else begin
      // write FSM
      unique case (w_q)
        W_IDLE: if (slv_req_i.aw_valid) begin
                  w_id_q <= slv_req_i.aw.id;
                  w_q    <= W_DATA;
                end
        W_DATA: if (slv_req_i.w_valid && slv_req_i.w.last) w_q <= W_RESP;
        W_RESP: if (slv_req_i.b_ready) w_q <= W_IDLE;
        default: w_q <= W_IDLE;
      endcase
      // read FSM
      unique case (r_q)
        R_IDLE: if (slv_req_i.ar_valid) begin
                  r_id_q  <= slv_req_i.ar.id;
                  r_len_q <= slv_req_i.ar.len;
                  r_cnt_q <= '0;
                  r_q     <= R_DATA;
                end
        R_DATA: if (slv_req_i.r_ready) begin
                  if (r_cnt_q == r_len_q) r_q <= R_IDLE;
                  else                    r_cnt_q <= r_cnt_q + 8'd1;
                end
        default: r_q <= R_IDLE;
      endcase
    end
  end
endmodule
`default_nettype wire