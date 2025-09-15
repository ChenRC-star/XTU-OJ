#include <stdio.h>
int main()
{
    int n;
    double a, b, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf+%lf=%lf", &a, &b, &c);
        if (a + b == c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }   
    }
    
}