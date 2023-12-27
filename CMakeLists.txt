cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

set(MAIN_FILE_NAME pico_tryknl)
file(GLOB BOOT "boot/*c")

message(STATUS "MAIN_FILE_NAME: ${MAIN_FILE_NAME}")
message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
message(STATUS "BOOT: ${BOOT}")

project(try_kernel C CXX ASM)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(${MAIN_FILE_NAME}
        ${BOOT} ${CMAKE_SOURCE_DIR}/application/main.c
)

target_link_libraries(${MAIN_FILE_NAME} pico_stdlib)

target_link_options(${MAIN_FILE_NAME}
            PUBLIC
                "-T" "${CMAKE_SOURCE_DIR}/linker/pico_memmap.ld"
        )

target_include_directories(${MAIN_FILE_NAME} PRIVATE include)
