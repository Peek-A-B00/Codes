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
int l,L;
vector<int>V;
int dp1[101];
int go(int a,int n)
   {
        if(a==n-1)
            return V[a];
        if(n==l-2)
            return V[n];
        if(a>n-1)
            return 0;
        int &r=dp1[a];
        if(r>-1)
            return r;
        return r=max(go(2+a,n),go(3+a,n))+V[a];
    }
int rob(vector<int>& nums) {
    l=nums.size();
    V=nums;
    memset(dp1,-1,sizeof(dp1));
    if(l==1)
        return V[0];
    if(l==2)
        return max(V[0],V[1]);
    return max(go(0,l-1),go(1,l));
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
