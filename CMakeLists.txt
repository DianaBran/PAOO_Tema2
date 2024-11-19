cmake_minimum_required(VERSION 3.10)
project(PAOO_Tema2)

# Setează standardul C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Adaugă directorul include pentru headere
include_directories(include)

# Adaugă executabilul și fișierele sursă
add_executable(PAOO_Tema2 
    src/main.cpp
    src/Car.cpp
)