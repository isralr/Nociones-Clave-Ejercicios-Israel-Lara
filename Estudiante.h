//
// Created by israe on 10/10/2024.
//

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include "Persona.h"

class Estudiante : public Persona {
private:
    std::string grado;

public:
    void setGrado(const std::string &grado);
    std::string getGrado();
    void mostrarDetalles();
};

#endif // ESTUDIANTE_H
