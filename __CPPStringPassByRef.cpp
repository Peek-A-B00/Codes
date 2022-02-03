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

void change(char in[])      //Pass by Ref
{
    strcpy(in, "maksud");
}
string changeCPP(string &m)   //pass by value.
{
    m = "maksud";
    return m;
}

void update(int &v)
{
    v = 10;
}

int main()
{
    string s;
    char in[100];

    change(in);
    deb(in);

    changeCPP(s);
    debug(s, s.size());

    int n = 0;
    update(n);
    deb(n);

    return 0;
}
