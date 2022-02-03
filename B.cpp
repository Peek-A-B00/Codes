#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//    freopen("in.txt","r",stdin);
    int tsk,d,W,M;
    long long N;
    scanf("%d",&tsk);
    while(tsk--)
    {
        scanf("%lld%d%d",&N,&W,&M);
        N=N+1;
        long long m=N*W;
        if(m>=M)
            d=0;
        else
        {
            int s=M-m;
            if(s!=0 && s<W)
                d=1;
            else if(s%W==0)
                d=s/W;
            else if(s%W !=0)
                d=(s/W)+1;
        }
        printf("%d\n",d);
    }

    return 0;
}
