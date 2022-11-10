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
