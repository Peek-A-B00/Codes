
//#include<bits/stdC++.h>
#include <stdio.h>
#include<float.h>
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
typedef long double LD;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const double pi = 2*acos(0.0);
const int Size = 1e5 + 5;


LL n;
LD x[Size],v[Size];

bool fun(LD t)
{
    LD c1 = -1e9;
    LD c2 = 1e9;

    for(int i=0; i<n; i++)
    {
        LD s = v[i]*t;
        LD l = x[i] - s;
        LD r = x[i] + s;
        c1 = max(c1,l);
        c2 = min(c2,r);
    }
      if(c2-c1>EPS)
        return true;
     return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    cin>>n;
    for(int i=0; i<n; i++)
        cin>>x[i]>>v[i];
//    sort(ar,ar+n,[](nod a, nod b){return a.x<b.x;});

    LD l=0,r=1;
    while(fun(r)==false)r*=2.0;
    LD ans=-1;
    while(fabs(r-l)>EPS)
    {
        LD mid = l+(r-l)/2;
        if(fun(mid))
        {
            ans = mid;
            r=mid;
        }
        else
            l=mid;
    }
    cout<<spf(10)<<ans<<en;

    return 0;
}
