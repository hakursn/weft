#!/usr/bin/env bash
# Weft build entry point (stub).
#   1) (re)generate the structural top from the IP-XACT design (Kactus2 / generator)
#   2) hand off to FuseSoC for the chosen target
set -euo pipefail
fusesoc --cores-root . run --target arty weft:soc:arty_a7_min
