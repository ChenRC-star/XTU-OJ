#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int max_attempts;
    printf("请输入你想要的猜测次数:\n");
    scanf("%d", &max_attempts); 
    char *x = "我已经想好了一个在0到100之间的整数,你有%d次机会猜它,每次输入一个整数:\n";
    printf(x, max_attempts);
    srand((unsigned int)time(NULL)); // 初始化随机数种子
    int secret_number = rand() % 101;
    int guess;
    for (int attempt = 1; attempt <= max_attempts; attempt++)
    {
        scanf("%d", &guess);
        if (guess < secret_number)
        {
            printf("你猜的数字太小了\n");
        }
        else if (guess > secret_number)
        {
            printf("你猜的数字太大了\n");
        }
        else
        {
            printf("恭喜你,猜对了!\n");
            printf("你总共猜了%d次\n", attempt);
            break;
        }
        if (attempt == max_attempts)
        {
            printf("很遗憾,你没有猜对,正确的数字是%d\n", secret_number);
            printf("游戏结束\n");
        }
    }
    return 0;
}