
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
    template<typename T> debugger& operator, (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;
/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/


typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 4010;
int  dp[Size][Size];
int n,ar[3];

int go(int l,int c)
{
    if(l>n) return 0;
    if(l==n)  return  c;
    int &r=dp[l][c];
    if(r>-1)
        return r;
    r=0;
    ++c;
    for(int i=0;i<3;i++)
    {
        r=max(go(ar[i]+l,c),r);
    }
    return r;
}

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);


    while(1==scanf("%d",&n))
    {
        for(int i=0;i<3;i++)
            scanf("%d",&ar[i]);
        memset(dp,-1,sizeof dp);
        int a=go(0,0);
        printf("%d\n",a);
    }

    return 0;
}
