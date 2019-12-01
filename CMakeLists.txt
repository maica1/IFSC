cmake_minimum_required(VERSION 3.15)
project(moropinzee C)

set(CMAKE_C_STANDARD 99)

add_executable(moropinzee main.c MecanicaJogo.c MecanicaJogo.h Rankings.c Rankings.h)