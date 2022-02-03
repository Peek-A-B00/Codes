


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
    int l;
    vector<int>V,dp;
    int go(int n)
    {
        if(n==l-1)
            return V[n];
        if(n==l-2)
            return V[n];
        if(n>l-1)
            return 0;
        int &r=dp[n];
        if(r>-1)
            return r;
        r=0;
        for(int i=2;i+n<l;i++)
            r=max(go(n+i)+V[n],r);
        return r;
    }
    int rob(vector<int>& nums) {
        l=nums.size();
        V=nums;
        dp=vector<int>(l,-1);
        return max(go(0),go(1));
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
