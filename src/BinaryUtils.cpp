#include "BinaryUtils.h"
#include <bitset>
#include <sstream>

// Funkcja konwertująca liczbę całkowitą na wektor binarny o zadanym rozmiarze
std::vector<int> BinaryUtils::toBinary(int num, int size) {
    std::vector<int> bin(size, 0);  // Inicjalizacja wektora binarnego o zadanym rozmiarze wypełnionego zerami
    for (int i = 0; i < size; i++) {  // Pętla iterująca przez wszystkie bity
        bin[size - 1 - i] = (num >> i) & 1;  // Przesunięcie bitowe i maskowanie w celu uzyskania poszczególnych bitów liczby
    }
    return bin;  // Zwrócenie wektora binarnego
}

// Funkcja konwertująca wektor binarny na liczbę dziesiętną
int BinaryUtils::binaryToDecimal(const std::vector<int>& binary) {
    int result = 0;  // Inicjalizacja wyniku na 0
    int n = binary.size();  // Pobranie rozmiaru wektora binarnego
    bool isNegative = binary[0] == 1;  // Sprawdzenie, czy liczba jest ujemna (pierwszy bit = 1)

    for (int i = 0; i < n; i++) {  // Pętla iterująca przez wszystkie bity
        result = (result << 1) | binary[i];  // Przesunięcie bitowe i dodanie aktualnego bitu do wyniku
    }

    if (isNegative) {  // Jeśli liczba jest ujemna
        result -= (1 << n);  // Korekta wyniku dla liczby ujemnej
    }

    return result;  // Zwrócenie wyniku
}

// Funkcja konwertująca liczbę całkowitą na string binarny o zadanej liczbie bitów
std::string BinaryUtils::toBinaryString(int value, int bits) {
    if (bits <= 0) return "";  // Jeśli liczba bitów jest nieprawidłowa, zwróć pusty string

    unsigned int mask = (1u << bits) - 1;  // Utworzenie maski do ograniczenia liczby bitów
    std::bitset<36> bitset(value & mask);  // Utworzenie obiektu bitset z odpowiednią maską
    return bitset.to_string().substr(36 - bits);  // Zwrócenie odpowiedniego fragmentu stringa binarnego
}
