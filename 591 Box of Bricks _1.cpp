 #include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int go(int N, int ara[])
{
    int total, k;
    total = 0;
    for(int i=0;i<N;i++){
        total += ara[i];
    }

    printf("\n%d\n",total);
    int avg = total/N;
    k=0;

    for(int i=0;i<N;i++)
    {
        if(avg < ara[i])
        {
            k +=(ara[i] - avg);
        }
    }

    return k;
}

int main()
{
    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    int i,N,k,total,avg,I=1;
    int ara[100];

    while(1 ==scanf("%d",&N) && N)
    {
        for(int i=0;i<N;i++)
        {
            scanf("%d",&ara[i]);
            printf("%d ",ara[i]);
        }

        k = go(N, ara);

        printf("Set #%d\n",I++);
        printf("The minimum number of moves is %d\n\n",k);

    }

    return 0;
}


