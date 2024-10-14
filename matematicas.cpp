#include "matematicas.h"
#include <stdexcept>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

double division(int a, int b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    } else {
        throw std::invalid_argument("Division entre cero");
    }
}
