#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
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

typedef long long LL;
const int SIZE = 100;
const double EPS = 1e-7; ///1*10^-7



int main()
{
    int a = 10;
    int b = 25;

    int c = max(a,b);
    deb(c);

    deb(max(a,b));
    deb(min(a,b));

    return 0;
}
