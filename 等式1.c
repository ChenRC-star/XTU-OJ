#include<stdio.h>
#include<math.h> 
int main()
{
   int N;
   scanf("%d",&N);
   while(N--)
   {
       long long n;
       scanf("%lld",&n);
       int count=0;
       for(int a=1;a*a<=n;a++)
       {
           for(int b=a;a*a+b*b<=n;b++)
           {
               double c=sqrt(n-a*a-b*b);
               if(c==(int)c&&c>=b)
               count++;
           }
       }
       printf("%d\n",count);
       
   }
   return 0;
}