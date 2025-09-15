#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char phone[12];
        scanf("%s", &phone);
        for(int j = 3;j <= 6; j++){
            phone[j] = '*';
        }
        printf("%s\n", phone);
    }
    return 0;
}