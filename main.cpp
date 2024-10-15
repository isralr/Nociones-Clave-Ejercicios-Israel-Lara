#include <iostream>
#include "proyecto1/funciones.h"
#include "main.h"
#include "proyecto1/Persona.h"
#include "proyecto1/Estudiante.h"
#include "fmt/ranges.h"
#include "Proyecto2/nuevo.h"

#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

int suma() {
  int result = suma(3, 4);
  std::cout << "Suma: " << result << std::endl;
  return 0;
}

int g = 20;

int main() {
  std::cout << "Hola" << std::endl;
  std::cout << "La suma es: " << suma(5, 3) << std::endl;
  std::cout << "Valor de g antes de la funcion suma: " << g << std::endl;
  std::cout << "La suma es: " << suma(5, g) << std::endl;
  std::cout << "Valor de g despues de la funcion suma: " << g << std::endl;

  Persona personal;
  personal.setNombre("israel");
  personal.setEdad(18);
  personal.setGenero("Masculino");
  std::cout << "Nombre: " << personal.getNombre() << std::endl;
  std::cout << "Edad: " << personal.getEdad() << std::endl;
  std::cout << "Genero: " << personal.getGenero() << std::endl;

  Estudiante estudiante1;
  estudiante1.setNombre("israel");
  estudiante1.setEdad(18);
  estudiante1.setGenero("Masculino");
  estudiante1.setGrado("Ingeniería Informática");
  estudiante1.mostrarDetalles();

  fmt::print("Usando la librería fmt\n");

  second();

  return 0;
}