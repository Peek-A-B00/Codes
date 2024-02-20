

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

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const double pi = 2*acos(0.0);
const int Size = 101;

LL ar[Size];
int k,n;
bool fun(LL x)
{
    LL sum =0;
    for(int i=0;i<n;i++)
        sum+=min(x,ar[i]);
    if(sum>=x*k)
        return true;
    return false;

}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    while(2 == scanf("%d%d",&k,&n) && k && n)
    {
        LL t=0;
        for (int i=0;i<n;i++){
            scanf("%lld",&ar[i]);
            t+=ar[i];
        }
//        sort(ar,ar+n);
        LL l=0,r=(t/k)+1;
        LL ans = 0;
        while(r>l)
        {
            LL mid = l+(r-l)/2;
            if(fun(mid))
            {
                ans=max(ans,mid);
                l=mid+1;
            }
            else
                r=mid;
        }
        cout<<ans<<en;


//        printf("\n");
    }
    return 0;
}
