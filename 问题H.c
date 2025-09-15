#include<stdio.h>


long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int a, b;
        scanf("%d %d", &a, &b);
        long long n = 0, d = 1;
        for (int i = a; i <= b; i++) {
            long long g1 = gcd(d, i);
            long long new_den = d / g1 * i;
            long long new_num = n * (i / g1) + (d / g1);
            long long g2 = gcd(new_num, new_den);
            n = new_num / g2;
            d = new_den / g2;
        }
        printf("%lld/%lld\n", n, d);
    }
    return 0;
}