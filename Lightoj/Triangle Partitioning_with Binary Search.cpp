
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
const int Size = 101;

double ab,ac,bc,rio;

double make_ratio(double ad)
{
    double ae,de,s1,s2,abc,ade,bdec;

     ae=(ad*ac)/ab;
     de =(ad*bc)/ab;

     s1 = (ab+bc+ac)/2;
     s2 = (ad+ae+de)/2;

    /// Areas:
     abc =sqrt(s1*(s1-ab)*(s1-bc)*(s1-ac));
     ade =sqrt(s2*(s2-ad)*(s2-ae)*(s2-de));
     bdec = abc-ade;

    return ade/bdec;
}

void solve(int ks)
{
    cin>>ab>>ac>>bc>>rio;

    double l=0,h=ab;
    double ad =l+(h-l)/2;
    double new_ratio=make_ratio(ad);
    while(fabs(new_ratio-rio)>1e-7)
    {
        ad =l+(h-l)/2;
        new_ratio=make_ratio(ad);
        if(new_ratio<rio)
            l=ad;
        else
            h=ad;



    }

     cout<<"Case "<<ks<<": "<<spf(10)<<ad<<en;


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
          solve(ks++);
//        printf("Case %d: ",ks++);
    }
    return 0;
}
