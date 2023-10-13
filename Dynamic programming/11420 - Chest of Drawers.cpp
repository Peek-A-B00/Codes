
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
#include <unordered_map>
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

/*
    if(st.find(val)!=st.end())
    {

    }
*/


typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 70;

int n,s;
LL dp[Size][Size][3];

LL go(int p,int S,int k)
{
    if(p>n || S<0)
        return 0;
    if(S==0 && p==n)
        return 1;
    LL &r=dp[p][S][k];
    if(r>-1)
        return r;
    if(k==0)
        r=go(p+1,S,0)+go(p+1,S,1);
    if(k==1)
        r=go(p+1,S,0)+go(p+1,S-1,1);
    return r;
}
int main()
{
//    freopen("Dp.txt","r",stdin);
//    freopen("Dp out.txt","w",stdout);


    while(2==scanf("%d%d",&n,&s) && n>0)
    {
        memset(dp,-1,sizeof dp);
//        LL r=go(0,s,1);
        LL r=go(1,s,0)+go(1,s-1,1);
        printf("%lld\n",r);
    }

    return 0;
}
