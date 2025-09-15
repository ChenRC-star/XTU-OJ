#include <stdio.h>

long long lcm(long long a, long long b)
{
    int g = 1;
    while((a*g)%b !=0)
    {
        g ++;
    }
    return g*a;
}

int main()
{
    long long a,b;
    while(1)
    {
        scanf("%lld %lld", &a, &b);
        if(a==0 && b==0){
            break;
        }
        printf("%lld\n", lcm(a, b));
    }
    return 0;
}  
