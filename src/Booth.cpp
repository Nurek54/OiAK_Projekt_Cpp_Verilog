#include "Booth.h"
#include <vector>
#include <iostream>

// Konstruktor klasy Booth, inicjalizujący wartości M i Q oraz wykonujący podstawową konfigurację
Booth::Booth(int M, int Q) : M(M), Q(Q) {
    n = sizeof(int) * 8;  // Zakładamy 32-bitowe liczby całkowite
    A.resize(n, 0);       // Inicjalizacja wektora A zerami o rozmiarze n
    M_bin = BinaryUtils::toBinary(M, n);  // Konwersja M do postaci binarnej
    Q_bin = BinaryUtils::toBinary(Q, n);  // Konwersja Q do postaci binarnej
    M_neg = negateBinary(M_bin);  // Negacja binarna M
    Q_1 = 0;  // Inicjalizacja Q_1 na 0
}

// Funkcja dodająca dwa wektory binarne z uwzględnieniem przeniesienia
std::vector<int> Booth::addBinary(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result(a.size(), 0);  // Inicjalizacja wektora wynikowego zerami
    int carry = 0;  // Inicjalizacja przeniesienia na 0
    for (int i = a.size() - 1; i >= 0; i--) {  // Pętla od końca do początku wektorów
        int sum = a[i] + b[i] + carry;  // Obliczenie sumy bieżących bitów i przeniesienia
        result[i] = sum % 2;  // Zapisanie bitu wynikowego
        carry = sum / 2;  // Aktualizacja przeniesienia
    }
    return result;  // Zwrócenie wyniku
}

// Funkcja negująca wektor binarny
std::vector<int> Booth::negateBinary(const std::vector<int>& a) {
    std::vector<int> result(a.size(), 0);  // Inicjalizacja wektora wynikowego zerami
    std::vector<int> one(a.size(), 0);  // Inicjalizacja wektora 'one' zerami
    one[a.size() - 1] = 1;  // Ustawienie ostatniego bitu na 1 (reprezentacja jedynki)
    for (int i = 0; i < a.size(); i++) {  // Pętla przez wszystkie bity
        result[i] = a[i] == 0 ? 1 : 0;  // Negacja bitów
    }
    result = addBinary(result, one);  // Dodanie jedynki do wyniku (obliczenie dopełnienia do dwóch)
    return result;  // Zwrócenie wyniku
}

// Funkcja wykonująca przesunięcie w prawo na wektorach A i Q oraz aktualizująca Q_1
void Booth::rightShift(std::vector<int>& A, std::vector<int>& Q, int& Q_1) {
    Q_1 = Q[Q.size() - 1];  // Przypisanie ostatniego bitu Q do Q_1
    for (int i = Q.size() - 1; i > 0; i--) {  // Przesunięcie bitów w Q
        Q[i] = Q[i - 1];
    }
    Q[0] = A[A.size() - 1];  // Ustawienie pierwszego bitu Q na ostatni bit A
    for (int i = A.size() - 1; i > 0; i--) {  // Przesunięcie bitów w A
        A[i] = A[i - 1];
    }
}

// Funkcja wykonująca mnożenie algorytmem Bootha
int Booth::multiply() {
    for (int i = 0; i < n; i++) {  // Pętla przez n bitów
        if (Q_bin[n - 1] == 1 && Q_1 == 0) {  // Jeśli bieżący bit Q_bin to 1 i Q_1 to 0
            A = addBinary(A, M_neg);  // Dodanie negacji M do A
        } else if (Q_bin[n - 1] == 0 && Q_1 == 1) {  // Jeśli bieżący bit Q_bin to 0 i Q_1 to 1
            A = addBinary(A, M_bin);  // Dodanie M do A
        }
        rightShift(A, Q_bin, Q_1);  // Przesunięcie w prawo
    }

    // Konwersja wyniku z postaci binarnej na liczbę całkowitą
    int result = 0;  // Inicjalizacja wyniku na 0
    for (int i = 0; i < n; i++) {  // Pętla przez n bitów
        result += Q_bin[i] << (n - 1 - i);  // Dodanie odpowiedniego bitu do wyniku
    }

    return result;
}
