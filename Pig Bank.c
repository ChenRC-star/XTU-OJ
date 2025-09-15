#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a >= c){
            printf("0\n");
        } else {
            int left = c - a;
            int days = (left + b - 1) / b;
            printf("%d\n", days);
        }
    }
    return 0;
}
