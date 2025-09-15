#include <stdio.h>
#include <math.h>


long long jiecheng(long long a)
{
    long long result = 1;
    for(long long i = a; i > 0; i--)
    {
        result *= i;
    }
    return result;  
}



int main()
{
    int t;
    scanf("%d", &t);
    int m, n;
    while(t--)
    {
        scanf("%d %d", &m, &n);

        if (m = 0)
        {
            printf("0\n");
            continue;
        }
        else if (m == n){
            printf("1\n");
            continue;
        }
        else
        {
        long m_c = jiecheng(m);
        long n_c = jiecheng(n);
        long m_c1 = jiecheng(m - 3);
        long n_c1 = jiecheng(n - 3);
        long long res = (m_c * n_c1);
        long long res_1 = (n_c * m_c1);
        printf("%lld/%lld\n", res, res_1);
        continue;  
        }
    }
}