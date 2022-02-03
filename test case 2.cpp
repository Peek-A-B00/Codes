
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

typedef long long LL;
const int SZ = 100;
const double EPS = 1e-7; ///1*10^-7
string go(string s)
{
    string r="0";
    int i;
    for( i=0; i<s.size(); i++)
    {
        r+=s[i];
    }
    reverse (r.begin(),r.end());
    debug(r);
    return r;
}

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);


    char str[SZ]="0";
    char st [SZ];
    while(1==scanf("%s",st))
    {
        string ar=st;
//        printf("%s",ar.c_str());
        debug(ar);
        string m =go(ar);
        printf(" string %s\n",m.c_str());
    }

    return 0;
}
