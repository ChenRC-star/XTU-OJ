#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int max_attempts;
    printf("����������Ҫ�Ĳ²����:\n");
    scanf("%d", &max_attempts); 
    char *x = "���Ѿ������һ����0��100֮�������,����%d�λ������,ÿ������һ������:\n";
    printf(x, max_attempts);
    srand((unsigned int)time(NULL)); // ��ʼ�����������
    int secret_number = rand() % 101;
    int guess;
    for (int attempt = 1; attempt <= max_attempts; attempt++)
    {
        scanf("%d", &guess);
        if (guess < secret_number)
        {
            printf("��µ�����̫С��\n");
        }
        else if (guess > secret_number)
        {
            printf("��µ�����̫����\n");
        }
        else
        {
            printf("��ϲ��,�¶���!\n");
            printf("���ܹ�����%d��\n", attempt);
            break;
        }
        if (attempt == max_attempts)
        {
            printf("���ź�,��û�в¶�,��ȷ��������%d\n", secret_number);
            printf("��Ϸ����\n");
        }
    }
    return 0;
}