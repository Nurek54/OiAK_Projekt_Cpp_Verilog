#include "Modulo.h"

// Konstruktor klasy Modulo, inicjalizujący wartość modValue na 2^n - 3
Modulo::Modulo(int n) {
    modValue = (1 << n) - 3;  // Obliczenie wartości modValue jako 2^n - 3
}

// Funkcja stosująca operację modulo do podanej wartości
int Modulo::applyModulo(int value) {
    int result = value % modValue;  // Obliczenie reszty z dzielenia value przez modValue
    if (result < 0) {  // Jeśli wynik jest ujemny
        result += modValue;  // Dodaj modValue, aby uzyskać dodatnią resztę
    }
    return result;  // Zwrócenie wyniku
}
