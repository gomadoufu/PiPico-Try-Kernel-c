/*
Copyright 2020 (c) 2020 Raspberry Pi (Trading) Ltd.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors
may be used to endorse or promote products derived from this software without
specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
 *** Try Kernel
 *      ブート第二ステージ プログラム (Pico C/C++ SDKより)
 */

const unsigned char boot2[] __attribute__((section(".boot2"))) = {
    0x00, 0xb5, 0x32, 0x4b, 0x21, 0x20, 0x58, 0x60, 0x98, 0x68, 0x02, 0x21,
    0x88, 0x43, 0x98, 0x60, 0xd8, 0x60, 0x18, 0x61, 0x58, 0x61, 0x2e, 0x4b,
    0x00, 0x21, 0x99, 0x60, 0x02, 0x21, 0x59, 0x61, 0x01, 0x21, 0xf0, 0x22,
    0x99, 0x50, 0x2b, 0x49, 0x19, 0x60, 0x01, 0x21, 0x99, 0x60, 0x35, 0x20,
    0x00, 0xf0, 0x44, 0xf8, 0x02, 0x22, 0x90, 0x42, 0x14, 0xd0, 0x06, 0x21,
    0x19, 0x66, 0x00, 0xf0, 0x34, 0xf8, 0x19, 0x6e, 0x01, 0x21, 0x19, 0x66,
    0x00, 0x20, 0x18, 0x66, 0x1a, 0x66, 0x00, 0xf0, 0x2c, 0xf8, 0x19, 0x6e,
    0x19, 0x6e, 0x19, 0x6e, 0x05, 0x20, 0x00, 0xf0, 0x2f, 0xf8, 0x01, 0x21,
    0x08, 0x42, 0xf9, 0xd1, 0x00, 0x21, 0x99, 0x60, 0x1b, 0x49, 0x19, 0x60,
    0x00, 0x21, 0x59, 0x60, 0x1a, 0x49, 0x1b, 0x48, 0x01, 0x60, 0x01, 0x21,
    0x99, 0x60, 0xeb, 0x21, 0x19, 0x66, 0xa0, 0x21, 0x19, 0x66, 0x00, 0xf0,
    0x12, 0xf8, 0x00, 0x21, 0x99, 0x60, 0x16, 0x49, 0x14, 0x48, 0x01, 0x60,
    0x01, 0x21, 0x99, 0x60, 0x01, 0xbc, 0x00, 0x28, 0x00, 0xd0, 0x00, 0x47,
    0x12, 0x48, 0x13, 0x49, 0x08, 0x60, 0x03, 0xc8, 0x80, 0xf3, 0x08, 0x88,
    0x08, 0x47, 0x03, 0xb5, 0x99, 0x6a, 0x04, 0x20, 0x01, 0x42, 0xfb, 0xd0,
    0x01, 0x20, 0x01, 0x42, 0xf8, 0xd1, 0x03, 0xbd, 0x02, 0xb5, 0x18, 0x66,
    0x18, 0x66, 0xff, 0xf7, 0xf2, 0xff, 0x18, 0x6e, 0x18, 0x6e, 0x02, 0xbd,
    0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x07, 0x00,
    0x00, 0x03, 0x5f, 0x00, 0x21, 0x22, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x18,
    0x22, 0x20, 0x00, 0xa0, 0x00, 0x01, 0x00, 0x10, 0x08, 0xed, 0x00, 0xe0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x74, 0xb2, 0x4e, 0x7a,
};
