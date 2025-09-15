#include <stdio.h>
#include <math.h>

int  main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long N;
        scanf("%lld", &N);
        if(N==1)printf("0\n");
        else if (N ==2 )printf("1\n");
        else if (N %2==0)printf("%lld\n", N/2);
        else if ((N+1)%4==0)printf("%lld\n", (N+1)/2);
        else if ((N-1)%4==0)printf("%lld\n", (N-1)/2);
    }
    return 0;
}