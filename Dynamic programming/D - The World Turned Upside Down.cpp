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
const int Size = 1000+5;

int n;
LL ar[Size];
int dp[Size][Size];


int go(int i,int p)
{
    if(i>=n )
        return 0;
    int &r=dp[i][p];
    if(r>-1)
        return r;
    r=0;
    if(ar[i]%ar[p]==0)
        r=max(go(i+1,i)+1,go(i+1,p));
    else
        r=go(i+1,p);
    return r;
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
    sort(ar,ar+n);
    memset(dp,-1,sizeof dp);
    int r=0;
    for(int i=0;i<n;i++)
        r=max(r,go(i,i));
    cout<<r<<en;

    return 0;
}
