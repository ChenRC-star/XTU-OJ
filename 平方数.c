#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        double x;
        scanf("%lf",&x);
        double res = sqrt(x);
        if (res == (int)res)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }
return 0;
}