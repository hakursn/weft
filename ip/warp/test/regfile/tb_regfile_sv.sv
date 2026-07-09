`timescale 1ns/1ps
module tb_regfile_sv;
  logic clk=0; always #5 clk=~clk;
  logic we; logic [4:0] wa,ra1,ra2; logic [31:0] wd,rd1,rd2; int errors=0;
  warp_regfile dut(.clk_i(clk),.we_i(we),.waddr_i(wa),.wdata_i(wd),
    .raddr1_i(ra1),.rdata1_o(rd1),.raddr2_i(ra2),.rdata2_o(rd2));
  task automatic wr(input [4:0] a, input [31:0] d); @(negedge clk); we<=1; wa<=a; wd<=d; @(posedge clk); @(negedge clk); we<=0; endtask
  task automatic chk(input [4:0] a, input [31:0] exp);
    ra1<=a; #1; if(rd1!==exp) begin errors++; $display("R[%0d] exp %h got %h",a,exp,rd1); end endtask
  initial begin
    we=0; wa=0; wd=0; ra1=0; ra2=0;
    wr(5'd1,32'hDEADBEEF); wr(5'd31,32'h12345678); wr(5'd15,32'hCAFEBABE);
    chk(5'd1,32'hDEADBEEF); chk(5'd31,32'h12345678); chk(5'd15,32'hCAFEBABE);
    chk(5'd0,32'h0);                       // x0 reads 0
    wr(5'd0,32'hFFFFFFFF); chk(5'd0,32'h0); // write to x0 ignored
    // two-port read
    ra1<=5'd1; ra2<=5'd31; #1;
    if(rd1!==32'hDEADBEEF || rd2!==32'h12345678) begin errors++; $display("dual-read FAIL %h %h",rd1,rd2); end
    $display("regfile SV: errors=%0d -> %s",errors,(errors==0)?"PASS":"FAIL"); $finish;
  end
endmodule