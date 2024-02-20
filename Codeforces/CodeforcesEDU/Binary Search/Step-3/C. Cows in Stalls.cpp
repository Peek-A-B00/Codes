
//#include<bits/stdC++.h>
#include <stdio.h>
#include <float.h>
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

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const double pi = 2*acos(0.0);
const int Size = 1e4 + 10;

LL n,k;
LL ar[Size];

bool fun(LL x)
{
    LL c=1;
    LL pc=ar[0];
    for(int i=1;i<n;i++)
    {
        LL d=ar[i]-pc;
        if(d==x || (d>x && abs(ar[i-1]-pc)<x))
        {
//            deb(d);
            c++;
            pc=ar[i];
        }
    }
    return c>=k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    cin>>n>>k;
    LL r=0;
    for(int  i=0;i<n;i++){
        cin>>ar[i];
        r+=ar[i];
    }
    LL l=0;
    LL ans =-1;
    while(r>l)
    {
        LL mid=l+(r-l)/2;
        if(fun(mid))
        {
            ans=max(mid,ans);
//            deb(mid);
            l=mid+1;
        }
        else
            r=mid;
    }
    cout<<ans<<en;

    return 0;
}
