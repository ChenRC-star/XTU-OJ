#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int a[100005];

int main()
{
    int n, m;
    while(scanf("%d %d", &n,&m)!=EOF)
    {
        if(m==0&&n==0)break;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1;i<=n;i++)
        {
            a[i] += a[i-1];
        }
        int res = a[n]-a[n-m];
        for(int i = n;i >=m;i--)
        {
            int t = a[i] - a[i-m];
            if (t >= res)res = t;
            
        }
        printf("%d\n", res);
    }
}
