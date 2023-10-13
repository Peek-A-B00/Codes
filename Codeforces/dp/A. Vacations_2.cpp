

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
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;
int n,c=0;
int dp[Size][5],ar[Size];

//int  go(int i,int v)
//{
//    if(i==n+1)
//        return c;
//    int &r=dp[i];
//    if(r>0)
//        return r;
//    if(v==3)
//    {
//        deb(1)
//        r=min(go(i+1,1),go(i+1,2));
//    }
//    else if(v=0)
//    {
//        ++c;
//        debug(c,v);
//        r=go(i+1,ar[i]);
//    }
//    else if(v==ar[i])
//    {
//        ++c;
//        r=go(i+1,0);
//    }
//    else
//    {
//        r=go(i+1,ar[i]);
//    }
//    return r;
//}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

//    while(cin>>n)
//    {
//        for(int i=1;i<=n;i++)
//            cin>>ar[i];
//        memset(dp,0,sizeof dp);
//        int  r=go(2,ar[1]);
//        printf("%d\n",r);
//    }
    int r=INT_MAX-1;
    cout<<r;

    return 0;
}
