
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
const int Size = 2*1e3 + 2;

LL n,k;
LL ar[Size];
LL fun(LL dif[],LL n,LL x)
{
    LL l=0,r=n;
    LL ans=0;
    while(r>l)
    {
        LL mid = l+(r-l)/2;
        if (dif[mid]<=x){
            ans =mid;
            l=mid+1;
        }
        else
            r=mid;
    }
    LL a = llabs(x-dif[ans]);
    deb(a);
    if(l== n)
        return a;
    LL b = llabs(x-dif[ans+1]);
    deb(b);
    return (a<b)?a:b ;
}
void solve(int ks)
{

    cin>>n>>k;
    LL dif[n];
    LL m = 1e18;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        m = min(m,ar[i]);
        if(i>0){
            dif[i-1]=llabs(ar[i-1]-ar[i]);
            deb(dif[i-1])
        }
    }
    LL r = n-1;
    deb(r);
    sort(dif,dif+r);
    m = min(dif[0],m);
    deb(m);
    if(k==1)
        cout<<m<<en;
    else if(k>=3)
        cout<<0<<en;
    else{
        LL x =fun(dif,r,ar[n]);
        cout <<min(x,m)<<en;

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
          solve(ks++);
//        printf("Case %d: ",ks++);
    }
//

    return 0;
}
