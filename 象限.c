#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        long long int a,b;
        scanf("%lld %lld", &a, &b);
        if(a>0 && b>0){
            printf("1\n");
        }
        else if(a<0 && b>0){
            printf("2\n");
        }
        else if(a<0 && b<0){
            printf("3\n");
        }
        else{
            printf("4\n");
        }
    }
    return 0;
}