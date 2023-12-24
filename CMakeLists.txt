cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)

set(MAIN_FILE_NAME hello_world)
set(CMAKE_C_STANDARD 11)

project(my_project)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(${MAIN_FILE_NAME}
        ${MAIN_FILE_NAME}.c
)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(${MAIN_FILE_NAME} pico_stdlib)

# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(${MAIN_FILE_NAME})

pico_enable_stdio_usb(${MAIN_FILE_NAME} 0)
pico_enable_stdio_uart(${MAIN_FILE_NAME} 1)
