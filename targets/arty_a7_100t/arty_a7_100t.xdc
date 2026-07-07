## Weft — Arty A7-100T constraints (stub)
## Source of truth: Digilent Arty A7 master XDC (Arty-A7-100-Master.xdc)
##   https://github.com/Digilent/digilent-xdc
## Rename the get_ports targets to match weft_soc_top, and verify every pin
## against the master XDC before implementation.

## 100 MHz system clock (pin E3)
set_property -dict { PACKAGE_PIN E3  IOSTANDARD LVCMOS33 } [get_ports { clk_100mhz }];
create_clock -add -name sys_clk_pin -period 10.00 -waveform {0 5} [get_ports { clk_100mhz }];

## Reset — CK_RST button (verify pin)
# set_property -dict { PACKAGE_PIN C2  IOSTANDARD LVCMOS33 } [get_ports { rst_n }];

## USB-UART bridge (verify pins)
# set_property -dict { PACKAGE_PIN A9  IOSTANDARD LVCMOS33 } [get_ports { uart_rx }];
# set_property -dict { PACKAGE_PIN D10 IOSTANDARD LVCMOS33 } [get_ports { uart_tx }];
