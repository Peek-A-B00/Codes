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

int main()
{
    int ar[100];
    int n;

    memset(ar, 0, sizeof(ar));
    deb(ar[10]);

    memset(ar, -1, sizeof (ar));
    deb(ar[10]);

    memset(ar, 127, sizeof (ar));
    deb(ar[10]);

    return 0;
}
