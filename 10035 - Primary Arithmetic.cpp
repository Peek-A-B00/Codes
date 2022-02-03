#include<stdio.h>
int digit_count(long long a)
{
    int r=a%10;
    a/=10;
    if(a>0)return r;
    return 0;
}
int main()
{
    int a,b;
    scanf("%lld%lld",&a,&b);

    return 0;
}
