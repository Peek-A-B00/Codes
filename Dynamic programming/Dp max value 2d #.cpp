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

int n,m;
int ara[100][100];
int dp[100][100];

int go(int a, int b)
{
    if(a==n-1 && b==m-1 && ara[a][b]==0)
        return 1;
    if(a>n-1 || b>m-1)
        return 0;
     if(ara[a][b]==1)
        return 0;

    int &r=dp[a][b];
    if(r>-1)
        return r;

    r=0;
    if(ara[a][b]==0)
        r= go(a,b+1)+go(a+1,b);
    return r;
}
int main()
{
    freopen("Dp.txt", "r", stdin);
    while(2==scanf("%d%d",&n,&m))
    {
        for(int i=0; i<n;i++)
            for(int j=0; j<m; j++)
                scanf("%d",&ara[i]);

        memset(dp,-1,sizeof dp);
        int res=go(0,0);

        printf("%d",res);
        printf("\n");
    }

    return 0;
}

