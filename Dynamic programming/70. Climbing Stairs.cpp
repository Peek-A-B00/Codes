#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
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
const int Size = 100;

class Solution {
public:
    int dp[100];
    int *N;
    int go(int a)
    {
        if(a==*N)
            return 1;
        if(a>*N)
            return 0;
        if(dp[a] !=-1)
            return dp[a];
        return dp[a]=go(a+1)+go(a+2);
    }
    int climbStairs(int n) {
        memset(dp , -1 , sizeof(dp));
        N=&n;
        return go(0);
    }
};

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

//    int tks,ks=1;
//    scanf("%d",&tks);
//    while(tks--)
//    {
////        printf("Case %d: ",ks++);
//    }

//    while(1==scanf("",&))
//    {
//        printf("\n");
//    }

    return 0;
}
