/*
 * E89 Pedagogical & Technical Lab
 * project:     get_ratio
 * created on:  2022-11-03 - 10:13 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: get_ratio.c
 */


float get_ratio(int a, int b, int x)
{
    float r;
    float z;

    if(b > a) {
        z = b - a;
        r = (x - a) / z;
    } else {
        z = a - b;
        r = (x - b) / z;
    }
    return(r);
}
