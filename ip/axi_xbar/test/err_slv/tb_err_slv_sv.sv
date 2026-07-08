`timescale 1ns/1ps
`include "weft_axi_typedef.svh"
module tb_err_slv_sv;
  import weft_axi_pkg::*;
  typedef logic [31:0] addr_t; typedef logic [3:0] id_t; typedef logic [31:0] data_t; typedef logic [3:0] strb_t; typedef logic user_t;
  `WEFT_AXI_TYPEDEF_ALL(x, addr_t, id_t, data_t, strb_t, user_t)
  logic clk=0, rst_n=0; always #5 clk=~clk;
  x_req_t rq; x_rsp_t rs; int errors=0;

  weft_axi_err_slv #(.req_t(x_req_t),.rsp_t(x_rsp_t),.Resp(RESP_DECERR))
    dut(.clk_i(clk),.rst_ni(rst_n),.slv_req_i(rq),.slv_rsp_o(rs));

  task automatic do_wr(input [3:0] id, input [7:0] len);
    @(negedge clk); rq.aw.id=id; rq.aw.len=len; rq.aw.size=3'd2; rq.aw.burst=BURST_INCR; rq.aw_valid=1'b1;
    do @(posedge clk); while(!(rq.aw_valid && rs.aw_ready));
    @(negedge clk); rq.aw_valid=1'b0;
    for(int i=0;i<=len;i++) begin
      rq.w.data=32'hDEAD_0000+i; rq.w.strb='1; rq.w.last=(i==len); rq.w_valid=1'b1;
      do @(posedge clk); while(!(rq.w_valid && rs.w_ready));
      @(negedge clk);
    end
    rq.w_valid=1'b0; rq.b_ready=1'b1;
    do @(posedge clk); while(!(rs.b_valid && rq.b_ready));
    if(rs.b.resp!==RESP_DECERR) begin errors++; $display("WR resp FAIL got %b",rs.b.resp); end
    if(rs.b.id!==id)            begin errors++; $display("WR id FAIL got %h",rs.b.id); end
    @(negedge clk); rq.b_ready=1'b0;
  endtask

  task automatic do_rd(input [3:0] id, input [7:0] len);
    int beats; beats=0;
    @(negedge clk); rq.ar.id=id; rq.ar.len=len; rq.ar.size=3'd2; rq.ar.burst=BURST_INCR; rq.ar_valid=1'b1;
    do @(posedge clk); while(!(rq.ar_valid && rs.ar_ready));
    @(negedge clk); rq.ar_valid=1'b0; rq.r_ready=1'b1;
    forever begin
      do @(posedge clk); while(!(rs.r_valid && rq.r_ready));
      if(rs.r.resp!==RESP_DECERR) begin errors++; $display("RD resp FAIL beat %0d got %b",beats,rs.r.resp); end
      if(rs.r.id!==id)            begin errors++; $display("RD id FAIL got %h",rs.r.id); end
      if(rs.r.data!==32'h0)       begin errors++; $display("RD data!=0 got %h",rs.r.data); end
      if(rs.r.last) begin
        if(beats!==len) begin errors++; $display("RD last at beat %0d exp %0d",beats,len); end
        @(negedge clk); break;
      end
      beats++; @(negedge clk);
    end
    rq.r_ready=1'b0;
  endtask

  initial begin #100000; $display("err_slv SV: WATCHDOG TIMEOUT"); $finish; end
  initial begin
    rq='0;
    repeat(3) @(posedge clk); rst_n<=1'b1; @(negedge clk);
    do_wr(4'h3, 8'd0);   // single write
    do_wr(4'h7, 8'd3);   // burst write (4 beats)
    do_rd(4'h5, 8'd0);   // single read
    do_rd(4'hA, 8'd4);   // burst read (5 beats)
    do_rd(4'hC, 8'd15);  // long burst (16 beats)
    $display("err_slv SV: errors=%0d -> %s", errors, (errors==0)?"PASS":"FAIL");
    $finish;
  end
endmodule