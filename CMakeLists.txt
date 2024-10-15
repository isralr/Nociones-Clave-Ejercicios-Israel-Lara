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

include_directories(.)

# Executable for Proyecto 1
add_executable(Nociones_Clave_Ejercicios_Israel_Lara_1
        "Proyecto 1/main.cpp"
        "Proyecto 1/Persona.h"
        "Proyecto 1/Persona.cpp"
        "Proyecto 1/Estudiante.h"
        "Proyecto 1/Estudiante.cpp"
        "Proyecto 1/funciones.h"
        "Proyecto 1/funciones.cpp"
        "Proyecto 1/matematicas.cpp"
)

# Executable for Proyecto 2
add_executable(Nociones_Clave_Ejercicios_Israel_Lara_2
        "Proyecto 2/main.cpp"
        "Proyecto 2/nuevo.cpp"
)

add_library(matematicas STATIC "Proyecto 1/matematicas.cpp")
add_library(matematicas2 SHARED "Proyecto 1/matematicas.cpp")

target_link_libraries(Nociones_Clave_Ejercicios_Israel_Lara_1 PRIVATE fmt::fmt matematicas matematicas2)
target_link_libraries(Nociones_Clave_Ejercicios_Israel_Lara_2 PRIVATE fmt::fmt matematicas matematicas2)