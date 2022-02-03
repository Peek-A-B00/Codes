#include<stdio.h>

int main()
{
    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int a ;
    int ara [100];

    while (1==scanf("%d",&a) , a)
    {
        for (int i=0; i<a ;i++)
        {
            scanf("%d",ara[i]);

            printf("%d",ara[i]);
        }
    }


    return 0;
}
