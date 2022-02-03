#include<stdio.h>

int main ()
{
   int a,sum,n;

   scanf("%d",&n);
   sum=0;

   while(n!=0){
    a=n%10;
    sum=sum+a;
    n=n/10;
   }
   printf("%d",sum);

    return 0;
}
