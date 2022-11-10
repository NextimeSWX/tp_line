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
int get_value(int a, int b, float r);
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
    int xa = pos_a -> x;
    int ya = pos_a -> y;
    int xb = pos_b -> x;
    int yb = pos_b -> y;

    pos.x = pos_a -> x;
    pos.y = pos_a -> y;
    if(xb - xa >= yb - ya) {
     while(xa <= xb) {
         put_pixel(&pos, px, color);
         r = get_ratio(pos_a -> x, pos_b -> x, xa);
         pos.y = get_value(pos_a -> y, pos_b -> y, r);
         pos.x = xa;
         xa = xa + 1;
         }
    }
    else if(ya <= yb) {
        
    }
}
