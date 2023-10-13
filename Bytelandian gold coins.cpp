
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
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;

map<LL,LL>mp;
 LL fun(LL n)
 {
     if(n==0)
        return n;
     if(mp[n])
        return mp[n];
     LL a=fun(n/2)+fun(n/3)+fun(n/4);
     if(a>n)
        mp[n]=a;
     else
        mp[n]=n;
     return mp[n];


 }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    LL n;
    while(cin>>n)
    {
        cout<<fun(n)<<endl;
//        printf("\n");
    }

    return 0;
}
