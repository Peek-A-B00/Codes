#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//   freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int XS,YS,XE,YE,XP,YP,XB,YB;
    int tks;
    scanf("%d",&tks);
    while(tks--)
    {
        scanf("%d%d",&XS,&YS);
        scanf("%d%d",&XE,&YE);
        scanf("%d%d",&XP,&YP);
        scanf("%d%d",&XB,&YB);

        int a1=XE-XS;
        int a2=YE-YS;
        int p1=XP-XE;
        int p2=YP-YE;
        int q1=XB-XE;
        int q2=YB-YE;
        long long apCross=(1LL*a1*p2)-(1LL*a2*p1);
        long long aqCross=(1LL*a1*q2)-(1LL*a2*q1);
        if((apCross<0 && aqCross<0)||(apCross>0 && aqCross>0))
             printf("Win\n");
        else
            printf("Lose\n");
    }

    return 0;
}
