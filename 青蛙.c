#include <stdio.h>
#include <math.h>

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, k;
        scanf("%lld %lld", &n,&k);
        if (n == 1)
        {
            printf("Yes\n");
        }
        else
        {
            long long k_1 = k + 1;
            long  long gg = gcd(n, k_1);
            if (gg == 1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
            
        }
        
    }
    return 0;
}
    