#include<stdio.h>

int main()

{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if (a>b>c)
    {
        printf("%d \n %d\n %d",a,b,c);
    }

    else if(b>c>a)
    {
        printf("%d \n %d \n %d ",b,c,a);
    }
    else if(c>a>b);
    {
        printf("%d\n%d\n%d",c,a,b);
    }
     if(c>b>a)
        {
        printf("%d \n %d \n %d",c,b,a);
    }
    return 0;
}
