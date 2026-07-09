// warp_axi_ifetch.sv — Warp fetch interface -> AXI4 read-only master.
//
// The core presents a word-aligned PC (RV32I) on f_pc_i and holds f_req_i until the
// instruction is delivered on f_rvalid_o. This issues one single-beat AXI read per
// fetch (single outstanding). On a branch redirect the PC changes while a read may be
// in flight; the committed R beat is drained and discarded, then the new PC is fetched
// — the one thing AXI needs that a req/gnt bus does not.
`default_nettype none
module warp_axi_ifetch import weft_axi_pkg::*; #(
  parameter type req_t = logic,   // Weft AXI request bundle (manager side)
  parameter type rsp_t = logic
) (
  input  wire         clk_i,
  input  wire         rst_ni,
  // core fetch interface
  input  wire         f_req_i,
  input  wire [31:0]  f_pc_i,       // word-aligned PC
  output logic        f_rvalid_o,
  output logic [31:0] f_instr_o,
  // AXI read master
  output req_t        mst_req_o,
  input  rsp_t        mst_rsp_i
);
  typedef enum logic {S_AR, S_R} state_e;
  state_e      state_q;
  logic [31:0] addr_q;                       // address of the outstanding read
  wire  [31:0] pc_aligned = {f_pc_i[31:2], 2'b00};

  always_comb begin
    mst_req_o          = '0;
    mst_req_o.ar.id    = '0;
    mst_req_o.ar.addr  = pc_aligned;
    mst_req_o.ar.len   = '0;
    mst_req_o.ar.size  = 3'd2;        // 4 bytes
    mst_req_o.ar.burst = BURST_INCR;
    mst_req_o.ar_valid = (state_q == S_AR) && f_req_i;
    mst_req_o.r_ready  = (state_q == S_R);   // always drain (deliver or discard)
    // deliver only if the returned read still matches what the core wants right now
    f_instr_o  = mst_rsp_i.r.data;
    f_rvalid_o = (state_q == S_R) && mst_rsp_i.r_valid && f_req_i && (addr_q == pc_aligned);
  end

  wire ar_hs = mst_req_o.ar_valid && mst_rsp_i.ar_ready;
  wire r_hs  = mst_req_o.r_ready  && mst_rsp_i.r_valid;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      state_q <= S_AR;
      addr_q  <= '0;
    end else unique case (state_q)
      S_AR: if (ar_hs) begin addr_q <= pc_aligned; state_q <= S_R; end
      S_R : if (r_hs)  state_q <= S_AR;   // delivered or discarded -> re-issue next
    endcase
  end
endmodule
`default_nettype wire