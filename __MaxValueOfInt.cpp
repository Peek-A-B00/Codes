#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
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
    unsigned int a;

    scanf("%u", &a);

    deb(a);

    a = -1u;    ///Maximum value of unsigned int;
    int b = -1u/2;  ///Maximum value of int.
    deb(a);
    deb(b);



    return 0;
}
