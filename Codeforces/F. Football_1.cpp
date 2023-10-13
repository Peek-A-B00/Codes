
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

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
/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/


typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);


    int n,a,b;
    while(cin>>n>>a>>b)
    {
        int d=0,r=0;
        if(n>a+b){
            d=n-(a+b);
            n-=d;
        }
        cout<<d<<endl;
        while(d--)
            cout<<0<<":"<<0<<endl;
        while(n<=a+b)
        {
            r=(a+b)/n;
            if(a>=r)
                cout<<r<<":"<<0<<endl,a-=r;
            else
                cout<<0<<":"<<r<<endl,b-=r;
            n--;
        }
//        printf("\n");
    }

    return 0;
}
