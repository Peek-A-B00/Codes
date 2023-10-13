
//#include<bits/stdC++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iomanip>

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

#define en "\n"
#define sp(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;

int n,K, ar[Size],dp[Size][Size][Size];

int go(int i,int j,int k)
{
    if(j>=n ||i>j || k<0 )
        return MOD;
    if(k==0 && j==n-1 && i==n-1)
        return dp[i][j][k];
    if(i==j)
        return 0;

    int &r =dp[i][j][k];
    if(r>-1)
        return r;
    r = INT_MAX;
    for(int a = i;a<=j;a++)
    {
        int t = min(go(i,a,k-1)+go(a+1,j,k-1),go(i+1,a,k)+abs(ar[i]-ar[i+1]));
        r  = min(r,t);
    }
    return r;

}

void solve()
{
    cin>>n>>K;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    memset(dp,-1,sizeof dp);
    cout<<go(0,n-1,K-1)<<en;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
          solve();
//        printf("Case %d: ",ks++);
    }

//    while(cin>>)
//    {
////        printf("\n");
//    }

    return 0;
}
