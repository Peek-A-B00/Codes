
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


typedef long long LL;
const int Size = 100;
const double EPS = 1e-7; ///1*10^-7

int main()
{
    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    int n,v;
    scanf("%d",&n);
    int ara[n+1];
    int m=n/2;
    int la[m+1];
    memset(ara,0,n+1);
    for(int i=0; i<n;i++){
        scanf("%d",&v);
        ara[v]++;
    }
    while(n--)
    {

    }

    return 0;
}
