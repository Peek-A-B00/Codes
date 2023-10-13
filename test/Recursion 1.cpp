#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
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
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;

int recursion(int n)
{
    if(n==0)
        return 0;

//    n--;
//    cout<<n<<endl;
    recursion(n-1);
    cout<<n<<endl;
}
int f(int n)
{
    if(n==0)
        return 1;
    cout<<n<<"*";
    return n*f(n-1);
//    cout<<n<<"*";
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int n;
    while(1==scanf("%d",&n))
    {
        recursion(n);
//        int fect=f(n);
//        printf("\n");
//        debug("=",fect);
//        printf("\n");
    }

    return 0;
}
