
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
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;
/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end())
    {

    }
*/


typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 30000+10;

int n;
LL dp[Size];
int coin[]={1,5,10,25,50};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("Dp.txt","r",stdin);
//    freopen("Dp out.txt","w",stdout);

    int ks=1;
    while(cin>>n)
    {
        memset(dp,0,sizeof dp);
        dp[0]=1;
        for(int i=0;i<5;i++)
            for(int j=coin[i];j<=n;j++)
                dp[j]+=dp[j-coin[i]];
        if(dp[n]==1)
            cout<<"There is only "<<dp[n]<<" way to produce "<<n<<" cents change."<<endl;
        else
            cout<<"There are "<<dp[n]<<" ways to produce "<<n<<" cents change."<<endl;
    }

    return 0;
}
