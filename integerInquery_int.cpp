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

int go(int n,int m)
{
    return n+m;
}

string goIn(string a,string b)
{
    string res;


    return res;
}

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    int sum = 0;
    int val;
    while(1==scanf("%d",&val) && val)
    {
        sum=go(sum, val);
    }
    printf("%d\n",sum);

    return 0;
}
