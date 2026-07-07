# vendor/ — pinned upstream sources

Open-source dependencies live here as git submodules pinned to a known-good commit.
Nothing here is edited in place; the wrappers in `../ip/` reference these.

    git submodule add https://github.com/pulp-platform/axi                vendor/pulp-axi
    git submodule add https://github.com/pulp-platform/tech_cells_generic vendor/tech_cells_generic
    git submodule add https://github.com/alexforencich/verilog-axis       vendor/verilog-axis
