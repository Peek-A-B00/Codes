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

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);


    int n,f;
    while(1==scanf("%d",&n))
    {
        int i=2;
        if(n>i)
        {
            printf("%d,",i);
        }
        for(i=3; i<=n ; i+=2)
        {
            f=0;
            for(int j=sqrt(i); j>1; j--)
            {
                if(i%j==0)
                {
                    f=1;
                }
            }
            if(f==0)
            {
                printf(" %d,",i);
            }
        }
        printf("\n");
    }

    return 0;
}
