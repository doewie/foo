cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)

project(foo C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(foo
    foo.c testlib.c
)

pico_enable_stdio_usb(foo 1)
pico_enable_stdio_uart(foo 0)

pico_add_extra_outputs(foo)

target_link_libraries(foo pico_stdlib)