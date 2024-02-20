
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
#define spf(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const double pi = 2*acos(0.0);
const int Size = 51;

string  t,p1,p2;
int l,m,n;
int dp[Size][Size][Size];

int go(int x,int y,int z)
{
    if(x>=l ||  y>=m|| z>=n)
        return 0;
    int &r =dp[x][y][z];
    if(r>-1)
        return r;
    if(t[x]==p1[y] && p1[y]==p2[z])
        r = go(x+1,y+1,z+1)+1;
    else
    {
        r=max({go(x+1,y,z),go(x,y+1,z),go(x,y,z+1)});
    }
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
          cin>>t>>p1>>p2;
          memset(dp,-1,sizeof dp);
          l=t.size();m=p1.size();n=p2.size();
          cout<<"Case "<<ks++<<": "<<go(0,0,0)<<en;
//        printf("Case %d: ",ks++);
    }

    return 0;
}
