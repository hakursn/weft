`timescale 1ns/1ps
module tb_xbar_sv;
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
  logic [4:0] m0_awid;
  logic [31:0] m0_awaddr;
  logic [7:0] m0_awlen;
  logic [2:0] m0_awsize;
  logic [1:0] m0_awburst;
  logic m0_awlock;
  logic [3:0] m0_awcache;
  logic [2:0] m0_awprot;
  logic m0_awvalid;
  logic m0_awready;
  logic [31:0] m0_wdata;
  logic [3:0] m0_wstrb;
  logic m0_wlast;
  logic m0_wvalid;
  logic m0_wready;
  logic [4:0] m0_bid;
  logic [1:0] m0_bresp;
  logic m0_bvalid;
  logic m0_bready;
  logic [4:0] m0_arid;
  logic [31:0] m0_araddr;
  logic [7:0] m0_arlen;
  logic [2:0] m0_arsize;
  logic [1:0] m0_arburst;
  logic m0_arlock;
  logic [3:0] m0_arcache;
  logic [2:0] m0_arprot;
  logic m0_arvalid;
  logic m0_arready;
  logic [4:0] m0_rid;
  logic [31:0] m0_rdata;
  logic [1:0] m0_rresp;
  logic m0_rlast;
  logic m0_rvalid;
  logic m0_rready;
  logic [4:0] m1_awid;
  logic [31:0] m1_awaddr;
  logic [7:0] m1_awlen;
  logic [2:0] m1_awsize;
  logic [1:0] m1_awburst;
  logic m1_awlock;
  logic [3:0] m1_awcache;
  logic [2:0] m1_awprot;
  logic m1_awvalid;
  logic m1_awready;
  logic [31:0] m1_wdata;
  logic [3:0] m1_wstrb;
  logic m1_wlast;
  logic m1_wvalid;
  logic m1_wready;
  logic [4:0] m1_bid;
  logic [1:0] m1_bresp;
  logic m1_bvalid;
  logic m1_bready;
  logic [4:0] m1_arid;
  logic [31:0] m1_araddr;
  logic [7:0] m1_arlen;
  logic [2:0] m1_arsize;
  logic [1:0] m1_arburst;
  logic m1_arlock;
  logic [3:0] m1_arcache;
  logic [2:0] m1_arprot;
  logic m1_arvalid;
  logic m1_arready;
  logic [4:0] m1_rid;
  logic [31:0] m1_rdata;
  logic [1:0] m1_rresp;
  logic m1_rlast;
  logic m1_rvalid;
  logic m1_rready;
  int errors=0;
  weft_axi_xbar_flat dut(.clk_i(clk), .rst_ni(rst_n),
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
    .m0_axi_awid(m0_awid),
    .m0_axi_awaddr(m0_awaddr),
    .m0_axi_awlen(m0_awlen),
    .m0_axi_awsize(m0_awsize),
    .m0_axi_awburst(m0_awburst),
    .m0_axi_awlock(m0_awlock),
    .m0_axi_awcache(m0_awcache),
    .m0_axi_awprot(m0_awprot),
    .m0_axi_awvalid(m0_awvalid),
    .m0_axi_awready(m0_awready),
    .m0_axi_wdata(m0_wdata),
    .m0_axi_wstrb(m0_wstrb),
    .m0_axi_wlast(m0_wlast),
    .m0_axi_wvalid(m0_wvalid),
    .m0_axi_wready(m0_wready),
    .m0_axi_bid(m0_bid),
    .m0_axi_bresp(m0_bresp),
    .m0_axi_bvalid(m0_bvalid),
    .m0_axi_bready(m0_bready),
    .m0_axi_arid(m0_arid),
    .m0_axi_araddr(m0_araddr),
    .m0_axi_arlen(m0_arlen),
    .m0_axi_arsize(m0_arsize),
    .m0_axi_arburst(m0_arburst),
    .m0_axi_arlock(m0_arlock),
    .m0_axi_arcache(m0_arcache),
    .m0_axi_arprot(m0_arprot),
    .m0_axi_arvalid(m0_arvalid),
    .m0_axi_arready(m0_arready),
    .m0_axi_rid(m0_rid),
    .m0_axi_rdata(m0_rdata),
    .m0_axi_rresp(m0_rresp),
    .m0_axi_rlast(m0_rlast),
    .m0_axi_rvalid(m0_rvalid),
    .m0_axi_rready(m0_rready),
    .m1_axi_awid(m1_awid),
    .m1_axi_awaddr(m1_awaddr),
    .m1_axi_awlen(m1_awlen),
    .m1_axi_awsize(m1_awsize),
    .m1_axi_awburst(m1_awburst),
    .m1_axi_awlock(m1_awlock),
    .m1_axi_awcache(m1_awcache),
    .m1_axi_awprot(m1_awprot),
    .m1_axi_awvalid(m1_awvalid),
    .m1_axi_awready(m1_awready),
    .m1_axi_wdata(m1_wdata),
    .m1_axi_wstrb(m1_wstrb),
    .m1_axi_wlast(m1_wlast),
    .m1_axi_wvalid(m1_wvalid),
    .m1_axi_wready(m1_wready),
    .m1_axi_bid(m1_bid),
    .m1_axi_bresp(m1_bresp),
    .m1_axi_bvalid(m1_bvalid),
    .m1_axi_bready(m1_bready),
    .m1_axi_arid(m1_arid),
    .m1_axi_araddr(m1_araddr),
    .m1_axi_arlen(m1_arlen),
    .m1_axi_arsize(m1_arsize),
    .m1_axi_arburst(m1_arburst),
    .m1_axi_arlock(m1_arlock),
    .m1_axi_arcache(m1_arcache),
    .m1_axi_arprot(m1_arprot),
    .m1_axi_arvalid(m1_arvalid),
    .m1_axi_arready(m1_arready),
    .m1_axi_rid(m1_rid),
    .m1_axi_rdata(m1_rdata),
    .m1_axi_rresp(m1_rresp),
    .m1_axi_rlast(m1_rlast),
    .m1_axi_rvalid(m1_rvalid),
    .m1_axi_rready(m1_rready));
  logic [31:0] mem0[0:2047];
  typedef enum logic[1:0]{WI0,WD0,WB0}wst0; wst0 ws0; typedef enum logic{RI0,RD0}rst0; rst0 rs0;
  logic [31:0] wa0,ra0; logic [MIDW-1:0] wi0,ri0; logic[7:0] rb0,rl0;
  always_comb begin
    m0_awready=(ws0==WI0); m0_wready=(ws0==WD0); m0_bvalid=(ws0==WB0); m0_bid=wi0; m0_bresp=2'b00;
    m0_arready=(rs0==RI0); m0_rvalid=(rs0==RD0); m0_rid=ri0; m0_rdata=mem0[ra0[12:2]]; m0_rresp=2'b00; m0_rlast=(rb0==rl0);
  end
  always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin ws0<=WI0; rs0<=RI0; rb0<=0; end else begin
      case(ws0) WI0: if(m0_awvalid)begin wa0<=m0_awaddr; wi0<=m0_awid; ws0<=WD0; end
                  WD0: if(m0_wvalid)begin mem0[wa0[12:2]]<=m0_wdata; wa0<=wa0+4; if(m0_wlast)ws0<=WB0; end
                  WB0: if(m0_bready) ws0<=WI0; endcase
      case(rs0) RI0: if(m0_arvalid)begin ra0<=m0_araddr; ri0<=m0_arid; rl0<=m0_arlen; rb0<=0; rs0<=RD0; end
                  RD0: if(m0_rready)begin if(rb0==rl0)rs0<=RI0; else begin rb0<=rb0+1; ra0<=ra0+4; end end endcase
    end
  end
  logic [31:0] mem1[0:2047];
  typedef enum logic[1:0]{WI1,WD1,WB1}wst1; wst1 ws1; typedef enum logic{RI1,RD1}rst1; rst1 rs1;
  logic [31:0] wa1,ra1; logic [MIDW-1:0] wi1,ri1; logic[7:0] rb1,rl1;
  always_comb begin
    m1_awready=(ws1==WI1); m1_wready=(ws1==WD1); m1_bvalid=(ws1==WB1); m1_bid=wi1; m1_bresp=2'b00;
    m1_arready=(rs1==RI1); m1_rvalid=(rs1==RD1); m1_rid=ri1; m1_rdata=mem1[ra1[12:2]]; m1_rresp=2'b00; m1_rlast=(rb1==rl1);
  end
  always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin ws1<=WI1; rs1<=RI1; rb1<=0; end else begin
      case(ws1) WI1: if(m1_awvalid)begin wa1<=m1_awaddr; wi1<=m1_awid; ws1<=WD1; end
                  WD1: if(m1_wvalid)begin mem1[wa1[12:2]]<=m1_wdata; wa1<=wa1+4; if(m1_wlast)ws1<=WB1; end
                  WB1: if(m1_bready) ws1<=WI1; endcase
      case(rs1) RI1: if(m1_arvalid)begin ra1<=m1_araddr; ri1<=m1_arid; rl1<=m1_arlen; rb1<=0; rs1<=RD1; end
                  RD1: if(m1_rready)begin if(rb1==rl1)rs1<=RI1; else begin rb1<=rb1+1; ra1<=ra1+4; end end endcase
    end
  end
  task automatic mgr0_wr(input [31:0] addr, input [IDW-1:0] id, input [31:0] d0, input [7:0] len, input [1:0] eresp);
    @(negedge clk); s0_awaddr=addr; s0_awid=id; s0_awlen=len; s0_awsize=3'd2; s0_awburst=2'b01; s0_awvalid=1'b1;
    do @(posedge clk); while(!(s0_awvalid && s0_awready));
    @(negedge clk); s0_awvalid=1'b0;
    for(int i=0;i<=len;i++) begin
      s0_wdata=d0+i; s0_wstrb='1; s0_wlast=(i==len); s0_wvalid=1'b1;
      do @(posedge clk); while(!(s0_wvalid && s0_wready)); @(negedge clk);
    end
    s0_wvalid=1'b0; s0_bready=1'b1;
    do @(posedge clk); while(!(s0_bvalid && s0_bready));
    if(s0_bresp!==eresp) begin errors++; $display("P0 WR @%h resp exp %b got %b",addr,eresp,s0_bresp); end
    if(s0_bid!==id)      begin errors++; $display("P0 WR id FAIL got %h",s0_bid); end
    @(negedge clk); s0_bready=1'b0;
  endtask
  task automatic mgr0_rd(input [31:0] addr, input [IDW-1:0] id, input [31:0] e0, input [7:0] len, input [1:0] eresp);
    @(negedge clk); s0_araddr=addr; s0_arid=id; s0_arlen=len; s0_arsize=3'd2; s0_arburst=2'b01; s0_arvalid=1'b1;
    do @(posedge clk); while(!(s0_arvalid && s0_arready));
    @(negedge clk); s0_arvalid=1'b0; s0_rready=1'b1;
    for(int i=0;i<=len;i++) begin
      do @(posedge clk); while(!(s0_rvalid && s0_rready));
      if(s0_rresp!==eresp) begin errors++; $display("P0 RD @%h resp exp %b got %b",addr,eresp,s0_rresp); end
      if(s0_rid!==id)      begin errors++; $display("P0 RD id FAIL got %h",s0_rid); end
      if(eresp==2'b00 && s0_rdata!==(e0+i)) begin errors++; $display("P0 RD @%h beat %0d exp %h got %h",addr,i,e0+i,s0_rdata); end
      @(negedge clk);
    end
    s0_rready=1'b0;
  endtask
  task automatic mgr1_wr(input [31:0] addr, input [IDW-1:0] id, input [31:0] d0, input [7:0] len, input [1:0] eresp);
    @(negedge clk); s1_awaddr=addr; s1_awid=id; s1_awlen=len; s1_awsize=3'd2; s1_awburst=2'b01; s1_awvalid=1'b1;
    do @(posedge clk); while(!(s1_awvalid && s1_awready));
    @(negedge clk); s1_awvalid=1'b0;
    for(int i=0;i<=len;i++) begin
      s1_wdata=d0+i; s1_wstrb='1; s1_wlast=(i==len); s1_wvalid=1'b1;
      do @(posedge clk); while(!(s1_wvalid && s1_wready)); @(negedge clk);
    end
    s1_wvalid=1'b0; s1_bready=1'b1;
    do @(posedge clk); while(!(s1_bvalid && s1_bready));
    if(s1_bresp!==eresp) begin errors++; $display("P1 WR @%h resp exp %b got %b",addr,eresp,s1_bresp); end
    if(s1_bid!==id)      begin errors++; $display("P1 WR id FAIL got %h",s1_bid); end
    @(negedge clk); s1_bready=1'b0;
  endtask
  task automatic mgr1_rd(input [31:0] addr, input [IDW-1:0] id, input [31:0] e0, input [7:0] len, input [1:0] eresp);
    @(negedge clk); s1_araddr=addr; s1_arid=id; s1_arlen=len; s1_arsize=3'd2; s1_arburst=2'b01; s1_arvalid=1'b1;
    do @(posedge clk); while(!(s1_arvalid && s1_arready));
    @(negedge clk); s1_arvalid=1'b0; s1_rready=1'b1;
    for(int i=0;i<=len;i++) begin
      do @(posedge clk); while(!(s1_rvalid && s1_rready));
      if(s1_rresp!==eresp) begin errors++; $display("P1 RD @%h resp exp %b got %b",addr,eresp,s1_rresp); end
      if(s1_rid!==id)      begin errors++; $display("P1 RD id FAIL got %h",s1_rid); end
      if(eresp==2'b00 && s1_rdata!==(e0+i)) begin errors++; $display("P1 RD @%h beat %0d exp %h got %h",addr,i,e0+i,s1_rdata); end
      @(negedge clk);
    end
    s1_rready=1'b0;
  endtask
  initial begin #800000; $display("xbar SV: WATCHDOG TIMEOUT"); $finish; end
  initial begin
    s0_awvalid=0;s0_wvalid=0;s0_bready=0;s0_arvalid=0;s0_rready=0;
    s1_awvalid=0;s1_wvalid=0;s1_bready=0;s1_arvalid=0;s1_rready=0;
    repeat(3) @(posedge clk); rst_n<=1'b1; @(negedge clk);
    // --- routing: each manager to each subordinate region, verify data + physical RAM ---
    mgr0_wr(32'h0040,4'h1,32'hA0000000,8'd0,2'b00); mgr0_rd(32'h0040,4'h1,32'hA0000000,8'd0,2'b00);
    if(mem0[32'h0040>>2]!==32'hA0000000) begin errors++; $display("sub0 phys FAIL"); end
    mgr0_wr(32'h1040,4'h2,32'hB0000000,8'd3,2'b00); mgr0_rd(32'h1040,4'h2,32'hB0000000,8'd3,2'b00);
    if(mem1[32'h1040>>2]!==32'hB0000000) begin errors++; $display("sub1 phys FAIL"); end
    mgr1_wr(32'h0080,4'h3,32'hC0000000,8'd0,2'b00); mgr1_rd(32'h0080,4'h3,32'hC0000000,8'd0,2'b00);
    mgr1_wr(32'h1080,4'h4,32'hD0000000,8'd7,2'b00); mgr1_rd(32'h1080,4'h4,32'hD0000000,8'd7,2'b00);
    // --- decode miss -> DECERR (resp 2'b11) ---
    mgr0_wr(32'h3000,4'h5,32'hDEAD0000,8'd0,2'b11);
    mgr0_rd(32'h3000,4'h6,32'h0,8'd2,2'b11);
    // --- concurrent: both managers hit sub0 at once (mux arbitration) ---
    fork
      begin mgr0_wr(32'h0200,4'h7,32'h11110000,8'd3,2'b00); mgr0_rd(32'h0200,4'h7,32'h11110000,8'd3,2'b00); end
      begin mgr1_wr(32'h0300,4'h8,32'h22220000,8'd3,2'b00); mgr1_rd(32'h0300,4'h8,32'h22220000,8'd3,2'b00); end
    join
    // --- concurrent cross: m0->sub1, m1->sub0 simultaneously ---
    fork
      begin mgr0_wr(32'h1100,4'h9,32'h33330000,8'd1,2'b00); mgr0_rd(32'h1100,4'h9,32'h33330000,8'd1,2'b00); end
      begin mgr1_wr(32'h0500,4'hA,32'h44440000,8'd1,2'b00); mgr1_rd(32'h0500,4'hA,32'h44440000,8'd1,2'b00); end
    join
    $display("xbar SV: errors=%0d -> %s",errors,(errors==0)?"PASS":"FAIL"); $finish;
  end
endmodule