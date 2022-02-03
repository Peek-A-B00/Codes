#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef long long LL;
const int Size = 1001;
const double EPS = 1e-7; ///1*10^-7

int prim[Size];
bool flag[Size];
int L,R,X,c;

 void sieve(int N)
 {
     c=0;
     for(int i=3; i<=N; i+=2)
        flag[i]=true;

     flag[2]=true;
     prim[c++]=2;

     for(int i=3;i<=N; i+=2)
         if(flag[i])
         {
             prim[c++]=i;
             if(N/i>=i)
             {
                 int m=i*2;
                 for(int j=i*i;j<N;j+=m)
                    flag[j]=false;
             }
         }
 }

int nodx(int n)
{
    int cnt,d=1;
    for(int i=0; prim[i]<=n/prim[i];i++)
    {
        cnt=0;
        while(n%prim[i]==0)
        {
            n=n/prim[i];
            cnt++;
        }
        d*=cnt+1;
    }
    if(n!=1)
        d*=2;

    return d;
}
int main()
{
//   freopen("in.txt","r",stdin);

    int tks,r,C;
    sieve(1000);
    scanf("%d",&tks);
    while(tks--)
    {
        C=0;
        scanf("%d%d%d",&L,&R,&X);
        for(int i=L;i<=R; i++)
        {
            r=nodx(i);
            if(r==X)
                C++;
        }
        printf("%d\n",C);
    }

    return 0;
}
