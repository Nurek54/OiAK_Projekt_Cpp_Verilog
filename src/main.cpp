#include "VBoothRadix4.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "BinaryUtils.h"
#include "Booth.h"
#include "Modulo.h"
#include <iostream>
#include <bitset>
#include <cstdio>
#include <string>
#include <chrono>

int runNumber = 0; // Global run number counter

void runBoothRadix4(int mplier, int mcand, int n) {
    runNumber++; // Increment run number for each new run
    std::string traceFileName = "dump_" + std::to_string(runNumber) + ".vcd";

    // Remove the old trace file if it exists
    std::remove(traceFileName.c_str());

    // Initialize top verilog instance
    VBoothRadix4* top = new VBoothRadix4;

    // Initialize trace dump
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open(traceFileName.c_str());

    // Initialize simulation inputs
    top->clk = 0;
    top->n_reset = 1;
    top->start = 0;
    top->mplier = mplier;
    top->mcand = mcand;

    auto start_time = std::chrono::high_resolution_clock::now();

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

    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::nano> elapsed = end_time - start_time;

    // Close trace dump
    tfp->close();

    // Print final result
    std::cout << "\nWynik (BoothRadix4): " << top->product << std::endl;
    std::cout << "Czas wykonania (BoothRadix4): " << elapsed.count() << " ns" << std::endl;

    Modulo modulo(n);
    int moduloResult = modulo.applyModulo(top->product);
    std::cout << "Wynik po modulo (BoothRadix4): " << moduloResult << std::endl;

    // Cleanup
    delete tfp;
    delete top;
}

void runBooth(int mplier, int mcand, int n) {
    Booth booth(mplier, mcand);

    auto start_time = std::chrono::high_resolution_clock::now();
    int result = booth.multiply();
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::nano> elapsed = end_time - start_time;

    std::cout << "\nWynik (Booth): " << result << std::endl;
    std::cout << "Czas wykonania (Booth): " << elapsed.count() << " ns" << std::endl;

    Modulo modulo(n);
    int moduloResult = modulo.applyModulo(result);
    std::cout << "Wynik po modulo (Booth): " << moduloResult << std::endl;
}

int main(int argc, char **argv, char **env) {
    int choice = 0;
    int mplier = 0;
    int mcand = 0;
    int n = 0;

    while (true) {
        std::cout << "\nWybierz opcje:\n";
        std::cout << "1. Algorytm BoothRadix4\n";
        std::cout << "2. Algorytm Booth\n";
        std::cout << "3. Zakoncz program\n";
        std::cin >> choice;

        if (choice == 3) {
            break;
        }

        std::cout << "\nPodaj mnoznik (w systemie dziesietnym): ";
        std::cin >> mplier;
        std::cout << "Podaj mnozna (w systemie dziesietnym): ";
        std::cin >> mcand;
        std::cout << "Podaj n dla modulo (2^n - 3): ";
        std::cin >> n;

        std::cout << "\nMnoznik binarny: " << BinaryUtils::toBinaryString(mplier, 18) << std::endl;
        std::cout << "Mnozna binarna: " << BinaryUtils::toBinaryString(mcand, 18) << std::endl;

        switch (choice) {
            case 1:
                runBoothRadix4(mplier, mcand, n);
                break;
            case 2:
                runBooth(mplier, mcand, n);
                break;
            default:
                std::cout << "Nieprawidlowy wybor, sprobuj ponownie.\n";
                break;
        }
    }

    return 0;
}
