/// 3108

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n % 3==0)
    {
        printf("%d in Red.",n);
    }
    else if(n % 3==1)
    {
        printf("%d is Green.",n);
    }
    else if(n % 3==2)
    {
        printf("%d is Blue.",n);
    }


    return 0;
}
