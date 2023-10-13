
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
const LL Size = 1000000000+1;

LL n;
//LL dp[Size];
int dol[]={1,5,10,20,100};

LL go(int i)
{
    if(i==0)
        return 0;
//    LL &r=dp[i];
//    if(r>-1)
//        return r;
    LL r=MOD;
    for(int j=0;j<5;j++)
        if(dol[j]<=i)
            r=min(r,go(i-dol[j])+1);
    return r;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    while(cin>>n)
    {
//        memset(dp,-1,sizeof dp);
        cout<<go(n)<<endl;
//        printf("\n");
    }

    return 0;
}
