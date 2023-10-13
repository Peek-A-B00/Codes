

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
#include<set>
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
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 10000+10;
const LL oo=-1e18;

LL a[Size];
LL b[11];
LL dp[Size][11][11][11];
int n,m,k;

LL go(int i,int j,int x,int y)
{
    if(i==n+1 && j==m)
        return 0;
    LL &r= dp[i][j][x][y];
    if(r>-1)
        return r;
    r=oo;
    if(i<=n)
    {
        r=max(r,go(i+1,j,x,y)+a[i]*(i+x-y));
        if(y<k)
            r=max(r,go(i+1,j,x,y+1));
    }
    if(j<m)
    {
        r=max(r,go(i,j+1,x+1,y)+b[j]*(i+x-y));
        r= max(r,go(i,j+1,x,y));
    }
    return r;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
        cin>>n>>m>>k;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        memset(dp,-1,sizeof dp);
        sort(b,b+m);
        cout<<go(1,0,0,0)<<endl;

//        printf("Case %d: ",ks++);
    }


    return 0;
}
