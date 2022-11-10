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
