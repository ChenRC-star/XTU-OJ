#include <stdio.h>

int main() {
    long long int a1, b1, c1, a2, b2, c2;
    scanf("%lld %lld %lld", &a1, &b1, &c1);
    scanf("%lld %lld %lld", &a2, &b2, &c2);

    if (a1 * b2 == a2 * b1) 
    {
        if (a1 * c2 == a2 * c1 && b1 * c2 == b2 * c1) 
        {

            printf("collinear\n");
        } 
        else 
        {
            printf("parallel\n");
        }
    } 
    else
     {
        if (a1 * a2 + b1 * b2 == 0) 
        {
            printf("vertical\n");
        } 
        else 
        {
            printf("intersect\n");
        }
    }

    return 0;
}
