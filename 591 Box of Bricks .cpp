#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int i,n,k,total,avg,I=1;

    while( 1==scanf("%d",&n) && n )
    {
        int ara[n];
        total=0;

        for(i=0;i < n ;i++)
        {
            scanf("%d",&ara[i]);
            total +=ara[i];
        }
        avg=total/n ;
        k=0;

        for(i=0;i<n;i++)
        {
            if (avg < ara[i] )
            {
                k += ara[i] - avg;
            }
        }

        printf("Set #%d\n",I++);

        printf("The minimum number of moves is %d.\n",k);

        printf("\n");
    }
    return 0;
}


