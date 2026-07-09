`timescale 1ns/1ps
`include "weft_axi_typedef.svh"
module tb_ifetch_sv;
  import weft_axi_pkg::*;
  localparam logic [31:0] RESET = 32'h8000_0000;
  typedef logic [31:0] addr_t; typedef logic [3:0] id_t; typedef logic [31:0] data_t; typedef logic [3:0] strb_t; typedef logic user_t;
  `WEFT_AXI_TYPEDEF_ALL(x, addr_t, id_t, data_t, strb_t, user_t)
  logic clk=0, rst_n=0; always #5 clk=~clk;
  x_req_t rq; x_rsp_t rs; int errors=0;
  logic        f_req; logic [31:0] f_pc; logic f_rvalid; logic [31:0] f_instr;

  // instruction memory model: word i holds a recognizable value
  function automatic logic [31:0] imem(input [31:0] addr);
    return 32'hAABB_0000 + ((addr - RESET) >> 2);
  endfunction

  warp_axi_ifetch #(.req_t(x_req_t),.rsp_t(x_rsp_t)) dut(
    .clk_i(clk),.rst_ni(rst_n),.f_req_i(f_req),.f_pc_i(f_pc),
    .f_rvalid_o(f_rvalid),.f_instr_o(f_instr),.mst_req_o(rq),.mst_rsp_i(rs));

  // behavioral single-outstanding AXI read slave, 2-cycle read latency
  typedef enum logic [1:0] {RI, RW, RD} st_e; st_e st;
  logic [31:0] raddr; logic [3:0] rid; logic [1:0] dly;
  always_comb begin
    rs='0;
    rs.ar_ready = (st==RI);
    rs.r_valid  = (st==RD);
    rs.r.id     = rid; rs.r.data = imem(raddr); rs.r.resp = RESP_OKAY; rs.r.last = 1'b1;
  end
  always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin st<=RI; dly<=0; end
    else unique case(st)
      RI: if(rq.ar_valid) begin raddr<=rq.ar.addr; rid<=rq.ar.id; dly<=2'd2; st<=RW; end
      RW: if(dly==0) st<=RD; else dly<=dly-1'b1;
      RD: if(rq.r_ready) st<=RI;
    endcase
  end

  // fetch one instruction at pc; hold f_req until delivered
  task automatic fetch_check(input [31:0] pc, input [31:0] exp);
    @(negedge clk); f_pc<=pc; f_req<=1'b1;
    do @(posedge clk); while(!f_rvalid);
    if(f_instr!==exp) begin errors++; $display("FETCH @%h exp %h got %h",pc,exp,f_instr); end
    @(negedge clk); f_req<=1'b0;   // brief idle between (driver models a stall)
  endtask

  initial begin #20000; $display("ifetch SV: WATCHDOG"); $finish; end
  initial begin
    f_req=0; f_pc=RESET;
    repeat(3) @(posedge clk); rst_n<=1'b1; @(negedge clk);

    // (1) sequential fetches
    for(int i=0;i<6;i++) fetch_check(RESET+32'(i*4), imem(RESET+32'(i*4)));

    // (2) redirect mid-flight: request pcA, then before R returns switch to pcB.
    //     The adapter must discard pcA's read and deliver pcB's instruction.
    @(negedge clk); f_pc<=RESET+32'h0008; f_req<=1'b1;   // pcA = word 2
    @(posedge clk); @(negedge clk);                       // AR handshakes -> S_R, R not back yet
    f_pc<=RESET+32'h0050;                                 // redirect to pcB = word 20
    do @(posedge clk); while(!f_rvalid);
    if(f_instr!==imem(RESET+32'h0050)) begin errors++; $display("REDIRECT exp %h got %h",imem(RESET+32'h0050),f_instr); end
    if(f_instr===imem(RESET+32'h0008)) begin errors++; $display("REDIRECT delivered STALE pcA data"); end
    @(negedge clk); f_req<=1'b0;

    // (3) resume sequential from a new spot
    fetch_check(RESET+32'h0054, imem(RESET+32'h0054));

    $display("ifetch SV: errors=%0d -> %s",errors,(errors==0)?"PASS":"FAIL"); $finish;
  end
endmodule