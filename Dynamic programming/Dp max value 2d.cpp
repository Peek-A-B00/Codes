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
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 100;

int n,m,r;
int ara[10][10];
int dp[10][10];

int go(int a, int b)
{
    int &r=dp[a][b];
    int n=ara[a][b];
    if(a>n || b>m)
        return INT_MAX;

    if(r!=-1)
        return r;

    return r= min(go(a+1,b),go(a,b+1))+n;
}
int main()
{
    freopen("Dp.txt", "r", stdin);
    while(2==scanf("%d%d",&n,&m))
    {
        for(int i=1; i<=n;i++)
            for(int j=1;j<=m;j++)
                scanf("%d",&ara[i][j]);

        memset(dp,-1,sizeof dp);
        int res=go(1,1);

        printf("%d",res);
        printf("\n");
    }

    return 0;
}
