#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c,d;
        scanf("%d %d", &a, &b);
        scanf("%d %d", &c, &d);
        if (b >= c && a <= d)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}