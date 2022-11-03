float get_value(int a, int b, float r) {
    float x;
    float i;

    if(b > a) {
        i = b - a;
        x = a + (i * r);
    }
    else {
        i = a - b;
        x = b + (i * r);
    }
    return(x);
}
