#ifndef IO_H
#define IO_H

#include "geometry.hpp"

struct Color
{
        uint8_t r;
        uint8_t g;
        uint8_t b;
};

namespace io
{

void init();

void cleanup();

void draw_text(
        const std::string& str,
        const PxPos pos,
        const Color color);

void clear_screen();

void flip();

void sleep(const uint32_t duration);

} // io

#endif // IO_H
