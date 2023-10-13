
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
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;
int n;
int dp[Size][5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    while(cin>>n)
    {
        std::fill_n(*dp,sizeof dp/sizeof **dp,101);
        dp[0][0]=0;
        for(int i=1;i<=n;i++){
            int v;
            cin>>v;
            dp[i][0]=min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]))+1;

            if(v==1 || v==3)
                dp[i][1]=min(dp[i-1][0],dp[i-1][2]);

            if(v==2 || v==3)
                dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
        }
        cout<<min(dp[n][0],min(dp[n][1],dp[n][2]))<<endl;
    }

    return 0;
}
