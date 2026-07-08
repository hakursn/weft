SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += -Wno-fatal -Wno-WIDTH -I$(PWD)/../../../axi_common/rtl
VERILOG_SOURCES += $(PWD)/../../../axi_common/rtl/weft_axi_pkg.sv \
                   $(PWD)/../../rtl/weft_axi_err_slv.sv \
                   $(PWD)/weft_axi_err_slv_flat.sv
COCOTB_TEST_MODULES = test_err_slv
TOPLEVEL = weft_axi_err_slv_flat
include $(shell cocotb-config --makefiles)/Makefile.sim