#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include <algorithm>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator, (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;
/** ---- Paknami Ends ----*/

typedef long long LL;
const int SIZE = 100;
const double EPS = 1e-7; ///1*10^-7

bool com(int a, int b)  /// Returns true while priority of A > priority of B
{
    return a>b;
}

int main()
{
//    freopen("AlgorithmSort.in","r",stdin);

    int ar[SIZE];
    int i,n;
    deb("Okay");


    while(1==scanf("%d",&n) && n)
    {
        for(i=0; i<n; i++)
        {
///            scanf("%d",&ar[i]);
            scanf("%d",ar+i);
        }

        sort(&ar[0], &ar[n]); /// O(N log N)      -> O(N lg N)
        sort(ar, ar+n, com);

        for(i=0; i<n; i++)
        {
            printf("%d, ",ar[i]);
        }
        printf("\n");
    }


    return 0;
}
