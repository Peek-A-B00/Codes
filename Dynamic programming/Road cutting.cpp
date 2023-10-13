
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

int n,it;
int len[Size];
int val[Size];
int dp[Size];
int go(int i)
{
    if(i<0) return INT_MIN;
    if(i==0) return 0;
    int &r=dp[i];
    if(r>-1)
        return r;
    r=INT_MIN;
    for(int j=0;j<it;j++)
        r=max(r,go(i-len[j])+val[j]);

    return r;
}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);


    while(cin>>n>>it)
    {
        for(int i=0;i<it;i++)
            cin>>len[i]>>val[i];
        memset(dp,-1,sizeof dp);
        cout<<go(n)<<endl;
//        printf("\n");
    }

    return 0;
}
/*

25 7
1 1
2 5
3 8
4 9
6 17
7 17
8 20
*/
