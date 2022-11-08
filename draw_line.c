/*
 * E89 Pedagogical & Technical Lab
 * project:     Draw_line
 * created on:  2022-11-03 - 11:13 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: draw_line.c
 */

#include <lapin.h>
#include <unistd.h>
#include <stdlib.h>

void put_pixel(t_bunny_position *pos,
               t_bunny_pixelarray *px,
               unsigned int color);

void stu_draw_line(t_bunny_position *pos_a,
                   t_bunny_position *pos_b,
                   t_bunny_pixelarray *px,
                   unsigned int color)
{
    t_bunny_position *pos;

    pos = pos_a;
    while(pos -> x <= pos_b -> x) {
        put_pixel(pos, px, color);
        pos -> x = pos -> x + 1;
    }
}
