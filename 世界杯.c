#include <stdio.h>
#include <math.h>

int max(int a, int b)
{
    return a > b ? a : b;
}


int main()
{
    int T;
    scanf ("%d", &T);
    while (T--)
    {
        {
            int num;
            scanf ("%d", &num);
            double max_a, max_b, max_c;
            for (int i = 1; i <= num; i++)
            {
                double a, b, c;
                scanf ("%lf %lf %lf", &a, &b, &c);
                max_a = max(max_a, a);
                max_b = max(max_b, b);
                max_c = max(max_c, c);
            }
            double res = 1.0 / max_a + 1.0 / max_b + 1.0 / max_c;
            if (res < 1.0)
            {
                printf ("Yes\n");
            }
            else
            {
                printf ("No\n");
            }
        }
        
    }
    return 0;
}