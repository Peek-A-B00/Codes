
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
#define sp(d) setprecision(d)<<fixed

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
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    map<int,double>mp;
    mp[25]=10;
    mp[10]=3.1416;
    mp[5]=0;
    mp[10]=10;

    for(auto it:mp)
        cout<<"Key :"<<it.first<<" \tValue: "<<it.second<<en;

    cout<<en;
    map<string,int>m;
    m["amt"] = 111;
    m["abjf"] = 18;
    m["rja"] = 13;

    for(auto [i,j]:m)
        cout<<"Key : "<<i<<"   "<<"Value : "<<j<<en;

    if(m.find("rj") != m.end())
    {
        cout<<"Exist"<<en;
    }
    else
    {
        cout<<"Do not Exist"<<en;
    }
    cout<<m.size()<<en;
    m.clear();

    cout<<m.size()<<en;




    return 0;
}
