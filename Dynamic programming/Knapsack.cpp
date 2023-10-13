
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

int it,c;
int dp[Size][Size];
int w[Size];
int val[Size];
int go(int i,int j)
{
    if(j<0)
        return INT_MIN;
    if(i<0 || j==0) return 0;
    int &r=dp[i][j];
    if(r>-1)
        return r;
    return r=max(go(i-1,j),val[i]+go(i-1,j-w[i]));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(cin>>it>>c)
    {
        for(int i=0;i<it;i++)
            cin>>w[i]>>val[i];
        memset(dp,-1,sizeof dp);
        cout<<go(it-1,c)<<endl;
//        printf("\n");
    }

    return 0;
}
/*
4 5
2 12
1 10
3 20
2 15
*/
