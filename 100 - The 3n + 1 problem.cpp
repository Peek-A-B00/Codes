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
#include <map>
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

int cycle_length(LL a,LL r)
{
    ++r;
    if(a==1)
        return r;
    if(a%2==0)
        return cycle_length(a/2,r);
    else
        return cycle_length(3*a+1,r);
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int m,n,x,C,N,M;
    while(2==scanf("%d%d",&n,&m))
    {
        N=n;
        M=m;
        if(n>m)
        {
            int temp=n;
            n=m;
            m=temp;
        }
        C=0;
        for(int i=n; i<=m;i++)
        {
            x=0;
            int c=cycle_length(i,x);
            if(c>C)
                C=c;
        }
        printf("%d %d %d\n",N,M,C);
    }

    return 0;
}
