#!/bin/bash

cd C:
cd user
cd users
cd g_sie
cd CLionProjects
cd OiAK_Projekt_Cpp_Verilog

verilator --cc verilog/BoothRadix4.v --exe --trace --build src/main.cpp src/BinaryUtils.cpp src/Booth.cpp src/Modulo.cpp sc_time_stamp.cpp -o sim --timing -LDFLAGS "-mconsole"

./obj_dir/sim
