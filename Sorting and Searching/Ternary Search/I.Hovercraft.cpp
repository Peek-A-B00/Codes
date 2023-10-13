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
const double EPS = 1e-5; ///1*10^-7
const int Size = 101;
const double pi = 2*acos(0.0);
int L,W;
double dis(double r)
{

}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    while(2 == scanf("%d%d",&L,&W) && L && W)
    {
        double l =0,r=pi/2;
        while(fabs(dis(r)-dis(l))>EPS)
        {
            double m1 =l+(r-l)/3;
            double m2 = r -(r-l)/3;
            if(dis(m1)<dis(m2))
                l=m1;
            else
                r=m2;

        }
        r = fun(l);
        r = W-r;
        r+=2*l;
        cout<<spf(4)<<r<<en;
//        printf("\n");
    }
    return 0;
}
