#!/bin/bash

verilator --cc /c/Users/g_sie/CLionProjects/OiAK_Projekt_Cpp_Verilog/verilog/top.v --exe --build -j 4 -o sim /c/Users/g_sie/CLionProjects/OiAK_Projekt_Cpp_Verilog/src/main.cpp /c/Users/g_sie/CLionProjects/OiAK_Projekt_Cpp_Verilog/src/BinaryUtils.cpp /c/Users/g_sie/CLionProjects/OiAK_Projekt_Cpp_Verilog/src/Booth.cpp /c/Users/g_sie/CLionProjects/OiAK_Projekt_Cpp_Verilog/src/Modulo.cpp

./obj_dir/sim
