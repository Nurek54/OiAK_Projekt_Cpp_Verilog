#include "VBoothRadix4.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <bitset>

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);

    // Initialize top verilog instance
    VBoothRadix4* top = new VBoothRadix4;

    // Initialize trace dump
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("dump.vcd");

    // Initialize simulation inputs
    top->clk = 0;
    top->n_reset = 1;
    top->start = 0;
    top->mplier = 69; // 3 in decimal
    top->mcand = 96;  // 6 in decimal

    // Run simulation for several clock cycles
    for (int i = 0; i < 300; i++) {
        if (i == 2) {
            top->n_reset = 0; // Apply reset
        }
        if (i == 4) {
            top->n_reset = 1; // Release reset
            top->start = 1; // Start multiplication
        }
        if (i == 6) {
            top->start = 0; // Clear start signal
        }

        // Toggle clock
        top->clk = !top->clk;

        // Evaluate model
        top->eval();

        // Dump trace
        tfp->dump(i);
    }

    // Close trace dump
    tfp->close();

    // Print final result
    std::cout << "Wynik (dec): " << top->product << std::endl;
    std::cout << "Wynik (hex): " << std::hex << top->product << std::endl;
    std::cout << "Wynik (bin): " << std::bitset<36>(top->product) << std::endl;

    // Cleanup
    delete top;
    exit(0);
}
