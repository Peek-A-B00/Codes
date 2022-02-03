#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;
/** ---- Paknami Ends ----*/

typedef long long LL;
const int Size = 100;
const double EPS = 1e-7; ///1*10^-7
char str[20][20];
vector<int>v[10];
int ara[20];
int R;
void dis(int t)
{
    int k,o;
    for(int i=0; i<R; i++)
    {
        int f=0;
        int dis=0;
        int l=v[i].size();
//        debug(l);
        for(int j=1; j<=l; j+=3)
        {
            k=v[i][j];
            o=v[i][j+1];
//            debug(o,j);

            if(t>=k)
            {
                if(j>3)
                    k=k-v[i][j-3];

                dis+=(k*o);
//                debug(dis);
            }

            else
            {
                k=v[i][j-1];
                k=t-k+1;
//                debug(k);
                dis+=(k*o);
//                debug(dis);
                f=1;
            }
        }
        if(t>k && f==0)
        {
            k=t-k;
            dis +=(k*o);
//            debug(dis);
        }

        ara[i]=dis;
//        debug(ara[i]);
    }

}
int main()
{
    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);
    int s,a,b,x;
    scanf("%d",&R);
    for(int i=0;i<R; i++)
    {
        scanf("%s",str[i]);
        scanf("%d",&s);
        for(int j=0; j< s;j++)
        {
            scanf("%d%d%d",&a,&b,&x);
            v[i].push_back(a);
            v[i].push_back(b);
            v[i].push_back(x);
        }
    }

    int tks,ks=1;
    scanf("%d",&tks);
    int m;
    while(tks--)
    {
        scanf("%d",&m);
        dis(m);

        printf("position chart at minute %d :\n",m);
        for(int i=0; i<R; i++)
        {
            int num=ara[i];
            int c=0;
            for(int j=0; j<R; j++)
            {
                if(num<ara[j])
                {
                    num=ara[j];
                    c=j;
                }
            }
            ara[c]=0;
            printf("%d. %s %d\n",i+1,str[c],ara[c+1]);
        }
    }


    return 0;
}
