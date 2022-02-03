#include<stdio.h>

int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}

int main()
{
    long long  a,b,sum;
    scanf("%lld%lld",&a,&b);
    sum=add(a,b);
    sum=sum/2.0;
    printf("%lld",sum);

    return 0;
}
