#include <stdio.h>

int main()
{
    int x , y;
    int T;
    scanf("%d", &T);
    int m,n,k;
    while (T--)
    {
        int X[101][101] = {0};
        int Y[101][101] = {0};
        scanf("%d %d %d", &m,&n,&k);
        for(int cnt = 0;cnt < k;cnt++)
        {
            scanf("%d %d",&x,&y);
            for (int i = 1; i <= m; i++)
            {
                X[i][y]=1;
            }
            for (int j = 1; j <= n; j++)
            {
                Y[x][j]=1;
            }
        }
        int num = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (X[i][j]==1 && Y[i][j]==1)
                {
                    num ++;
                }
                
            }
            
        }
        printf("%d\n",m*n-num);
        
    }
    return 0;
}