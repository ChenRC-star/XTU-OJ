#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    scanf("%lf", &x);
    if(x >= 0 && x < 10){
        double y = cos(x+3.0);
        printf("%g\n", y);
    }
    else if (x >= 10 && x< 20){
        double y = cos(x + 7.5);
        double y = pow(y , 2);
        printf("%g\n", y);
    }
    else if (x>=20 && x<30){
        double y = cos(x + 4.0);
        double y = pow(y , 4);
        printf("%g\n", y);
    }
    else{
        printf("Not define\n");
    }
}