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
const int Size = 101;

double dp[Size];
int ar[Size];
int n,s;

double go(int p)
{
    if(p==n-1)
        return ar[p];
    double &r=dp[p];
    if(r>-1)
        return r;
    r=0;
    int c=0;
    for(int i=1;i<=6;i++){
        if(p+i<n)
            r+=ar[p]+go(p+i);
        else{
            c++;
//            debug(c,i);
        }
    }
    deb(c);
    r/=(6-c);
    return r;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("Dp.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            scanf("%d",&ar[i]);
        memset(dp,-1,sizeof dp);
        double a=go(0);

        printf("Case %d: %lf\n",ks++,a);
    }

    return 0;
}
