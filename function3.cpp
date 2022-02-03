#include<stdio.h>
int test_function(int x)
{
    int y=x;
    x=2*y;
    return (x*y);
}
int main()
{
    int a=10,b=20,c=30;
    c=test_function(a);
    printf("%d %d %d",a,b,c);

    return 0;
}
