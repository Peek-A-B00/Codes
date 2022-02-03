

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
int n,m;

class Solution {
public:
    int m,n;
    vector<vector<int>>Dp,ar;
    int go(int a, int b)
    {
        if(a==0 && b==0)
            return ar[a][b];
        if(a<0|| b<0)
            return INT_MAX;
        int &r=Dp[a][b];
        if(r>-1)
            return r;
        return r=min(go(a-1,b),go(a,b-1))+ar[a][b];

    }
    int minPathSum(vector<vector<int>>&grid) {
        m=grid.size();
        n=grid[0].size();
        ar=grid;
        Dp=vector<vector<int>>(m,vector<int>(n,-1));
        return go(m-1,n-1);

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
