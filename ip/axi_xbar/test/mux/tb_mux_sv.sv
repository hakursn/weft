`timescale 1ns/1ps
module tb_mux_sv;
  localparam int IDW=4, MIDW=5;
  logic clk=0, rst_n=0; always #5 clk=~clk;
  logic [3:0] s0_awid;
  logic [31:0] s0_awaddr;
  logic [7:0] s0_awlen;
  logic [2:0] s0_awsize;
  logic [1:0] s0_awburst;
  logic s0_awlock;
  logic [3:0] s0_awcache;
  logic [2:0] s0_awprot;
  logic s0_awvalid;
  logic s0_awready;
  logic [31:0] s0_wdata;
  logic [3:0] s0_wstrb;
  logic s0_wlast;
  logic s0_wvalid;
  logic s0_wready;
  logic [3:0] s0_bid;
  logic [1:0] s0_bresp;
  logic s0_bvalid;
  logic s0_bready;
  logic [3:0] s0_arid;
  logic [31:0] s0_araddr;
  logic [7:0] s0_arlen;
  logic [2:0] s0_arsize;
  logic [1:0] s0_arburst;
  logic s0_arlock;
  logic [3:0] s0_arcache;
  logic [2:0] s0_arprot;
  logic s0_arvalid;
  logic s0_arready;
  logic [3:0] s0_rid;
  logic [31:0] s0_rdata;
  logic [1:0] s0_rresp;
  logic s0_rlast;
  logic s0_rvalid;
  logic s0_rready;
  logic [3:0] s1_awid;
  logic [31:0] s1_awaddr;
  logic [7:0] s1_awlen;
  logic [2:0] s1_awsize;
  logic [1:0] s1_awburst;
  logic s1_awlock;
  logic [3:0] s1_awcache;
  logic [2:0] s1_awprot;
  logic s1_awvalid;
  logic s1_awready;
  logic [31:0] s1_wdata;
  logic [3:0] s1_wstrb;
  logic s1_wlast;
  logic s1_wvalid;
  logic s1_wready;
  logic [3:0] s1_bid;
  logic [1:0] s1_bresp;
  logic s1_bvalid;
  logic s1_bready;
  logic [3:0] s1_arid;
  logic [31:0] s1_araddr;
  logic [7:0] s1_arlen;
  logic [2:0] s1_arsize;
  logic [1:0] s1_arburst;
  logic s1_arlock;
  logic [3:0] s1_arcache;
  logic [2:0] s1_arprot;
  logic s1_arvalid;
  logic s1_arready;
  logic [3:0] s1_rid;
  logic [31:0] s1_rdata;
  logic [1:0] s1_rresp;
  logic s1_rlast;
  logic s1_rvalid;
  logic s1_rready;
  logic [4:0] m_awid;
  logic [31:0] m_awaddr;
  logic [7:0] m_awlen;
  logic [2:0] m_awsize;
  logic [1:0] m_awburst;
  logic m_awlock;
  logic [3:0] m_awcache;
  logic [2:0] m_awprot;
  logic m_awvalid;
  logic m_awready;
  logic [31:0] m_wdata;
  logic [3:0] m_wstrb;
  logic m_wlast;
  logic m_wvalid;
  logic m_wready;
  logic [4:0] m_bid;
  logic [1:0] m_bresp;
  logic m_bvalid;
  logic m_bready;
  logic [4:0] m_arid;
  logic [31:0] m_araddr;
  logic [7:0] m_arlen;
  logic [2:0] m_arsize;
  logic [1:0] m_arburst;
  logic m_arlock;
  logic [3:0] m_arcache;
  logic [2:0] m_arprot;
  logic m_arvalid;
  logic m_arready;
  logic [4:0] m_rid;
  logic [31:0] m_rdata;
  logic [1:0] m_rresp;
  logic m_rlast;
  logic m_rvalid;
  logic m_rready;
  int errors=0;

  weft_axi_mux_flat dut(.clk_i(clk), .rst_ni(rst_n),
    .s0_axi_awid(s0_awid),
    .s0_axi_awaddr(s0_awaddr),
    .s0_axi_awlen(s0_awlen),
    .s0_axi_awsize(s0_awsize),
    .s0_axi_awburst(s0_awburst),
    .s0_axi_awlock(s0_awlock),
    .s0_axi_awcache(s0_awcache),
    .s0_axi_awprot(s0_awprot),
    .s0_axi_awvalid(s0_awvalid),
    .s0_axi_awready(s0_awready),
    .s0_axi_wdata(s0_wdata),
    .s0_axi_wstrb(s0_wstrb),
    .s0_axi_wlast(s0_wlast),
    .s0_axi_wvalid(s0_wvalid),
    .s0_axi_wready(s0_wready),
    .s0_axi_bid(s0_bid),
    .s0_axi_bresp(s0_bresp),
    .s0_axi_bvalid(s0_bvalid),
    .s0_axi_bready(s0_bready),
    .s0_axi_arid(s0_arid),
    .s0_axi_araddr(s0_araddr),
    .s0_axi_arlen(s0_arlen),
    .s0_axi_arsize(s0_arsize),
    .s0_axi_arburst(s0_arburst),
    .s0_axi_arlock(s0_arlock),
    .s0_axi_arcache(s0_arcache),
    .s0_axi_arprot(s0_arprot),
    .s0_axi_arvalid(s0_arvalid),
    .s0_axi_arready(s0_arready),
    .s0_axi_rid(s0_rid),
    .s0_axi_rdata(s0_rdata),
    .s0_axi_rresp(s0_rresp),
    .s0_axi_rlast(s0_rlast),
    .s0_axi_rvalid(s0_rvalid),
    .s0_axi_rready(s0_rready),
    .s1_axi_awid(s1_awid),
    .s1_axi_awaddr(s1_awaddr),
    .s1_axi_awlen(s1_awlen),
    .s1_axi_awsize(s1_awsize),
    .s1_axi_awburst(s1_awburst),
    .s1_axi_awlock(s1_awlock),
    .s1_axi_awcache(s1_awcache),
    .s1_axi_awprot(s1_awprot),
    .s1_axi_awvalid(s1_awvalid),
    .s1_axi_awready(s1_awready),
    .s1_axi_wdata(s1_wdata),
    .s1_axi_wstrb(s1_wstrb),
    .s1_axi_wlast(s1_wlast),
    .s1_axi_wvalid(s1_wvalid),
    .s1_axi_wready(s1_wready),
    .s1_axi_bid(s1_bid),
    .s1_axi_bresp(s1_bresp),
    .s1_axi_bvalid(s1_bvalid),
    .s1_axi_bready(s1_bready),
    .s1_axi_arid(s1_arid),
    .s1_axi_araddr(s1_araddr),
    .s1_axi_arlen(s1_arlen),
    .s1_axi_arsize(s1_arsize),
    .s1_axi_arburst(s1_arburst),
    .s1_axi_arlock(s1_arlock),
    .s1_axi_arcache(s1_arcache),
    .s1_axi_arprot(s1_arprot),
    .s1_axi_arvalid(s1_arvalid),
    .s1_axi_arready(s1_arready),
    .s1_axi_rid(s1_rid),
    .s1_axi_rdata(s1_rdata),
    .s1_axi_rresp(s1_rresp),
    .s1_axi_rlast(s1_rlast),
    .s1_axi_rvalid(s1_rvalid),
    .s1_axi_rready(s1_rready),
    .m_axi_awid(m_awid),
    .m_axi_awaddr(m_awaddr),
    .m_axi_awlen(m_awlen),
    .m_axi_awsize(m_awsize),
    .m_axi_awburst(m_awburst),
    .m_axi_awlock(m_awlock),
    .m_axi_awcache(m_awcache),
    .m_axi_awprot(m_awprot),
    .m_axi_awvalid(m_awvalid),
    .m_axi_awready(m_awready),
    .m_axi_wdata(m_wdata),
    .m_axi_wstrb(m_wstrb),
    .m_axi_wlast(m_wlast),
    .m_axi_wvalid(m_wvalid),
    .m_axi_wready(m_wready),
    .m_axi_bid(m_bid),
    .m_axi_bresp(m_bresp),
    .m_axi_bvalid(m_bvalid),
    .m_axi_bready(m_bready),
    .m_axi_arid(m_arid),
    .m_axi_araddr(m_araddr),
    .m_axi_arlen(m_arlen),
    .m_axi_arsize(m_arsize),
    .m_axi_arburst(m_arburst),
    .m_axi_arlock(m_arlock),
    .m_axi_arcache(m_arcache),
    .m_axi_arprot(m_arprot),
    .m_axi_arvalid(m_arvalid),
    .m_axi_arready(m_arready),
    .m_axi_rid(m_rid),
    .m_axi_rdata(m_rdata),
    .m_axi_rresp(m_rresp),
    .m_axi_rlast(m_rlast),
    .m_axi_rvalid(m_rvalid),
    .m_axi_rready(m_rready));

  logic [31:0] mem[0:2047];
  typedef enum logic[1:0]{WI,WD,WB}wst; wst ws; typedef enum logic{RI,RD}rst; rst rs;
  logic [31:0] wa,ra; logic [MIDW-1:0] wi,ri; logic[7:0] rb,rl;
  always_comb begin
    m_awready=(ws==WI); m_wready=(ws==WD); m_bvalid=(ws==WB); m_bid=wi; m_bresp=0;
    m_arready=(rs==RI); m_rvalid=(rs==RD); m_rid=ri; m_rdata=mem[ra[12:2]]; m_rresp=0; m_rlast=(rb==rl);
  end
  always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin ws<=WI; rs<=RI; rb<=0; end else begin
      case(ws) WI: if(m_awvalid)begin wa<=m_awaddr; wi<=m_awid; ws<=WD; end
               WD: if(m_wvalid)begin mem[wa[12:2]]<=m_wdata; wa<=wa+4; if(m_wlast)ws<=WB; end
               WB: if(m_bready) ws<=WI; endcase
      case(rs) RI: if(m_arvalid)begin ra<=m_araddr; ri<=m_arid; rl<=m_arlen; rb<=0; rs<=RD; end
               RD: if(m_rready)begin if(rb==rl)rs<=RI; else begin rb<=rb+1; ra<=ra+4; end end endcase
    end
  end

  task automatic mgr0_wr(input [31:0] addr, input [IDW-1:0] id, input [31:0] d0, input [7:0] len);
    @(negedge clk); s0_awaddr=addr; s0_awid=id; s0_awlen=len; s0_awsize=3'd2; s0_awburst=2'b01; s0_awvalid=1'b1;
    do @(posedge clk); while(!(s0_awvalid && s0_awready));
    @(negedge clk); s0_awvalid=1'b0;
    for(int i=0;i<=len;i++) begin
      s0_wdata=d0+i; s0_wstrb='1; s0_wlast=(i==len); s0_wvalid=1'b1;
      do @(posedge clk); while(!(s0_wvalid && s0_wready));
      @(negedge clk);
    end
    s0_wvalid=1'b0; s0_bready=1'b1;
    do @(posedge clk); while(!(s0_bvalid && s0_bready));
    if(s0_bid!==id) begin errors++; $display("P0 B.id FAIL exp %h got %h",id,s0_bid); end
    @(negedge clk); s0_bready=1'b0;
  endtask
  task automatic mgr0_rd(input [31:0] addr, input [IDW-1:0] id, input [31:0] e0, input [7:0] len);
    @(negedge clk); s0_araddr=addr; s0_arid=id; s0_arlen=len; s0_arsize=3'd2; s0_arburst=2'b01; s0_arvalid=1'b1;
    do @(posedge clk); while(!(s0_arvalid && s0_arready));
    @(negedge clk); s0_arvalid=1'b0; s0_rready=1'b1;
    for(int i=0;i<=len;i++) begin
      do @(posedge clk); while(!(s0_rvalid && s0_rready));
      if(s0_rdata!==(e0+i)) begin errors++; $display("P0 RD MISMATCH @%h beat %0d exp %h got %h",addr,i,e0+i,s0_rdata); end
      if(s0_rid!==id) begin errors++; $display("P0 R.id FAIL exp %h got %h",id,s0_rid); end
      @(negedge clk);
    end
    s0_rready=1'b0;
  endtask
  task automatic mgr1_wr(input [31:0] addr, input [IDW-1:0] id, input [31:0] d0, input [7:0] len);
    @(negedge clk); s1_awaddr=addr; s1_awid=id; s1_awlen=len; s1_awsize=3'd2; s1_awburst=2'b01; s1_awvalid=1'b1;
    do @(posedge clk); while(!(s1_awvalid && s1_awready));
    @(negedge clk); s1_awvalid=1'b0;
    for(int i=0;i<=len;i++) begin
      s1_wdata=d0+i; s1_wstrb='1; s1_wlast=(i==len); s1_wvalid=1'b1;
      do @(posedge clk); while(!(s1_wvalid && s1_wready));
      @(negedge clk);
    end
    s1_wvalid=1'b0; s1_bready=1'b1;
    do @(posedge clk); while(!(s1_bvalid && s1_bready));
    if(s1_bid!==id) begin errors++; $display("P1 B.id FAIL exp %h got %h",id,s1_bid); end
    @(negedge clk); s1_bready=1'b0;
  endtask
  task automatic mgr1_rd(input [31:0] addr, input [IDW-1:0] id, input [31:0] e0, input [7:0] len);
    @(negedge clk); s1_araddr=addr; s1_arid=id; s1_arlen=len; s1_arsize=3'd2; s1_arburst=2'b01; s1_arvalid=1'b1;
    do @(posedge clk); while(!(s1_arvalid && s1_arready));
    @(negedge clk); s1_arvalid=1'b0; s1_rready=1'b1;
    for(int i=0;i<=len;i++) begin
      do @(posedge clk); while(!(s1_rvalid && s1_rready));
      if(s1_rdata!==(e0+i)) begin errors++; $display("P1 RD MISMATCH @%h beat %0d exp %h got %h",addr,i,e0+i,s1_rdata); end
      if(s1_rid!==id) begin errors++; $display("P1 R.id FAIL exp %h got %h",id,s1_rid); end
      @(negedge clk);
    end
    s1_rready=1'b0;
  endtask

  initial begin #500000; $display("mux SV: WATCHDOG TIMEOUT"); $finish; end
  initial begin
    s0_awvalid=0;s0_wvalid=0;s0_bready=0;s0_arvalid=0;s0_rready=0;
    s1_awvalid=0;s1_wvalid=0;s1_bready=0;s1_arvalid=0;s1_rready=0;
    repeat(3) @(posedge clk); rst_n<=1'b1; @(negedge clk);
    fork
      begin mgr0_wr(32'h0040,4'h1,32'hA000_0000,8'd0); mgr0_rd(32'h0040,4'h1,32'hA000_0000,8'd0);
            mgr0_wr(32'h0400,4'h5,32'hAABB_0000,8'd3); mgr0_rd(32'h0400,4'h5,32'hAABB_0000,8'd3); end
      begin mgr1_wr(32'h0080,4'h2,32'hB000_0000,8'd0); mgr1_rd(32'h0080,4'h2,32'hB000_0000,8'd0);
            mgr1_wr(32'h0800,4'h6,32'hCCDD_0000,8'd7); mgr1_rd(32'h0800,4'h6,32'hCCDD_0000,8'd7); end
    join
    $display("mux SV: errors=%0d -> %s",errors,(errors==0)?"PASS":"FAIL"); $finish;
  end
endmodule