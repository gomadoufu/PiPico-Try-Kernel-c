# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/gomadoufu/Documents/PiPico/pico-sdk/tools/pioasm"
  "/Users/gomadoufu/Documents/PiPico/Try-Kernel/build/pioasm"
  "/Users/gomadoufu/Documents/PiPico/Try-Kernel/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm"
  "/Users/gomadoufu/Documents/PiPico/Try-Kernel/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/tmp"
  "/Users/gomadoufu/Documents/PiPico/Try-Kernel/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp"
  "/Users/gomadoufu/Documents/PiPico/Try-Kernel/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src"
  "/Users/gomadoufu/Documents/PiPico/Try-Kernel/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/gomadoufu/Documents/PiPico/Try-Kernel/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/gomadoufu/Documents/PiPico/Try-Kernel/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp${cfgdir}") # cfgdir has leading slash
endif()
