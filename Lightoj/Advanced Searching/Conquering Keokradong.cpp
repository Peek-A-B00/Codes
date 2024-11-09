

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
#include<bitset>
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
LL ar[Size];

bool fun(LL x)
{
    LL c=0;
    bool f=0;
    LL t=x;
    for(int i=0;i<=n;i++)
    {
        if(x<ar[i])
        {
            f=1;break;
        }
        else{
            if(t>=ar[i])
            {
                t-=ar[i];
            }
            else
            {
                t=x-ar[i];
                c++;
            }
        }
    }
    if(f==0 && c<=m)
        return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
        cin>>n>>m;
        for(int i=0;i<=n;i++)
            cin>>ar[i];
        LL l=0,r=1e9 ;
        while(r>l)
        {
            LL mid=l+(r-l)/2;
            if(fun(mid))
            {
                r=mid;
            }
            else
                l=mid+1;
        }
        cout<<"Case "<<ks++<<": "<<r<<en;
        for(int i=0,j=1;j<=m+1;j++){
            LL t=0;
            while( i+(m-j)+1<=n && r-t>=ar[i])
            {
                t+=ar[i];
                i++;
            }
            cout<<t<<en;
        }
//        printf("Case %d: ",ks++);
    }
//
//    while(1 == scanf("%d",&n) && n)
//    {
////        printf("\n");
//    }
    return 0;
}
