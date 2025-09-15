#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int T;
    scanf ("%d", &T);
    while (T--)
    {
        long long n;
        scanf ("%lld", &n);
        int flag = 0;
        for(int a=1;a*a<=n;a++)
        {
            for(int b=a;a*a+b*b<=n;b++)
            {
                double c=sqrt(n-a*a-b*b);
                if(c==(int)c&&c>=b)
                {
                    flag ++;

                }
            }
        }
        printf("%d\n",flag);
    }
    return 0;
}