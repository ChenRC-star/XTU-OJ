#include <stdio.h>
int main()
{
    double pi=3.14159265;
    double r,h,s,v;
    r = pi/4;
    h = sin(r);
    s = cos(r);
    v = h*h + h*s - s*s;
    printf("%g\n", v);
    return 0;
}