
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
    if(st.find(val)!=st.end())
    {

    }
*/


typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 320;
const int N_Size = 100020;

double dp[N_Size] ;

double go(int n)
{
    if(n==1)
        return 0;
    double &r=dp[n];
    if(r>-1)
        return r;
    r=0;
    int c=0;
    for(int i=1; i<=n/i; i++)
        if(n%i==0)
        {
            r+=go(i);
            c++;
            if(i!=n/i)
            {
                r+=go(n/i);
                c++;
            }
        }
    r+=c;
    r/=(c-1);
    return r;
}
int main()
{
//    freopen("Dp.txt","r",stdin);
//    freopen("Dp out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        int n;
        scanf("%d",&n);

        memset(dp,-1,sizeof dp);
        printf("Case %d: %f\n",ks++,go(n));
    }


    return 0;
}

