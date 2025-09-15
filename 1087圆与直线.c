#include <stdio.h>

int main() 
{
    int n;
    int num[10000];
    int count = 0;
    
    while (1) 
    {
        scanf("%d", &n);
        if (n == -1) 
        {
            break;
        }
        num[count++] = n;
    }
    
    for (int i = 0; i < count; i++) 
    {
        int y = num[i] * (num[i] + 1) / 2 + 1;
        printf("%d\n", y);
    }
    
    return 0;
}