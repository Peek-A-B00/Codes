#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);
    {
        if(n==0)
        printf("You are not allowed to enter university\n");

        if(n==1)
        printf("You are only allowed to attend examinations\n");

        if(n==2)
        printf("You are allowed to attend all activities offline\n");

    }
    return 0;
}
