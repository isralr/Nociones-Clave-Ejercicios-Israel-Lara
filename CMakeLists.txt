cmake_minimum_required(VERSION 3.29)
project(Nociones_Clave_Ejercicios_Israel_Lara)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG 7.1.3
)
FetchContent_MakeAvailable(fmt)

include_directories(${CMAKE_SOURCE_DIR})

# Unificado en un solo ejecutable
add_executable(Nociones_Clave_Ejercicios_Israel_Lara
        "Proyecto1/Persona.h"
        "Proyecto1/Persona.cpp"
        "Proyecto1/Estudiante.h"
        "Proyecto1/Estudiante.cpp"
        "Proyecto1/funciones.h"
        "Proyecto1/funciones.cpp"
        "Proyecto1/matematicas.cpp"
        "Proyecto2/nuevo.cpp"
        main.cpp
)

add_library(matematicas STATIC "Proyecto1/matematicas.cpp")
add_library(matematicas2 SHARED "Proyecto1/matematicas.cpp")

target_link_libraries(Nociones_Clave_Ejercicios_Israel_Lara PRIVATE fmt::fmt matematicas matematicas2)