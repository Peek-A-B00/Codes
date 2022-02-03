///3108
#include<stdio.h>

int fun(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int fun1(int a, int b,int c)
{
    int n=fun(fun(a,b),c);
}
int main()
{
    int x,y,z,m,n;

    scanf("%d%d%d",&x,&y,&z);
//    m=fun(x,y);
//    n=fun(m,z);
///    or
    n=fun1(x,y,z);

    printf("%d\n",n);

    return 0;
}
