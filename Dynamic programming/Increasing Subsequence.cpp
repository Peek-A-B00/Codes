
//#include<bits/stdC++.h>
#include <stdio.h>
#include <float.h>
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
#include<bitset>
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
#define spf(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const double pi = 2*acos(0.0);
const int Size = 2*1e5 +5;

LL n;
LL ar[Size];

LL go(int i,int p,vector<vector<int>>&dp)
{
    if(i==n)
        return 0;

    LL r=dp[i][p+1];
    if(r!=-1)
        return r;
    r=0;
    LL a =go(i+1,p,dp);
    if(ar[i]>ar[p] || p==-1)
        r=go(i+1,i,dp)+1;
    r=max(r,a);
    return dp[i][p+1]=r;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    cout<<go(0,-1,dp)<<en;
    return 0;
}
