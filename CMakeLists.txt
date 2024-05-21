cmake_minimum_required(VERSION 3.16)
project(OiAK_Projekt_Cpp_Verilog)

# Dodaj ścieżkę do Verilatora
set(VERILATOR_ROOT "C:/Users/g_sie/CLionProjects/OiAK_Projekt_Cpp_Verilog/verilator")
set(VERILATOR_BIN "${VERILATOR_ROOT}/bin/verilator_bin.exe")

# Dodaj include directories
include_directories(
        ${VERILATOR_ROOT}/include
        ${VERILATOR_ROOT}/include/vltstd
        ${CMAKE_BINARY_DIR}/obj_dir # Dodanie katalogu obj_dir do include directories
)

# Ustawienia kompilatora
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -faligned-new -fcf-protection=none -Wno-bool-operation -Wno-shadow -Wno-sign-compare -Wno-tautological-compare -Wno-uninitialized -Wno-unused-but-set-parameter -Wno-unused-but-set-variable -Wno-unused-parameter -Wno-unused-variable")

# Kompilacja plików Verilog
add_custom_command(
        OUTPUT ${CMAKE_BINARY_DIR}/obj_dir/Vtop__ALL.cpp ${CMAKE_BINARY_DIR}/obj_dir/verilated.cpp ${CMAKE_BINARY_DIR}/obj_dir/verilated_threads.cpp ${CMAKE_BINARY_DIR}/obj_dir/Vtop.h
        COMMAND ${VERILATOR_BIN} --cc ${CMAKE_SOURCE_DIR}/verilog/top.v --Mdir ${CMAKE_BINARY_DIR}/obj_dir --exe ${CMAKE_SOURCE_DIR}/src/main.cpp
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        DEPENDS ${CMAKE_SOURCE_DIR}/verilog/top.v ${CMAKE_SOURCE_DIR}/verilog/ALU.v ${CMAKE_SOURCE_DIR}/verilog/ControlPath.v ${CMAKE_SOURCE_DIR}/verilog/Counter.v ${CMAKE_SOURCE_DIR}/verilog/DataPath.v ${CMAKE_SOURCE_DIR}/verilog/Dff.v ${CMAKE_SOURCE_DIR}/verilog/PIPO1.v ${CMAKE_SOURCE_DIR}/verilog/Radix4BoothMain.v ${CMAKE_SOURCE_DIR}/verilog/Radix4Booth_tb.v ${CMAKE_SOURCE_DIR}/verilog/ShiftRegisterA.v ${CMAKE_SOURCE_DIR}/src/main.cpp
        COMMENT "Verilating top.v"
)

# Dodanie plików źródłowych do projektu
add_executable(sim ${CMAKE_BINARY_DIR}/obj_dir/Vtop__ALL.cpp ${VERILATOR_ROOT}/include/verilated.cpp ${VERILATOR_ROOT}/include/verilated_threads.cpp ${CMAKE_SOURCE_DIR}/src/main.cpp
        ${CMAKE_SOURCE_DIR}/src/Booth.cpp
        ${CMAKE_SOURCE_DIR}/src/BinaryUtils.cpp
        ${CMAKE_SOURCE_DIR}/src/Modulo.cpp
        sc_time_stamp.cpp)

# Dodanie plików źródłowych wygenerowanych przez Verilatora
add_custom_target(verilate ALL DEPENDS ${CMAKE_BINARY_DIR}/obj_dir/Vtop__ALL.cpp)

# Zależności dla executable
add_dependencies(sim verilate)

# Linkowanie bibliotek
target_link_libraries(sim PRIVATE pthread atomic)
