# Versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(Menu)

# Configuración del estándar de C++ (opcional pero recomendado)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Agregar directorio de includes
include_directories(include)

# Agregar archivos fuente
file(GLOB SOURCES "src/*.cpp")

# Crear ejecutable
add_executable(menu ${SOURCES})