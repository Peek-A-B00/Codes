


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
    vector<int>V;
    int l;
    int Dp[10001];
    int go(int n)
    {
        int &r=Dp[n];
        if(n>=l-1)
            return 0;
        if(r!=-1)
            return r;
        int J=INT_MAX;
        for(int i=n;i<n+V[n]; i++)
            J=min(J,go(i+1)+1);

        return r=J;
    }
    int jump(vector<int>& nums) {

        memset(Dp,-1,sizeof(Dp));
        l=nums.size();

        for(int i=0; i<l;i++)
            V.push_back(nums[i]);

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
