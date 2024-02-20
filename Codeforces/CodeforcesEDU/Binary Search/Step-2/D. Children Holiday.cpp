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
const int Size = 1001;
LL m,n;
struct nod
{
    LL t,z,y;
} ar[Size];

LL fun(LL r)
{
    LL c=0;
    for(int i=0;i<n;i++)
    {
        LL t = ar[i].t  ;
        LL x = ar[i].z;
        LL y = ar[i].y;
        LL b = t*x + y;
        LL rem = r%b;
        LL res= (r/b)*x + min(x,rem/t);
        c += res;
    }

    return c;
}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    scanf("%ld%ld",&m,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%ld%ld%ld",&ar[i].t,&ar[i].z,&ar[i].y);
    }
    LL l=0,r=(int)1e9;
    while(r>l)
    {
        LL mid = l+(r-l)/2;
        if(fun(mid)<m)
            l=mid+1;
        else{
            r= mid;
        }
    }
    cout<<r<<en;
    LL c=0;
    for(int i=0;i<n;i++)
    {
        LL t = ar[i].t  ;
        LL x = ar[i].z;
        LL y = ar[i].y;
        LL b = t*x + y;
        LL rem = r%b;
        LL res= (r/b)*x + min(x,rem/t);

        if(c+res<=m){
            cout<<res<<" ";
            c+=res;
        }
        else
        {
            if(c==m)
                cout<<0<<" ";
            else
            {
                cout<<m-c<<" ";
                c=m;
            }
        }
    }

    cout<<en;

    return 0;
}
