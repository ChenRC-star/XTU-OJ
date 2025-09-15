#include <stdio.h>
#include <math.h>

int main()
{
    int K;
    scanf("%d", &K);
    while (K--)
    {
        long long c,d;
        scanf("%lld %lld", &c, &d);
        long long delta = c*c - 4*d;
        if (delta < 0)
        {
            printf("None\n");
            continue;
        }
        long long r = sqrt(delta);
        if (r * r < delta)r++;
        if(r * r != delta){
            printf("None\n");
            continue;
        }
        if ((c - r) % 2 != 0)
        {
            printf("None\n");
            continue;
        }
        long long x2 = (c + r) / 2;
        long long x1 = (c - r) / 2;
        printf("%lld %lld\n", x1, x2);
    }
    return 0;
}