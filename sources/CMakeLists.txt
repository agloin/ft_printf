cmake_minimum_required(VERSION 3.15)
project(sources C)

set(CMAKE_C_STANDARD 11)

add_executable(sources
        ft_printf.c test_file.c ft_printf.h ft_new_printf.c)
