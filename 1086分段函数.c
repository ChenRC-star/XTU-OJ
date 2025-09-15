#include <stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);
    if (x<0)
    {
        printf("0\n");
    }
    else if (x>=0 && x<=1)
    {
        double y = x * x;
        printf("%g\n", y);
    }
    else if (x>1)
    {
        double y = pow(x, 0.5);
        printf("%g\n", y);
    }
    return 0;
} 