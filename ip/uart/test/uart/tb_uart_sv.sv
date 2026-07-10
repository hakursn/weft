`timescale 1ns/1ps
`include "weft_axi_typedef.svh"
module tb_uart_sv;
  import weft_axi_pkg::*;
  localparam int CPB=8;
  typedef logic [31:0] addr_t; typedef logic [4:0] id_t; typedef logic [31:0] data_t; typedef logic [3:0] strb_t; typedef logic user_t;
  `WEFT_AXI_TYPEDEF_ALL(x, addr_t, id_t, data_t, strb_t, user_t)
  logic clk=0, rst_n=0; always #5 clk=~clk;
  x_req_t req; x_rsp_t rsp; logic tx; int errors=0;
  weft_uart #(.req_t(x_req_t),.rsp_t(x_rsp_t),.CLKS_PER_BIT(CPB)) dut(.clk_i(clk),.rst_ni(rst_n),.slv_req_i(req),.slv_rsp_o(rsp),.tx_o(tx));

  task automatic axi_w(input [31:0] a, input [31:0] d);
    @(negedge clk); req.aw.addr<=a; req.aw.id<=5'd1; req.aw.size<=3'd2; req.aw.burst<=BURST_INCR; req.aw_valid<=1;
    do @(posedge clk); while(!rsp.aw_ready); @(negedge clk); req.aw_valid<=0;
    req.w.data<=d; req.w.strb<=4'hF; req.w.last<=1; req.w_valid<=1;
    do @(posedge clk); while(!rsp.w_ready); @(negedge clk); req.w_valid<=0;
    req.b_ready<=1; do @(posedge clk); while(!rsp.b_valid); @(negedge clk); req.b_ready<=0;
  endtask
  task automatic axi_r(input [31:0] a, output [31:0] d);
    @(negedge clk); req.ar.addr<=a; req.ar.id<=5'd1; req.ar.size<=3'd2; req.ar.burst<=BURST_INCR; req.ar_valid<=1;
    do @(posedge clk); while(!rsp.ar_ready); @(negedge clk); req.ar_valid<=0;
    req.r_ready<=1; do @(posedge clk); while(!rsp.r_valid); d=rsp.r.data; @(negedge clk); req.r_ready<=0;
  endtask
  // deserialize tx: sample at mid-bit
  task automatic rx_byte(output [7:0] b);
    @(negedge tx);                          // start bit
    repeat(CPB + CPB/2) @(posedge clk);     // to middle of bit0
    for(int i=0;i<8;i++) begin b[i]=tx; repeat(CPB) @(posedge clk); end
  endtask

  logic [31:0] rd; logic [7:0] got;
  initial begin #100000; $display("uart SV: WATCHDOG"); $finish; end
  initial begin
    req='0;
    repeat(3) @(posedge clk); rst_n<=1'b1; @(negedge clk);
    axi_r(32'h4, rd); if(rd[0]!==1'b0) begin errors++; $display("STATUS busy before tx"); end
    fork
      begin axi_w(32'h0, 32'h00000041); end     // 'A'
      begin rx_byte(got); if(got!==8'h41) begin errors++; $display("rx got %h exp 41",got); end end
    join
    // busy should be high shortly after write, low after
    repeat(2) @(posedge clk); axi_r(32'h4, rd);  // may be busy mid-tx
    // send another char and check
    fork
      begin axi_w(32'h0, 32'h0000005A); end      // 'Z'
      begin rx_byte(got); if(got!==8'h5A) begin errors++; $display("rx got %h exp 5A",got); end end
    join
    $display("uart SV: errors=%0d -> %s",errors,(errors==0)?"PASS":"FAIL"); $finish;
  end
endmodule