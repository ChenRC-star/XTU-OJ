#include <stdio.h>
int a[1000];
int main()
{
    int n;
    while (scanf("%d", &n) == 1 && n != 0)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<a[i])
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}