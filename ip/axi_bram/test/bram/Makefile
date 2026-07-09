SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += -Wno-fatal -Wno-WIDTH -I$(PWD)/../../../axi_common/rtl
VERILOG_SOURCES += $(PWD)/../../../axi_common/rtl/weft_axi_pkg.sv \
                   $(PWD)/../../rtl/weft_axi_bram.sv \
                   $(PWD)/../../rtl/weft_axi_bram_flat.sv
COCOTB_TEST_MODULES = test_bram
TOPLEVEL = weft_axi_bram_flat
include $(shell cocotb-config --makefiles)/Makefile.sim