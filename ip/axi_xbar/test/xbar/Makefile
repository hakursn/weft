SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += -Wno-fatal -Wno-WIDTH -I$(PWD)/../../../axi_common/rtl
VERILOG_SOURCES += $(PWD)/../../../axi_common/rtl/weft_axi_pkg.sv \
                   $(PWD)/../../../common/rtl/weft_addr_decode.sv \
                   $(PWD)/../../../common/rtl/weft_rr_arbiter.sv \
                   $(PWD)/../../../common/rtl/weft_sync_fifo.sv \
                   $(PWD)/../../rtl/weft_axi_demux.sv \
                   $(PWD)/../../rtl/weft_axi_mux.sv \
                   $(PWD)/../../rtl/weft_axi_err_slv.sv \
                   $(PWD)/../../rtl/weft_axi_xbar.sv \
                   $(PWD)/weft_axi_xbar_flat.sv
COCOTB_TEST_MODULES = test_xbar
TOPLEVEL = weft_axi_xbar_flat
include $(shell cocotb-config --makefiles)/Makefile.sim