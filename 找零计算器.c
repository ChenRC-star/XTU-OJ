#include  <stdio.h>
int main()
{
    int a,b,c;
    printf("���빺����:\n");
    scanf("%d", &a);
    printf("����Ʊ����:\n");
    scanf("%d", &b);
    c = b - a;
    if (c < 0)
    {
        printf("����\n");
        return 0;
    }
    else
    {
        printf("������Ϊ:%d\n", c);
    }
    return 0;
}