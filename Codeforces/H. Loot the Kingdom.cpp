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
const int Size = 2*1e5+10;

int n;
LL ar[Size];
LL dp[Size][5];

LL go(int i,int j)
{
    if(i>=n) return 0;
    LL &r=dp[i][j];
    if(r>-1)
        return r;
    if(j<2)
        r=max(go(i+1,j+1)+ar[i],go(i+1,0));
    else
        r=go(i+1,0);
    return r;
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
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        memset(dp,-1,sizeof dp);
        cout<<go(0,0)<<en;
//        printf("Case %d: ",ks++);
    }


    return 0;
}
