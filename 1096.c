#include <stdio.h>
int main()
{
    int a, b;
    int Case_1 = 1;
    while (scanf("%d %d", &a, &b) == 2)
    {
       printf("Case %d: %d\n", Case_1, a + b);
         Case_1++;
    }
    return 0;
}