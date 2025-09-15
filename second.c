#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n;
        scanf("%d", &n);
        int hours = n / 3600;
        int minutes = (n % 3600) / 60;
        int seconds = n % 60;
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    }
    return 0;
}
