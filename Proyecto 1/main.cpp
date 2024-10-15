#include <iostream>
#include "funciones.h"
#include "main.h"


int g = 20;

int main() {
  std::cout << "Hola" << std::endl;
  std::cout << "La suma es: " << suma(5, 3) << std::endl;
  std::cout << "Valor de g antes de la funcion suma: " << g << std::endl;
  std::cout << "La suma es: " << suma(5, g) << std::endl;
  std::cout << "Valor de g despues de la funcion suma: " << g << std::endl;

  return 0;
}

int main2() {
  int result = suma(3, 4);
  std::cout << "Suma: " << result << std::endl;
  return 0;
}