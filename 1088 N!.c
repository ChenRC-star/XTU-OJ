#include <stdio.h>
#define MOD 10007
#define MAX_N 10000

int main() 
{
    int fact[MAX_N + 1];
    fact[0] = 1;
    for (int i = 1; i <= MAX_N; i++) 
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n == -1) 
        {
            break;
        }
        printf("%d\n", fact[n]);
    }
    return 0;
}