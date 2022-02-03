/// 3108
#include<stdio.h>

int main()
{
    int m,n;
    int sum = 0;

    scanf("%d%d",&n,&m);

    for (int i=1; i<=n ; i++)
    {
        if(i%m ==0)
        {
            sum +=i;
        }
    }
    printf("%d",sum);


    return 0;
}
