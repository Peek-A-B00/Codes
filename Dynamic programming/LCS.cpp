
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

string  t,p,lcs;
int x,y;
int dp[Size][Size];

int go(int i,int j)
{
    if(i==x|| j==y)
        return 0;
    int &r=dp[i][j];
    if(r>1)
        return r;
    if(t[i]==p[j])
        r=go(i+1,j+1)+1;
    else
        r=max(go(i+1,j),go(i,j+1));
    return r;
}
void path(int i,int j)
{
    if(i==x|| j==y)
        return ;
    if(t[i]==p[j])
    {
        lcs+=t[i];
        path(i+1,j+1);
    }
    else
        if(dp[i][j+1]==dp[i][j])
            path(i,j+1);
        else
            path(i+1,j);

}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);


    while(cin>>t>>p)
    {
        x=t.size();
        y=p.size();
        lcs.clear();
        memset(dp,-1,sizeof dp);
        cout<<go(0,0)<<endl;
        path(0,0);
        reverse(lcs.begin(),lcs.end());
        cout<<lcs<<endl;
//        printf("\n");
    }

    return 0;
}
/// ABCBDAB BDCABA
