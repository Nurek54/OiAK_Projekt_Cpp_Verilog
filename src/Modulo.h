#ifndef MODULO_H
#define MODULO_H

// Definicja klasy Modulo
class Modulo {
public:
    Modulo(int n);              // Deklaracja konstruktora klasy Modulo, który przyjmuje jeden argument typu int
    int applyModulo(int value); // Deklaracja metody applyModulo, która przyjmuje wartość typu int i zwraca int

private:
    int modValue;               // Prywatna zmienna przechowująca wartość modułu
};

#endif
