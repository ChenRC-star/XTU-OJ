#include <stdio.h>
int main()
{
    int a, b;
    int case_1 = 1;
    while(1)
    {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0)
        {
            break;
        }
        printf("Case %d: %d\n", case_1, a + b);
        case_1++;
    }
    return 0;
} 