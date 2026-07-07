SIM ?= icarus
TOPLEVEL_LANG ?= verilog
COMPILE_ARGS += -g2012 -I$(PWD)/../../rtl
VERILOG_SOURCES += $(PWD)/../../rtl/weft_axi_pkg.sv \
                   $(PWD)/../../../common/rtl/weft_skid_buffer.sv \
                   $(PWD)/../../rtl/weft_axi_cut.sv \
                   $(PWD)/weft_axi_cut_flat.sv
COCOTB_TEST_MODULES = test_cut
TOPLEVEL = weft_axi_cut_flat
include $(shell cocotb-config --makefiles)/Makefile.sim