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
const int SIZE = 100;
const double EPS = 1e-7; ///1*10^-7


void toString()
{
    stringstream ss;

    int val = 1001;
    double x = 3.93;

    ss<<val<<" "<<x<< "  name";

    string s = ss.str();

    cout<<s<<endl;
}

void fromString()
{
    int a;
    double x;
    string name;

    string s = "101   99.33      maria";
    stringstream ss;
    ss<<s;

    ss>>a>>x>>name;
    debug(a,x,name);
    deb(ss);
}

int main()
{
    toString();
    fromString();

    return 0;
}
