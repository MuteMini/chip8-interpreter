/*
    Author: Min Kang
    Creation Date: January 14th, 2024

    Declares shared headers
*/

#ifndef HEADER_H
#define HEADER_H

#define WIDTH 64
#define HEIGHT 32
#define SCALE 8

#define HEX_SPRITE_DATA 0xF0, 0x90, 0x90, 0x90, 0xF0, \
                0x20, 0x60, 0x20, 0x20, 0x70,\
                0xF0, 0x10, 0xF0, 0x80, 0xF0,\
                0xF0, 0x10, 0xF0, 0x10, 0xF0,\
                0x90, 0x90, 0xF0, 0x10, 0x10,\
                0xF0, 0x80, 0xF0, 0x10, 0xF0,\
                0xF0, 0x80, 0xF0, 0x90, 0xF0,\
                0xF0, 0x10, 0x20, 0x40, 0x40,\
                0xF0, 0x90, 0xF0, 0x90, 0xF0,\
                0xF0, 0x90, 0xF0, 0x10, 0xF0,\
                0xF0, 0x90, 0xF0, 0x90, 0x90,\
                0xE0, 0x90, 0xE0, 0x90, 0xE0,\
                0xF0, 0x80, 0x80, 0x80, 0xF0,\
                0xE0, 0x90, 0x90, 0x90, 0xE0,\
                0xF0, 0x80, 0xF0, 0x80, 0xF0,\
                0xF0, 0x80, 0xF0, 0x80, 0x80
#define HEX_SPRITE_LENGTH 80

#define KEY_NOTPRESSED 0x10

#define FRAMES_IN_MS 17

#endif