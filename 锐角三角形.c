#include <stdio.h>
#include <stdbool.h>

bool tri(int a,int b,int c)
{
    return ((a*a+b*b>c*c)&&(a*a+c*c>b*b)&&(b*b+c*c>a*a));
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n;
        scanf("%d", &n);
        int bian[n];
        int cot = 0;
        for(int i = 0;i<n;i++)
        {
            scanf("%d",&bian[i]);
        }
        for(int i =0;i<n-2;i++)
        {
            for(int j = i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if (tri(bian[i],bian[j],bian[k]))
                    {
                        cot++;
                    }
                    
                }
            }
        }
        printf("%d\n",cot);
    }
    return 0;
}