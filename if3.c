#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &d);
    a = d / 100;
    b = (d % 100) / 10;
    c = d % 10;
    if (a == b && a !=c){
        printf("Yes\n");
    }
    else if (a == c && a != b){
        printf("Yes\n");
    }
    else if (b == c && b != a){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}