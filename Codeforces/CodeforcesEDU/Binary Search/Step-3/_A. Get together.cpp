
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

struct nod
{
    LL x,v;
};
int n;
nod ar[Size];

bool fun(double t)
{
     double c1 = double(ar[0].x - double(ar[0].v)*t);
     double c2 = double(ar[0].x + double(ar[0].v)*t);

     for(int i=1;i<n;i++)
     {
         double l = double(ar[i].x - double(ar[i].v)*t);
         double r = double(ar[i].x + double(ar[i].v)*t);
         c1 = max(c1,l);
         c2 = min(c2,r);
     }
     if(c1<=c2)
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
    for(int i=0;i<n;i++)
        cin>>ar[i].x>>ar[i].v;
    sort(ar,ar+n,[](nod a, nod b){return a.x<b.x;});

    double l=0.0,r=1.0;
    while(fun(r)==false)r*=2.0;

    while(fabs(r-l)>EPS)
    {
        double m = (l+r)/2;
        if(fun(m)){
            r=m;
        }
        else
            l=m;
    }
    cout<<setprecision(10)<<fixed<<float(l)<<en;


    return 0;
}
