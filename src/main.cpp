#include <iostream>
#include "BinaryUtils.h"
#include "Booth.h"
#include "Modulo.h"
#include "../verilator/include/verilated.h"
#include "../obj_dir/Vtop.h"

// Dummy implementation of sc_time_stamp()
double sc_time_stamp() {
    return 0;
}

int main(int argc, char **argv, char **env) {
    int liczba1, liczba2, n;
    std::cout << "Podaj liczbe 1: ";
    std::cin >> liczba1;
    std::vector<int> M_bin = BinaryUtils::toBinary(liczba1, sizeof(int) * 8);
    std::cout << "Liczba 1 w binarnym: ";
    for (int bit : M_bin) {
        std::cout << bit;
    }
    std::cout << std::endl;

    std::cout << "Podaj liczbe 2: ";
    std::cin >> liczba2;
    std::vector<int> Q_bin = BinaryUtils::toBinary(liczba2, sizeof(int) * 8);
    std::cout << "Liczba 2 w binarnym: ";
    for (int bit : Q_bin) {
        std::cout << bit;
    }
    std::cout << std::endl;

    // Algorytm Bootha
    Booth booth(liczba1, liczba2);
    int boothResult = booth.multiply();
    std::vector<int> boothResultBinary = BinaryUtils::toBinary(boothResult, sizeof(int) * 8);
    std::cout << "\nAlgorytm Bootha:\n";
    std::cout << "Wynik w binarnym: ";
    for (int bit : boothResultBinary) {
        std::cout << bit;
    }
    std::cout << "\nWynik w dziesietnym: " << boothResult << std::endl;

    // Dodaj obliczenia modulo
    std::cout << "Podaj n dla modulo 2^n - 3: ";
    std::cin >> n;

    Modulo modulo(n);
    int moduloResult = modulo.applyModulo(boothResult);
    std::vector<int> moduloResultBinary = BinaryUtils::toBinary(moduloResult, sizeof(int) * 8);
    std::cout << "\nWynik modulo w binarnym: ";
    for (int bit : moduloResultBinary) {
        std::cout << bit;
    }
    std::cout << "\nWynik modulo w dziesietnym: " << moduloResult << std::endl;

    // Symulacja z użyciem Verilatora
    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;
    while (!Verilated::gotFinish()) {
        top->eval();
    }
    delete top;

    return 0;
}
