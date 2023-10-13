
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

int n,d;
int dp[Size];

int go(string s,int i)
{

    if(i==n-1)
        return 0;

    if(i>=n)
        return Size;

    int &r = dp[i];
    if(r != 0)
        return r;

    r=Size;

    for(int j=1; j<=d; j++)
    {
        if(s[i+j]=='1')
            r=min(r,go(s,i+j)+1);
    }
    return r;
}

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("dp.txt","r",stdin);
//    freopen("out.txt","w",stdout);


    while(cin>>n>>d)
    {
        string s;
        cin>>s;
        memset(dp,0,sizeof dp);

        int r=go(s,0);

        if(r>100)
            r=-1;

        cout<<r<<en;
//        printf("\n");
    }

    return 0;
}
