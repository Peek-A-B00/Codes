
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
const int Size = 101;

int n,w;
int W[Size];
int price[Size];
int dp[Size][Size];

int go(int i,int j)
{
     if(j<0)
        return INT_MIN;
    if(i<0 || j==0)
        return 0;
    int &r=dp[i][j];
    if(r>-1)
        return r;
    r=max(go(i-1,j),go(i-1,j-W[i])+price[i]);
    return r;
}
void path(int i,int j)
{
    if(i<0 || j<=0) return;
    if(dp[i-1][j]<=dp[i-1][j-W[i]]+price[i])
    {
        cout<<i<<" -> "<<W[i]<<" -> "<<price[i]<<endl;
        path(i-1,j-W[i]);
    }
    else
        path(i-1,j);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    while(cin>>n>>w)
    {
        for(int i=0;i<n;i++)
            cin>>W[i]>>price[i];

        memset(dp,-1,sizeof dp);
        cout<<go(n-1,w)<<endl;
        path(n-1,w);
//        printf("\n");
    }

    return 0;
}
