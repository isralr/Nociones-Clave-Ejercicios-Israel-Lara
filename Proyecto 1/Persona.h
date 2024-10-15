//
// Created by israe on 10/10/2024.
//

// Persona.h
#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
private:
    std::string nombre;
    int edad;
    std::string genero;

public:
    void setNombre(const std::string &nombre);
    std::string getNombre();
    void setEdad(int edad);
    int getEdad();
    void setGenero(const std::string &genero);
    std::string getGenero();
};

#endif // PERSONA_H
