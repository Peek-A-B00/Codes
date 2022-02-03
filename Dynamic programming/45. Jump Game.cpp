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
    vector<int > V;
    int l,f;
    int Dp[100001];
    int go(int n)
    {
        if(n==l-1 )
            return 0;
        if(n>l-1 )
            return 0;
        int &r=Dp[n];
        if(r>-1)
            return r;
        r=0;
        for(int i=V[n]; i>0 ;i--){
            r=max(go(i+n),r);
            if(r==0)
                break;
        }
        return r;

    }
    bool canJump(vector<int>& nums) {
        memset(Dp, -1, sizeof(Dp));
        l=nums.size();
        for(int i=0; i<l;i++)
            V.push_back(nums[i]);

        int res=go(0);
        if(res==0)
            return true;
        else
            return false;
    }
};
