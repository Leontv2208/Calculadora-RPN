cmake_minimum_required(VERSION 3.25.2)
project(CalculadoraRPN)

set(CMAKE_C_STANDARD 17)

add_executable(CalculadoraRPN calculadora.c calculadora.h
        libprg/src/include/libprg/libprg.h
        libprg/src/libprg/pilha.c)
