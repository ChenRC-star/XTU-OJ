#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d", &x1, &y1, &r1);
        scanf("%d %d %d", &x2, &y2, &r2);

        int dx = x1 - x2;
        int dy = y1 - y2;
        int d_sq = dx * dx + dy * dy;
        int r_sum_sq = (r1 + r2) * (r1 + r2);
        int r_diff_sq = (r1 - r2) * (r1 - r2);

        if(d_sq > r_sum_sq)
        {
            printf("5\n");
        }
        if(d_sq == r_sum_sq) 
        {
            printf("4\n");
        }
        if(d_sq < r_sum_sq && d_sq > r_diff_sq)
        {
            printf("3\n");
        }
        if(d_sq == r_diff_sq)
        {
            printf("2\n");
        }
        if(d_sq < r_diff_sq)
        {
            printf("1\n");
        }
    }
    return 0;
}