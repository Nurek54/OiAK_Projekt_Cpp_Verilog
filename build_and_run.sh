#!/bin/bash

verilator --cc verilog/BoothRadix4.v --exe --trace --build src/main.cpp src/BinaryUtils.cpp src/Booth.cpp src/Modulo.cpp sc_time_stamp.cpp -o sim --timing -LDFLAGS "-mconsole"

./obj_dir/sim
