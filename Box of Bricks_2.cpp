#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int go(int n,int ara[])
{
    int k , total=0 ;

    for(int i; i<n ;i++)
    {
        total +=ara[i];
    }

    printf("\n%d\n",total);
    int avg= total/n;
    k=0;

    for(int i=0;i<n;i++)
    {
        if(ara[i]>avg)
        {
            k += (ara[i]-avg) ;
            printf("%d\n",k);
        }
    }
    return k;
}

int main()
{
    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int n,k;
    int ara[50];
    while(1== scanf("%d",&n) && n)
    {
        for(int i=0;i<n;i++)
        {
            scanf ("%d",&ara[i]);
            printf("%d\n",ara[i]);
        }
        k = go(n , ara);

        printf("%d",k);
        printf("Hexa: %X %d",&k, &k);
    }
}


