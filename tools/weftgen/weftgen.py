#!/usr/bin/env python3
"""weftgen — Weft SoC elaborator.

Reads per-IP manifests (ip/<name>/weft.ip.json) and a design spec, auto-elaborates the
AXI crossbar (manager/subordinate port counts + address map) and emits a self-contained
project folder: the top-level netlist, an ordered file list, and a sim script.

Usage:
  weftgen build <design.json> --iplib <ip_dir> -o <out_dir> [--tb <tb.sv>]
  weftgen info  <design.json> --iplib <ip_dir>
"""
import argparse, json, os, sys, shutil

def load_manifests(iplib):
    mans={}
    for name in os.listdir(iplib):
        p=os.path.join(iplib,name,"weft.ip.json")
        if os.path.isfile(p):
            m=json.load(open(p)); m["_dir"]=os.path.join(iplib,name); mans[m["name"]]=m
    return mans

def toposort(names, mans):
    seen=[]; visiting=set()
    def visit(n):
        if n in seen: return
        if n not in mans: sys.exit(f"unknown IP '{n}'")
        visiting.add(n)
        for r in mans[n].get("requires",[]): visit(r)
        seen.append(n)
    for n in names: visit(n)
    return seen

def clog2(n):
    b=0; v=1
    while v<n: v<<=1; b+=1
    return b

def elaborate(design, mans):
    # collect manager interfaces (each occupies one crossbar slave port) and subordinates
    managers=[]   # (inst, ip, iface)
    for inst in design["instances"]:
        m=mans[inst["ip"]]
        for itf in m.get("interfaces",[]):
            if itf["mode"]=="manager": managers.append((inst["name"], m, itf))
    subs=[]       # (inst, ip, iface, base, size, idx)
    by_sub={f'{i["name"]}':i for i in design["instances"]}
    for idx,entry in enumerate(design["address_map"]):
        inst_name, iface_name = entry["subordinate"].split(".")
        m=mans[by_sub[inst_name]["ip"]]
        itf=next(x for x in m.get("interfaces",[]) if x["name"]==iface_name and x["mode"]=="subordinate")
        subs.append((inst_name, m, itf, int(entry["base"],0), int(entry["size"],0), idx))
    mgr_idw=design.get("manager_id_width",4)
    return {"managers":managers,"subs":subs,"mgr_idw":mgr_idw,
            "sub_idw":mgr_idw+clog2(max(len(managers),1)),
            "nslv":len(managers),"nmst":len(subs)}

def emit_params(design):
    ps=design.get("top_params",[])
    if not ps: return ""
    body=",\n".join(f'  parameter {p["type"]:14} {p["name"]} = {p["default"]}' for p in ps)
    return f" #(\n{body}\n)"

