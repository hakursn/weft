SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += -Wno-fatal -Wno-WIDTH -I$(PWD)/../../../axi_common/rtl
VERILOG_SOURCES += $(PWD)/../../../axi_common/rtl/weft_axi_pkg.sv \
                   $(PWD)/../../../common/rtl/weft_rr_arbiter.sv \
                   $(PWD)/../../../common/rtl/weft_sync_fifo.sv \
                   $(PWD)/../../rtl/weft_axi_mux.sv \
                   $(PWD)/weft_axi_mux_flat.sv
COCOTB_TEST_MODULES = test_mux
TOPLEVEL = weft_axi_mux_flat
include $(shell cocotb-config --makefiles)/Makefile.sim