cmake_minimum_required(VERSION 3.29)
project(Nociones_Clave_Ejercicios_Israel_Lara)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Nociones_Clave_Ejercicios_Israel_Lara
        main.cpp
        main.h
        Persona.h
        Persona.cpp
        Estudiante.h
        Estudiante.cpp
        funciones.h
        funciones.cpp
        matematicas.cpp
)

add_library(matematicas STATIC matematicas.cpp)

target_link_libraries(Nociones_Clave_Ejercicios_Israel_Lara matematicas)


add_library(matematicas2 SHARED matematicas.cpp)

target_link_libraries(Nociones_Clave_Ejercicios_Israel_Lara matematicas)