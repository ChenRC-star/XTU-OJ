#include <stdio.h>
#include<math.h>    

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int n;
    scanf("%d", &n);
    while(n--){
        int a, b;
        scanf("%d %d", &a, &b);
        long long on = pow(b, 3);
        long long down = b * b + 4 * a * a;
        long long g = gcd(on, down);
        if(down / g  == 1){
            printf("%lld\n", on / g);
        }else{
            printf("%lld/%lld\n", on / g, down / g);
        }
    }
    return 0;
} 