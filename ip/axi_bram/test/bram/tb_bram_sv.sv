`timescale 1ns/1ps
`include "weft_axi_typedef.svh"
module tb_bram_sv;
  import weft_axi_pkg::*;
  typedef logic [31:0] addr_t; typedef logic [3:0] id_t; typedef logic [31:0] data_t; typedef logic [3:0] strb_t; typedef logic user_t;
  `WEFT_AXI_TYPEDEF_ALL(x, addr_t, id_t, data_t, strb_t, user_t)
  logic clk=0, rst_n=0; always #5 clk=~clk;
  x_req_t rq; x_rsp_t rs; int errors=0;
  logic [31:0] shadow [0:1023];

  weft_axi_bram #(.req_t(x_req_t),.rsp_t(x_rsp_t),.MemWords(1024)) dut(.clk_i(clk),.rst_ni(rst_n),.slv_req_i(rq),.slv_rsp_o(rs));

  task automatic wr(input [31:0] addr, input [3:0] id, input [31:0] d0, input [7:0] len, input [3:0] strb=4'hF);
    @(negedge clk); rq.aw.id=id; rq.aw.addr=addr; rq.aw.len=len; rq.aw.size=3'd2; rq.aw.burst=BURST_INCR; rq.aw_valid=1'b1;
    do @(posedge clk); while(!(rq.aw_valid && rs.aw_ready));
    @(negedge clk); rq.aw_valid=1'b0;
    for(int i=0;i<=len;i++) begin
      rq.w.data=d0+i; rq.w.strb=strb; rq.w.last=(i==len); rq.w_valid=1'b1;
      do @(posedge clk); while(!(rq.w_valid && rs.w_ready));
      // update shadow (word addr increments)
      for(int b=0;b<4;b++) if(strb[b]) shadow[((addr>>2)+i) & 10'h3FF][b*8+:8]=(d0+i)>>(b*8);
      @(negedge clk);
    end
    rq.w_valid=1'b0; rq.b_ready=1'b1;
    do @(posedge clk); while(!(rs.b_valid && rq.b_ready));
    if(rs.b.resp!==RESP_OKAY) begin errors++; $display("WR resp FAIL %b",rs.b.resp); end
    if(rs.b.id!==id) begin errors++; $display("WR id FAIL %h",rs.b.id); end
    @(negedge clk); rq.b_ready=1'b0;
  endtask

  task automatic rd(input [31:0] addr, input [3:0] id, input [7:0] len);
    @(negedge clk); rq.ar.id=id; rq.ar.addr=addr; rq.ar.len=len; rq.ar.size=3'd2; rq.ar.burst=BURST_INCR; rq.ar_valid=1'b1;
    do @(posedge clk); while(!(rq.ar_valid && rs.ar_ready));
    @(negedge clk); rq.ar_valid=1'b0; rq.r_ready=1'b1;
    for(int i=0;i<=len;i++) begin
      do @(posedge clk); while(!(rs.r_valid && rq.r_ready));
      if(rs.r.data!==shadow[((addr>>2)+i)&10'h3FF]) begin errors++; $display("RD @%h beat %0d exp %h got %h",addr,i,shadow[((addr>>2)+i)&10'h3FF],rs.r.data); end
      if(rs.r.id!==id) begin errors++; $display("RD id FAIL %h",rs.r.id); end
      if(rs.r.last!==(i==len)) begin errors++; $display("RD last FAIL beat %0d",i); end
      @(negedge clk);
    end
    rq.r_ready=1'b0;
  endtask

  initial begin #200000; $display("bram SV: WATCHDOG"); $finish; end
  initial begin
    rq='0;
    repeat(3) @(posedge clk); rst_n<=1'b1; @(negedge clk);
    wr(32'h0000,4'h1,32'hCAFE0000,8'd0);  rd(32'h0000,4'h1,8'd0);
    wr(32'h0040,4'h2,32'h11220000,8'd7);  rd(32'h0040,4'h2,8'd7);   // burst
    wr(32'h0100,4'h3,32'hAABBCCDD,8'd0,4'b0101); rd(32'h0100,4'h3,8'd0); // partial strobe
    wr(32'h0040,4'h4,32'hDEAD0000,8'd3);  rd(32'h0040,4'h4,8'd3);   // overwrite subset
    rd(32'h0044,4'h5,8'd5);   // read spanning previously-written words
    $display("bram SV: errors=%0d -> %s",errors,(errors==0)?"PASS":"FAIL"); $finish;
  end
endmodule