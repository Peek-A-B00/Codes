
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
const int Size = 10005;

int n,k;
int ar[Size];
int total_Count(double m)
{
    int c=0;
    for(int i=0;i<n;i++)
        c+=(double)ar[i]/m;
    return c;
}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

//
    while(2 == scanf("%d%d",&n,&k) && n)
    {
        LL sum=0;
        for(int i = 0;i<n;i++){
            scanf("%d",&ar[i]);
            sum+=ar[i];
        }
        double l = 0,r= (double)sum/k;
        while(fabs(r-l)>EPS)
        {
            double mid = l+(r-l)/2;
            int c = total_Count(mid);
            if(k>c)
                r=mid;
            else
                l=mid;
        }
        printf("%0.7lf\n",l);
//        printf("\n");
    }
    return 0;
}