def emit_top(design, mans, el):
    name=design["name"]; nslv=el["nslv"]; nmst=el["nmst"]
    rst=design["reset"]; L=[]
    L.append('`include "weft_axi_typedef.svh"')
    L.append('`default_nettype none')
    L.append(f'module {name} import weft_axi_pkg::*;{emit_params(design)} (')
    L.append(f'  input  wire {design["clock"]},')
    ports=[f'  input  wire {rst["port"]}']
    for ex in design.get("expose",[]):
        inst,port=ex["port"].split(".")
        m=mans[next(i for i in design["instances"] if i["name"]==inst)["ip"]]
        op=next(o for o in m.get("other_ports",[]) if o["name"]==port)
        w = "" if op.get("dir")=="out" and port.endswith(("valid_o",)) else ""
        # width: pc/addr/wdata 32b, rd 5b, wstrb 4b, else 1b (from name heuristics)
        wid = 32 if any(k in port for k in ("pc","addr","instr","wdata")) else (5 if port.endswith("rd_o") else (4 if "wstrb" in port else 1))
        vec = f' [{wid-1}:0]' if wid>1 else ''
        ports.append(f'  output logic{vec} {ex["as"]}')
    L.append(",\n".join(ports))
    L.append(');')
    # reset sync
    if rst.get("sync"):
        L.append(f'  logic rst_n1, rst_n2;')
        L.append(f'  always_ff @(posedge {design["clock"]} or negedge {rst["port"]})')
        L.append(f'    if (!{rst["port"]}) {{rst_n2,rst_n1}} <= 2\'b00; else {{rst_n2,rst_n1}} <= {{rst_n1,1\'b1}};')
        L.append(f'  wire rst_ni = rst_n2;')
    else:
        L.append(f'  wire rst_ni = {rst["port"]};')
    # types
    L.append('  typedef logic [31:0] addr_t; typedef logic [31:0] data_t; typedef logic [3:0] strb_t; typedef logic user_t;')
    L.append(f'  typedef logic [{el["mgr_idw"]-1}:0] mid_t; typedef logic [{el["sub_idw"]-1}:0] sid_t;')
    L.append('  `WEFT_AXI_TYPEDEF_ALL(m, addr_t, mid_t, data_t, strb_t, user_t)')
    L.append('  `WEFT_AXI_TYPEDEF_ALL(s, addr_t, sid_t, data_t, strb_t, user_t)')
    L.append(f'  m_req_t s_req [{nslv}]; m_rsp_t s_rsp [{nslv}];')
    L.append(f'  s_req_t d_req [{nmst}]; s_rsp_t d_rsp [{nmst}];')
    # address map
    rules=[]
    for (inst,m,itf,base,size,idx) in reversed(el["subs"]):
        rules.append(f"    '{{idx:32'd{idx}, start_addr:64'h{base:016x}, end_addr:64'h{base+size:016x}}}")
    L.append(f'  localparam xbar_rule_t [{nmst-1}:0] MAP = \'{{')
    L.append(",\n".join(rules))
    L.append('  };')
    # exposed-port lookup
    expose={ex["port"]:ex["as"] for ex in design.get("expose",[])}
    # manager instances
    slv_i=0; emitted=set()
    for inst in design["instances"]:
        m=mans[inst["ip"]]
        mgr_ifaces=[i for i in m.get("interfaces",[]) if i["mode"]=="manager"]
        if not mgr_ifaces: continue
        emitted.add(inst["name"])
        conns=[f'    .{design["clock"]}({design["clock"]}), .{m.get("reset","rst_ni")}(rst_ni)']
        for itf in mgr_ifaces:
            conns.append(f'    .{itf["req"]}(s_req[{slv_i}]), .{itf["rsp"]}(s_rsp[{slv_i}])'); slv_i+=1
        for op in m.get("other_ports",[]):
            key=f'{inst["name"]}.{op["name"]}'
            if key in expose: conns.append(f'    .{op["name"]}({expose[key]})')
            else: conns.append(f'    .{op["name"]}()')
        pstr=emit_inst_params(inst,m,"m")
        L.append(f'  {m["module"]}{pstr} {inst["name"]} (')
        L.append(",\n".join(conns)); L.append('  );')
    # crossbar
    L.append(f'  weft_axi_xbar #(.NoSlvPorts({nslv}), .NoMstPorts({nmst}), .SlvIdWidth({el["mgr_idw"]}), .NoRules({nmst}),')
    L.append('                 .rule_t(xbar_rule_t), .AddrMap(MAP),')
    L.append('                 .slv_req_t(m_req_t), .slv_rsp_t(m_rsp_t), .mst_req_t(s_req_t), .mst_rsp_t(s_rsp_t))')
    L.append(f'    u_xbar (.{design["clock"]}({design["clock"]}), .rst_ni(rst_ni),')
    L.append('            .slv_reqs_i(s_req), .slv_rsps_o(s_rsp), .mst_reqs_o(d_req), .mst_rsps_i(d_rsp));')
    # subordinate instances
    for (inst,m,itf,base,size,idx) in el["subs"]:
        instobj=next(i for i in design["instances"] if i["name"]==inst)
        conns=[f'    .{design["clock"]}({design["clock"]}), .{m.get("reset","rst_ni")}(rst_ni)',
               f'    .{itf["req"]}(d_req[{idx}]), .{itf["rsp"]}(d_rsp[{idx}])']
        for op in m.get("other_ports",[]):
            key=f'{inst}.{op["name"]}'
            conns.append(f'    .{op["name"]}({expose.get(key,"")})')
        pstr=emit_inst_params(instobj,m,"s")
        L.append(f'  {m["module"]}{pstr} {inst} (')
        L.append(",\n".join(conns)); L.append('  );')
    L.append('endmodule')
    L.append('`default_nettype wire')
    return "\n".join(L)+"\n"

