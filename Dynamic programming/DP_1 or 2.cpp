
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
int ara[100];
int dp[100];
int n;
int go(int c)
{
    if(c>=n)
        return 0;
    return dp[c]= max(go(c+1)+ara[c],go(c+2)+ara[c]);
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int res;

    while(1==scanf("%d",&n))
    {
        for(int i=0; i<n;i++)
            scanf("%d",&ara[i]);
        int a=go(0);
        int b=go(1);
        printf("%d\n",max(a,b));
    }

    return 0;
}
