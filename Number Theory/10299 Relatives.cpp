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

int R_prime(int n)
{
    int m=n;
    if(n%2==0)
    {
        while(n%2==0)
            n/=2;
        m-=m/2;
    }
    for(int i=3;i<=n/i;i+=2)
        if(n%i==0)
        {
            while(n%i==0)
                n=n/i;
            m-=m/i;
        }
    if(n>1)
        m-=m/n;
    return m;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int n,rp;
    while(1==scanf("%d",&n)&& n)
    {
        if(n==1)
            rp=0;
        else
            rp=R_prime(n);
        printf("%d\n",rp);
    }

    return 0;
}
