#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }
    int result;
    long long int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    result = fact % 10007;
    printf("%d\n", result);
}   