`timescale 1ns/1ps
`include "weft_axi_typedef.svh"
module tb_lsu_sv;
  import weft_axi_pkg::*;
  typedef logic [31:0] addr_t; typedef logic [3:0] id_t; typedef logic [31:0] data_t; typedef logic [3:0] strb_t; typedef logic user_t;
  `WEFT_AXI_TYPEDEF_ALL(x, addr_t, id_t, data_t, strb_t, user_t)
  logic clk=0, rst_n=0; always #5 clk=~clk;
  x_req_t rq; x_rsp_t rs; int errors=0;
  logic d_req, d_we; logic [31:0] d_addr, d_wdata; logic [3:0] d_wstrb; logic d_rvalid; logic [31:0] d_rdata;

  warp_axi_lsu #(.req_t(x_req_t),.rsp_t(x_rsp_t)) dut(
    .clk_i(clk),.rst_ni(rst_n),.d_req_i(d_req),.d_we_i(d_we),.d_addr_i(d_addr),
    .d_wdata_i(d_wdata),.d_wstrb_i(d_wstrb),.d_rvalid_o(d_rvalid),.d_rdata_o(d_rdata),
    .mst_req_o(rq),.mst_rsp_i(rs));

  // behavioral single-outstanding AXI read+write RAM slave, small latency
  logic [31:0] mem [0:255]; logic [31:0] shadow [0:255];
  typedef enum logic [2:0] {WI,WD,WB,RI,RW,RD} st_e; st_e ws, r_s;
  logic [31:0] wa,ra; logic [3:0] wid,rid2; logic [1:0] rdly;
  // write channel
  always_comb begin
    rs='0;
    rs.aw_ready=(ws==WI); rs.w_ready=(ws==WD); rs.b_valid=(ws==WB); rs.b.id=wid; rs.b.resp=RESP_OKAY;
    rs.ar_ready=(r_s==RI); rs.r_valid=(r_s==RD); rs.r.id=rid2; rs.r.data=mem[ra[9:2]]; rs.r.resp=RESP_OKAY; rs.r.last=1'b1;
  end
  always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin ws<=WI; r_s<=RI; end else begin
      unique case(ws)
        WI: if(rq.aw_valid) begin wa<=rq.aw.addr; wid<=rq.aw.id; ws<=WD; end
        WD: if(rq.w_valid) begin
              for(int b=0;b<4;b++) if(rq.w.strb[b]) mem[wa[9:2]][b*8+:8]<=rq.w.data[b*8+:8];
              ws<=WB;
            end
        WB: if(rq.b_ready) ws<=WI;
        default: ws<=WI;
      endcase
      unique case(r_s)
        RI: if(rq.ar_valid) begin ra<=rq.ar.addr; rid2<=rq.ar.id; rdly<=2'd1; r_s<=RW; end
        RW: if(rdly==0) r_s<=RD; else rdly<=rdly-1'b1;
        RD: if(rq.r_ready) r_s<=RI;
        default: r_s<=RI;
      endcase
    end
  end

  task automatic lsu_wr(input [31:0] addr, input [31:0] wd, input [3:0] be);
    @(negedge clk); d_addr<=addr; d_wdata<=wd; d_wstrb<=be; d_we<=1'b1; d_req<=1'b1;
    do @(posedge clk); while(!d_rvalid);
    @(negedge clk); d_req<=1'b0; d_we<=1'b0;
    for(int b=0;b<4;b++) if(be[b]) shadow[addr[9:2]][b*8+:8]=wd[b*8+:8];
  endtask
  task automatic lsu_rd_check(input [31:0] addr);
    @(negedge clk); d_addr<=addr; d_we<=1'b0; d_req<=1'b1;
    do @(posedge clk); while(!d_rvalid);
    if(d_rdata!==shadow[addr[9:2]]) begin errors++; $display("LD @%h exp %h got %h",addr,shadow[addr[9:2]],d_rdata); end
    @(negedge clk); d_req<=1'b0;
  endtask

  initial begin #40000; $display("lsu SV: WATCHDOG"); $finish; end
  initial begin
    d_req=0; d_we=0; d_addr=0; d_wdata=0; d_wstrb=0;
    for(int i=0;i<256;i++) shadow[i]=32'h0;
    repeat(3) @(posedge clk); rst_n<=1'b1; @(negedge clk);
    lsu_wr(32'h00,32'hCAFEBABE,4'hF); lsu_rd_check(32'h00);
    lsu_wr(32'h04,32'h11223344,4'hF); lsu_rd_check(32'h04);
    lsu_wr(32'h04,32'h0000AA00,4'b0010); lsu_rd_check(32'h04);   // partial byte store (merge)
    lsu_wr(32'h08,32'hDEADBEEF,4'b1001); lsu_rd_check(32'h08);   // strobed store into fresh word
    lsu_wr(32'h20,32'h5A5A5A5A,4'hF); lsu_rd_check(32'h00); lsu_rd_check(32'h20);  // interleave
    for(int i=0;i<8;i++) lsu_wr(32'h40+32'(i*4),32'hA0000000+i,4'hF);
    for(int i=0;i<8;i++) lsu_rd_check(32'h40+32'(i*4));
    $display("lsu SV: errors=%0d -> %s",errors,(errors==0)?"PASS":"FAIL"); $finish;
  end
endmodule