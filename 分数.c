#include <stdio.h>
int gcd(int up, int down)
{
    if (down == 0)
        return up;
    return gcd(down, up % down);
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        double up = a*a - a*b*b+b*c*c;
        double down = a*b*c;
        if (up == 0)
        {
            printf("0\n");
        }
        else if (up / down == (int)(up / down))
        {
            printf("%d\n", (int)up / (int)down);
        }
        else
        {
            printf("%d/%d\n", (int)up, (int)down);
        }
        

    }
}