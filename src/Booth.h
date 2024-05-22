#ifndef BOOTH_H
#define BOOTH_H

#include <vector>
#include "BinaryUtils.h"

// Definicja klasy Booth
class Booth {
public:
    Booth(int M, int Q);   // Deklaracja konstruktora klasy Booth, który przyjmuje dwa argumenty typu int
    int multiply();        // Deklaracja metody multiply, która zwraca wynik mnożenia jako int

private:
    // Deklaracja prywatnych metod pomocniczych
    std::vector<int> addBinary(const std::vector<int>& a, const std::vector<int>& b);  // Dodawanie binarne z przeniesieniem
    std::vector<int> negateBinary(const std::vector<int>& a);  // Negacja binarna (dopełnienie do dwóch)
    void rightShift(std::vector<int>& A, std::vector<int>& Q, int& Q_1);  // Przesunięcie w prawo

    // Prywatne zmienne członkowskie klasy Booth
    int M;                   // Przechowywanie wartości mnożnej
    int Q;                   // Przechowywanie wartości mnożnika
    int n;                   // Przechowywanie liczby bitów (zakładamy 32 bity)
    std::vector<int> A;      // Wektor przechowujący częściowy wynik A
    std::vector<int> M_bin;  // Wektor przechowujący binarną reprezentację M
    std::vector<int> Q_bin;  // Wektor przechowujący binarną reprezentację Q
    std::vector<int> M_neg;  // Wektor przechowujący binarną negację M
    int Q_1;                 // Przechowywanie poprzedniego najmniej znaczącego bitu Q
};

#endif
