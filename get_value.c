/*
 * E89 Pedagogical & Technical Lab
 * project:     Get_value
 * created on:  2022-11-03 - 11:13 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: get_value.c
 */


int get_value(int a, int b, float r)
{
    float x;
    float z;

    if(b > a) {
        z = b - a;
        x = a + (z * r);
    } else {
        z = a - b;
        x = b + (z * r);
    }
    return(x);
}
