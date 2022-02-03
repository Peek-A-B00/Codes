
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;
/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end())
    {

    }
*/

typedef long long LL;
const int Size = 100;
const double EPS = 1e-7; ///1*10^-7

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    map<string,int> mp;

    mp["maria"]=2002;
    mp["age"]=19;
    mp["SSC"]=2018;
    mp["month"]=4;
    mp["day"]=4;
    mp["day"]--;

    for(auto it=mp.begin(); it!=mp.end();it++)
            debug(it->first,it->second);
//                debug(it.first, it.second);
    map<string,int>a;
    vector<string>st={"a","b","d","the","a","maria","hamza"};
    for(auto it:st)
        a[it]++;

    string key="f";
    auto x=a.find(key);
    if(x!=a.end())
        debug("found");
    for(auto it:a)
        debug(it.first, it.second);


    return 0;
}
