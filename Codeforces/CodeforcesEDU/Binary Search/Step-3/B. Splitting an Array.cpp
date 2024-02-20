
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
const int Size = 1e5 + 5;

LL n,k;
LL ar[Size];

bool fun(LL x)
{
    LL p=0,s=0;
    bool f = true;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>x){
            f=false;}
        if(ar[i]+s<=x)
        {
            s+=ar[i];
        }
        else
        {
            p++;
            s=ar[i];
        }

    }
    p++;
//    deb(p);
    return (p<=k&&f);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);

//    freopen("out.txt","w",stdout);

    cin>>n>>k;
    LL sum =0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum+=ar[i];
    }

    LL l=0,r=sum+1;
    LL ans = sum;
    while(r>l)
    {
        LL mid = l+(r-l)/2;
        if(fun(mid)){
            r=mid;
            ans=min(ans,mid);
        }
        else
            l=mid+1;
    }
    cout<<ans<<en;
    return 0;
}
