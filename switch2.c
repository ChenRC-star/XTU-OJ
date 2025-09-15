#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
    scanf("%lf", &x);  
    switch ((int)x) {
        case 0 ... 9:
            y = cos(x + 4.0);
            y = pow(y, 2);
            printf("%lf\n", y);
            break;
        case 10 ... 19:
            y = cos(x + 7.5);
            y = pow(y, 2);
            printf("%lf\n", y);
            break;
        case 20 ... 29:
            y = cos(x + 4.0);
            y = pow(y, 4);
            printf("%lf\n", y);
            break;
        default:
            printf("Not define\n");
            break;
    }
    return 0;
}
