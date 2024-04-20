cmake_minimum_required(VERSION 3.27)
project(Reimann_Zeta_Fun)

set(CMAKE_CXX_STANDARD 23)

add_executable(Reimann_Zeta_Fun main.cpp
        Function/Zeta_Euler.cpp
        "Function/Zeta_Reimann(complex).cpp"
        Calculations/complex_cal.cpp
        "Calculations/Bernoulli Numbers.cpp"
        "Calculations/Stirling numbers of the second kind.cpp"
        "Graph/Reimann Zeta sorting.cpp")
