//
// Created by israe on 10/10/2024.
//

#include "main.h"
#include <iostream>

int suma(int a, int b) {
  return a + b;
}

int g = 20;

int main() {
  std::cout << "Hola" << std::endl;
  std::cout << "La suma es: " << suma( 5 , 3) << std::endl;
  std::cout << "Valor de g antes de la funcion suma: " << g << std::endl; std::cout << "La suma es: " << suma(5, g) << std::endl; std::cout << "Valor de g despues de la funcion suma: " << g << std::endl;

  return 0;
}