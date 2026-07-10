`timescale 1ns/1ps
module tb_soc_sv;
  localparam int CPB=8;
  logic clk=0, arst_n=0; always #5 clk=~clk;
  logic tx; logic rvalid; logic [31:0] rpc;
  weft_soc #(.MEM_INIT("prog.hex"), .MEM_WORDS(16384), .UART_CPB(CPB), .RESET_ADDR(32'h8000_0000)) dut(
    .clk_i(clk), .arst_ni(arst_n), .uart_tx_o(tx), .retire_valid_o(rvalid), .retire_pc_o(rpc));

  string got=""; string exp="WEFT SOC OK\n"; int errors=0;
  task automatic rx_byte(output [7:0] b);
    @(negedge tx);
    repeat(CPB + CPB/2) @(posedge clk);
    for(int i=0;i<8;i++) begin b[i]=tx; repeat(CPB) @(posedge clk); end
  endtask

  initial begin #2000000; $display("soc SV: WATCHDOG (got=%s)", got); $finish; end
  initial begin
    repeat(4) @(posedge clk); arst_n<=1'b1;
    forever begin
      byte unsigned c; rx_byte(c);
      got = {got, string'(c)};
      if(c == 8'h0A) break;   // newline terminates
    end
    // compare
    if(got.len() != exp.len()) begin errors++; $display("length got=%0d exp=%0d", got.len(), exp.len()); end
    for(int i=0;i<got.len() && i<exp.len();i++)
      if(got[i] !== exp[i]) begin errors++; $display("char %0d got %02h exp %02h", i, got[i], exp[i]); end
    $write("soc SV: UART said: %s", got);
    $display("soc SV: errors=%0d -> %s", errors, (errors==0)?"PASS":"FAIL");
    $finish;
  end
endmodule