#include<stdio.h>

void if_function(int x,int y)
{
    if (x>y)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return;
}
int main()
{
    int a,b;

    scanf("%d%d",&a,&b);
    if_function(a,b);

    return 0;

}
