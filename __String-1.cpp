#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <string>
#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<(a)<<endl;

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

typedef long long LL;
const int SIZE = 100;
const double EPS = 1e-7; ///1*10^-7

int main()
{
    string s, a, b;

    char in[100];

    gets(in);

    s = in;
    debug(s, s.size());

    cin>>a;
    deb(a);
    s += a;
    debug(s, s.size());

    while(cin>>a>>b){
        deb(a<b);
        deb(a>b);
    }

    return 0;
}
