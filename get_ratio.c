float get_ratio(int a, int b, int x)
{
    float ratio;
    float i;

    if(b > a) {
        i = b - a;
        ratio = (x - a) / i;
    } else {
        i = a - b;
        ratio = (x - b) / i;
    }
    return(ratio);
}
