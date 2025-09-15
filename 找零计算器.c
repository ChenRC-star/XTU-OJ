#include  <stdio.h>
int main()
{
    int a,b,c;
    printf("输入购买金额:\n");
    scanf("%d", &a);
    printf("输入票面金额:\n");
    scanf("%d", &b);
    c = b - a;
    if (c < 0)
    {
        printf("金额不足\n");
        return 0;
    }
    else
    {
        printf("找零金额为:%d\n", c);
    }
    return 0;
}