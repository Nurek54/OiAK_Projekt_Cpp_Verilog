#ifndef BINARYUTILS_H
#define BINARYUTILS_H

#include <vector>
#include <string>

// Definicja klasy BinaryUtils
class BinaryUtils {
public:
    // Deklaracja statycznych metod publicznych klasy BinaryUtils
    static std::vector<int> toBinary(int num, int size);  // Metoda konwertująca liczbę całkowitą na wektor binarny o zadanym rozmiarze
    static int binaryToDecimal(const std::vector<int>& binary);  // Metoda konwertująca wektor binarny na liczbę dziesiętną
    static std::string toBinaryString(int value, int bits);  // Metoda konwertująca liczbę całkowitą na string binarny o zadanej liczbie bitów
};

#endif // BINARYUTILS_H
