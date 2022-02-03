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

void prime(int n)
{
    int s=n;
    printf("%d =",n);
    if(n < 0)
    {
        n=(-1)*n;
        s=n;
        printf(" -1 x");
    }
    int i=2;
    int m=1,d;
    while (n%i==0)
    {
        printf(" %d",i);
        n=n/i;
        m *=i;
        d=s/m;
        if(d !=1)
        {
            printf(" x");
        }
    }
    for(i=3; i<= sqrt(n); i+=2)
    {
        while(n%i==0)
        {
            printf(" %d",i);
            n=n/i;
            m *=i;
            d=s/m;
            if(d !=1)
            {
                 printf(" x");
            }
        }
    }
    d=s/m;
    if(d !=1)
    {
        printf(" %d",d);
    }

}
int main()
{
///   freopen("C:\\Users\\Hamza\\OneDrive\\Documents\\in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    int n;
    while(1==scanf("%d",&n) && n)
    {
        prime(n);
        printf("\n");
    }

    return 0;
}
