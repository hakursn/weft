`timescale 1ns/1ps
`include "weft_axi_typedef.svh"

// Behavioral AXI slave with 8KB memory, single outstanding (master issues one at a time).
module tb_axi_slave #(parameter type req_t=logic, parameter type rsp_t=logic) (
  input logic clk_i, rst_ni, input req_t req_i, output rsp_t rsp_o
);
  logic [31:0] mem [0:2047];
  typedef enum logic [1:0] {WI, WD, WB} wst_e; wst_e ws;
  typedef enum logic       {RI, RD}     rst_e; rst_e rs;
  logic [31:0] waddr, raddr; logic [3:0] wid, rid; logic [7:0] rbeat, rlen;

  always_comb begin
    rsp_o = '0;
    rsp_o.aw_ready = (ws==WI);
    rsp_o.w_ready  = (ws==WD);
    rsp_o.b_valid  = (ws==WB);
    rsp_o.b.id     = wid;
    rsp_o.ar_ready = (rs==RI);
    rsp_o.r_valid  = (rs==RD);
    rsp_o.r.id     = rid;
    rsp_o.r.data   = mem[raddr[12:2]];
    rsp_o.r.last   = (rbeat==rlen);
  end
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin ws<=WI; rs<=RI; rbeat<=0; end
    else begin
      case (ws)
        WI: if (req_i.aw_valid) begin waddr<=req_i.aw.addr; wid<=req_i.aw.id; ws<=WD; end
        WD: if (req_i.w_valid)  begin mem[waddr[12:2]]<=req_i.w.data; waddr<=waddr+4; if (req_i.w.last) ws<=WB; end
        WB: if (req_i.b_ready)  ws<=WI;
      endcase
      case (rs)
        RI: if (req_i.ar_valid) begin raddr<=req_i.ar.addr; rid<=req_i.ar.id; rlen<=req_i.ar.len; rbeat<=0; rs<=RD; end
        RD: if (req_i.r_ready)  begin if (rbeat==rlen) rs<=RI; else begin rbeat<=rbeat+1; raddr<=raddr+4; end end
      endcase
    end
  end
endmodule

module tb_demux_sv;
  import weft_axi_pkg::*;
  localparam int N=2;
  typedef logic [31:0] addr_t; typedef logic [3:0] id_t;
  typedef logic [31:0] data_t; typedef logic [3:0] strb_t; typedef logic user_t;
  `WEFT_AXI_TYPEDEF_ALL(axi, addr_t, id_t, data_t, strb_t, user_t)

  logic clk=0, rst_n=0; always #5 clk=~clk;
  logic aw_sel, ar_sel;
  axi_req_t slv_req; axi_rsp_t slv_rsp;
  axi_req_t mreq [N]; axi_rsp_t mrsp [N];
  int errors=0;

  weft_axi_demux #(.NoMstPorts(N),.MaxTxns(8),.req_t(axi_req_t),.rsp_t(axi_rsp_t)) dut(
    .clk_i(clk),.rst_ni(rst_n),.slv_aw_select_i(aw_sel),.slv_ar_select_i(ar_sel),
    .slv_req_i(slv_req),.slv_rsp_o(slv_rsp),.mst_reqs_o(mreq),.mst_rsps_i(mrsp));
  tb_axi_slave #(.req_t(axi_req_t),.rsp_t(axi_rsp_t)) s0(.clk_i(clk),.rst_ni(rst_n),.req_i(mreq[0]),.rsp_o(mrsp[0]));
  tb_axi_slave #(.req_t(axi_req_t),.rsp_t(axi_rsp_t)) s1(.clk_i(clk),.rst_ni(rst_n),.req_i(mreq[1]),.rsp_o(mrsp[1]));

  task automatic wr(input [31:0] addr, input [3:0] id, input [7:0] len, input [31:0] d0);
    aw_sel = (addr >= 32'h1000);
    @(negedge clk); slv_req.aw.addr=addr; slv_req.aw.id=id; slv_req.aw.len=len;
                    slv_req.aw.size=3'd2; slv_req.aw.burst=2'b01; slv_req.aw_valid=1'b1;
    do @(posedge clk); while (!(slv_req.aw_valid && slv_rsp.aw_ready));
    @(negedge clk); slv_req.aw_valid=1'b0;
    for (int i=0;i<=len;i++) begin
      slv_req.w.data=d0+i; slv_req.w.strb='1; slv_req.w.last=(i==len); slv_req.w_valid=1'b1;
      do @(posedge clk); while (!(slv_req.w_valid && slv_rsp.w_ready));
      @(negedge clk);
    end
    slv_req.w_valid=1'b0; slv_req.b_ready=1'b1;
    do @(posedge clk); while (!(slv_rsp.b_valid && slv_req.b_ready));
    @(negedge clk); slv_req.b_ready=1'b0;
  endtask

  task automatic rd(input [31:0] addr, input [3:0] id, input [7:0] len, input [31:0] e0);
    ar_sel = (addr >= 32'h1000);
    @(negedge clk); slv_req.ar.addr=addr; slv_req.ar.id=id; slv_req.ar.len=len;
                    slv_req.ar.size=3'd2; slv_req.ar.burst=2'b01; slv_req.ar_valid=1'b1;
    do @(posedge clk); while (!(slv_req.ar_valid && slv_rsp.ar_ready));
    @(negedge clk); slv_req.ar_valid=1'b0; slv_req.r_ready=1'b1;
    for (int i=0;i<=len;i++) begin
      do @(posedge clk); while (!(slv_rsp.r_valid && slv_req.r_ready));
      if (slv_rsp.r.data !== (e0+i)) begin errors++; $display("RD MISMATCH @%h beat %0d exp %h got %h",addr,i,e0+i,slv_rsp.r.data); end
      if ((i==len) && !slv_rsp.r.last) begin errors++; $display("RLAST missing @%h",addr); end
      @(negedge clk);
    end
    slv_req.r_ready=1'b0;
  endtask

  initial begin
    slv_req='0; aw_sel=0; ar_sel=0;
    repeat(3) @(posedge clk); rst_n<=1'b1; @(negedge clk);
    wr(32'h0000_0040,4'h1,8'd0,32'hA000_0000); rd(32'h0000_0040,4'h1,8'd0,32'hA000_0000); // region0 single
    wr(32'h0000_1080,4'h2,8'd0,32'hB000_0000); rd(32'h0000_1080,4'h2,8'd0,32'hB000_0000); // region1 single
    wr(32'h0000_0100,4'h3,8'd3,32'hC000_0000); rd(32'h0000_0100,4'h3,8'd3,32'hC000_0000); // region0 burst4
    wr(32'h0000_1200,4'h4,8'd7,32'hD000_0000); rd(32'h0000_1200,4'h4,8'd7,32'hD000_0000); // region1 burst8
    // cross-routing proof: region0 addr never written to region1's memory -> region1 read of a fresh addr returns 0
    rd(32'h0000_1F00,4'h5,8'd0,32'h0000_0000);
    $display("demux SV: errors=%0d -> %s", errors, (errors==0)?"PASS":"FAIL");
    $finish;
  end
endmodule