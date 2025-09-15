#include <stdio.h>
int main()
{
    int a , b;
    scanf("%d %d", &a, &b);
    int result = (a % b + b) % b;
    printf("%d\n", result);
}