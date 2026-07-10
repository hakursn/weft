# weftgen — Weft SoC elaborator

Reads per-IP manifests (`ip/<name>/weft.ip.json`) and a design spec, auto-elaborates the
AXI crossbar (manager/subordinate port counts + address map), and emits a self-contained
project folder: the top netlist, an ordered file list (`.f`), and a `sim.sh`.

```
python3 tools/weftgen/weftgen.py info  designs/weft_soc/weft_soc.design.json --iplib ip
python3 tools/weftgen/weftgen.py build designs/weft_soc/weft_soc.design.json --iplib ip -o build/weft_soc
```

The generated `build/weft_soc/rtl/<name>.sv` passes the SoC testbench identically to the
hand-written top. To connect a new IP: add its `weft.ip.json` (module, files, params,
AXI interfaces, misc ports) and reference it from the design's `instances` + `address_map`.