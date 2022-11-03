float get_ratio(int a, int b, int x) {
    float ratio;
    float i;

    i = b - a;
    ratio = (x - a) / i;
    return(ratio);
}
