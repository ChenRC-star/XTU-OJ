#include <stdio.h>
 long long gcd(long long x, long long y)
 {
    if (y == 0) return x;
    return gcd(y, x % y);
 }

 int main(){
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        
        long long num = a * a * c - a *b *b + b *c *c;
        long long den = a *b *c;

        long long gg = gcd(num, den);
        num /= gg;
        den /= gg;
        
        if(den < 0)
        {
            den = -den;
            num = - num;
        }

        if (den == 1) 
        {
            printf("%lld\n", num);
        } else 
        {
            printf("%lld/%lld\n", num, den);
        }
    }
    return 0;
 }