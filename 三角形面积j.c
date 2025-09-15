#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, area, d;
    scanf("%f %f %f", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Not a triangle.\n");
        return 0;
    }
    if (a + b > c && a + c > b && b + c > a) {
        d = (a + b + c) / 2.0;
        area = sqrt(d * (d - a) * (d - b) * (d - c)); 
        printf("%.2f\n", area);
    } else {
        printf("Not a triangle.\n");
    }

    return 0;
}
