`timescale 1ns/1ps
`include "weft_axi_typedef.svh"
module tb_cosim_sv;
  import weft_axi_pkg::*;
  localparam logic [31:0] RESET=32'h8000_0000, FINISH=32'h1000;
  typedef logic [31:0] addr_t; typedef logic [3:0] id_t; typedef logic [31:0] data_t; typedef logic [3:0] strb_t; typedef logic user_t;
  `WEFT_AXI_TYPEDEF_ALL(x, addr_t, id_t, data_t, strb_t, user_t)
  logic clk=0, rst_n=0; always #5 clk=~clk;
  x_req_t ireq,dreq; x_rsp_t irsp,drsp;
  logic rv,mv; logic [31:0] rpc,rin,rw,ma,mw; logic [4:0] rd; logic [3:0] ws;
  integer ftr, fmem; int retired=0;

  warp_axi #(.req_t(x_req_t),.rsp_t(x_rsp_t),.RESET_ADDR(RESET)) dut(.clk_i(clk),.rst_ni(rst_n),
    .i_req_o(ireq),.i_rsp_i(irsp),.d_req_o(dreq),.d_rsp_i(drsp),
    .retire_valid_o(rv),.retire_pc_o(rpc),.retire_instr_o(rin),.retire_rd_o(rd),.retire_rd_wdata_o(rw),
    .retire_mem_valid_o(mv),.retire_mem_addr_o(ma),.retire_mem_wstrb_o(ws),.retire_mem_wdata_o(mw));

  logic [31:0] mem [longint]; logic [31:0] prog [0:255];
  function automatic [31:0] rdw(input longint k); return mem.exists(k)?mem[k]:32'h0; endfunction

  typedef enum logic {II,IDp} ist_e; ist_e ist; logic [31:0] iaddr; logic [3:0] iid;
  always_comb begin irsp='0; irsp.ar_ready=(ist==II); irsp.r_valid=(ist==IDp); irsp.r.id=iid; irsp.r.data=rdw(iaddr>>2); irsp.r.resp=RESP_OKAY; irsp.r.last=1'b1; end
  always_ff @(posedge clk or negedge rst_n) begin if(!rst_n) ist<=II; else unique case(ist)
    II: if(ireq.ar_valid) begin iaddr<=ireq.ar.addr; iid<=ireq.ar.id; ist<=IDp; end
    IDp:if(ireq.r_ready) ist<=II; endcase end

  typedef enum logic [1:0] {DWI,DWD,DWB,DRD} dst_e; dst_e dst; logic [31:0] daddr; logic [3:0] did;
  always_comb begin drsp='0;
    drsp.aw_ready=(dst==DWI); drsp.w_ready=(dst==DWD); drsp.b_valid=(dst==DWB); drsp.b.id=did; drsp.b.resp=RESP_OKAY;
    drsp.ar_ready=(dst==DWI); drsp.r_valid=(dst==DRD); drsp.r.id=did; drsp.r.data=rdw(daddr>>2); drsp.r.resp=RESP_OKAY; drsp.r.last=1'b1; end
  always_ff @(posedge clk or negedge rst_n) begin if(!rst_n) dst<=DWI; else unique case(dst)
    DWI: if(dreq.aw_valid) begin daddr<=dreq.aw.addr; did<=dreq.aw.id; dst<=DWD; end
         else if(dreq.ar_valid) begin daddr<=dreq.ar.addr; did<=dreq.ar.id; dst<=DRD; end
    DWD: if(dreq.w_valid) begin for(int b=0;b<4;b++) if(dreq.w.strb[b]) mem[daddr>>2][b*8+:8]<=dreq.w.data[b*8+:8]; dst<=DWB; end
    DWB: if(dreq.b_ready) dst<=DWI;
    DRD: if(dreq.r_ready) dst<=DWI; endcase end

  task automatic dump_mem_and_finish();
    fmem=$fopen("rtl_mem.txt","w");
    for(int i=0;i<512;i++) $fwrite(fmem,"%08x\n", rdw(i));
    $fclose(fmem); $fclose(ftr); $finish;
  endtask

  always @(posedge clk) if(rst_n && rv) begin
    retired++;
    $fwrite(ftr,"%08x %08x %02x %08x\n", rpc, rin, rd, rw);
    if(mv && ma==FINISH) dump_mem_and_finish();
  end

  initial begin #500000; $display("COSIM WATCHDOG retired=%0d",retired); $fclose(ftr); $finish; end
  initial begin
    ftr=$fopen("rtl_trace.txt","w");
    $readmemh("prog.hex", prog);
    foreach(prog[i]) mem[(RESET>>2)+i]=prog[i];
    repeat(3) @(posedge clk); rst_n<=1'b1;
  end
endmodule