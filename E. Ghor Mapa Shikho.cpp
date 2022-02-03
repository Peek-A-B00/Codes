#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char str[10000];
int main()
{
//    freopen("in.txt","r",stdin);
    int tks;
    long long TF=0,TI=0;
    scanf("%d",&tks);
    while(tks--)
    {
        scanf("%s",str);
        int l=strlen(str);
        long long I=0,F=0,f=0;
        for(long long i=0;i<l;i++)
        {
            if(str[i]=='.'){
                 f=1;
                 continue;
            }

            if(f==0)
                F=F*10+str[i]-'0';
            if(f==1)
                I=I*10+str[i]-'0';
        }
        TF +=F;
        TI +=I;
        if(TI>11)
        {
            int d=TI/12;
            TF +=d;
            TI=TI%12;
        }
         printf("%lld Feet, %lld Inches\n",TF,TI);
    }


    return 0;
}
