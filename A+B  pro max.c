#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long a,b,c;
        scanf("%lld+%lld=%lld",&a,&b,&c);
        long long cot = 0;
        long long a_1 = a,b_1 = b;
        while (1)
        {
            if (a_1 + b == c)
            {
                printf("%lld\n",cot);
                break;
            }
            if (a + b_1 == c)
            {
                printf("%lld\n", -cot);
                break;
            }
            a_1 *= 10;
            b_1 *= 10;
            cot++;
        }
        
    }
    return 0;
}
