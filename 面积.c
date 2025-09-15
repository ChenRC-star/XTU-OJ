#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        long on = 2 * a * a * a + a * a * b + b * b * b + 2 * a * b * b;
        long down = 2 * (a + b);
        int gg = gcd(on, down);
        on /= gg;
        down /= gg;
        if (down == 1)
        {
            printf("%ld\n", on);
        }
        else
        {
            printf("%ld/%ld\n", on, down);
        }
    }
    return 0;
}