def emit_inst_params(inst, m, side):
    # req/rsp types + user overrides
    parts=[f'.req_t({side}_req_t)', f'.rsp_t({side}_rsp_t)'] if m.get("interfaces") else []
    for k,v in inst.get("params",{}).items():
        parts.append(f'.{k}({v})')
    return f' #({", ".join(parts)})' if parts else ""

def build(args):
    mans=load_manifests(args.iplib); design=json.load(open(args.design))
    el=elaborate(design, mans)
    ipnames=[i["ip"] for i in design["instances"]]
    if el["nmst"]>1 or True: ipnames.append("axi_xbar")  # fabric
    order=toposort(list(dict.fromkeys(ipnames)), mans)
    out=args.out; rtl=os.path.join(out,"rtl"); os.makedirs(rtl, exist_ok=True)
    # copy RTL + collect ordered file list + include dirs
    files=[]; incs=set()
    for ip in order:
        m=mans[ip]
        for f in m.get("files",[]):
            src=os.path.join(m["_dir"],f); dst=os.path.join(rtl,os.path.basename(f))
            shutil.copy(src,dst); files.append("rtl/"+os.path.basename(f))
        for inc in m.get("include_dirs",[]):
            for hf in os.listdir(os.path.join(m["_dir"],inc)):
                if hf.endswith(".svh"): shutil.copy(os.path.join(m["_dir"],inc,hf), os.path.join(rtl,hf))
            incs.add("rtl")
    # emit top
    top=emit_top(design, mans, el); topfile=f'rtl/{design["name"]}.sv'
    open(os.path.join(out,topfile),"w").write(top); files.append(topfile)
    # file list (.f)
    flist=[f"-I{i}" for i in sorted(incs)]+files
    open(os.path.join(out,f'{design["name"]}.f'),"w").write("\n".join(flist)+"\n")
    # sim helper
    open(os.path.join(out,"sim.sh"),"w").write(
        '#!/usr/bin/env bash\n# Build+run: bash sim.sh <tb.sv> <top_module>\n'
        'set -e; D="$(cd "$(dirname "$0")" && pwd)"; TB="$1"; TOP="${2:-tb}"\n'
        f'verilator --binary --timing -sv -Wno-fatal -Wno-WIDTH -Wno-UNUSED -f "$D/{design["name"]}.f" "$TB" --top-module "$TOP"\n'
        './obj_dir/V"$TOP"\n')
    os.chmod(os.path.join(out,"sim.sh"),0o755)
    print(f'elaborated {design["name"]}: {el["nslv"]} managers x {el["nmst"]} subordinates, sub id width {el["sub_idw"]}')
    print(f'  wrote {out}/{topfile}, {design["name"]}.f ({len(files)} sources), sim.sh')

def info(args):
    mans=load_manifests(args.iplib); design=json.load(open(args.design)); el=elaborate(design,mans)
    print(f'design {design["name"]}: {el["nslv"]} managers, {el["nmst"]} subordinates')
    for i,(inst,m,itf) in enumerate(el["managers"]): print(f'  slv[{i}] <- {inst}.{itf["name"]}')
    for (inst,m,itf,base,size,idx) in el["subs"]: print(f'  mst[{idx}] -> {inst}.{itf["name"]}  @ 0x{base:08x} .. 0x{base+size:08x}')

if __name__=="__main__":
    ap=argparse.ArgumentParser(prog="weftgen")
    sub=ap.add_subparsers(dest="cmd", required=True)
    for c in ("build","info"):
        p=sub.add_parser(c); p.add_argument("design"); p.add_argument("--iplib", required=True)
        if c=="build": p.add_argument("-o","--out", required=True)
    a=ap.parse_args()
    (build if a.cmd=="build" else info)(a)