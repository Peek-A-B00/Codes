
//#include<bits/stdC++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iomanip>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
#include<set>
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

#define en "\n"
#define spf(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/

typedef long long ll;
const ll MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;
ll w,h,n;
bool range(ll r)
{
    ll c = (r/w)*(r/h);
    return c>=n;
}
ll solve(ll r)
{
    ll l=0;
    ll ans = 0;
    while(r>=l)
    {
        ll mid = l+(r-l)/2;
        ll c=(mid/w)*(mid/h);
        if(n<=c)
        {
            ans = mid;
            r=mid-1;
        }
        else
            l=mid + 1;
    }
    return ans;

}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    while(3 == scanf("%ld%ld%ld",&w,&h,&n) && w && h && n)
    {
        ll a=1;
        while(range(a)==false) a*=2;

        ll r= solve(a);
        cout<<r<<en;
//        printf("\n");
    }
    return 0;
}
