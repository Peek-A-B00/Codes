///3108

#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    for(int i=1; i<=m ;i++)
    {
        int s=n*i;

        printf("%d x %d = %d\n",n,i,s);
    }


    return 0;
}

