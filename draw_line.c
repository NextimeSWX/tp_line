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

float get_ratio(int a, int b, int x);
float get_value(int a, int b, float r);
void put_pixel(t_bunny_position *pos,
               t_bunny_pixelarray *px,
               unsigned int color);

void stu_draw_line(t_bunny_position *pos_a,
                   t_bunny_position *pos_b,
                   t_bunny_pixelarray *px,
                   unsigned int color)
{
    t_bunny_position pos;
    float r;
    float x;
    int z;

    pos.x = pos_a -> x;
    pos.y = pos_a -> y;
    z = pos_a -> x;
    
     while(pos_b -> x >= z) {
         put_pixel(&pos, px, color);
         r = get_ratio(pos_a -> x, pos_b -> x, z);
         pos.y = get_value(pos_a -> y, pos_b -> y, r);
         pos.x = pos.x + 1;
         z = z + 1;
         }
}
