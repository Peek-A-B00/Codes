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
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;
/** ---- Paknami Ends ----*/

typedef long long LL;
const int SIZE = 100;
const double EPS = 1e-7; ///1*10^-7

struct Point
{
    int x;
    int y;

    void print(){cout<<x<<" "<<y<<endl;}
};


bool com(Point a, Point b)  /// /// Returns true while priority of A > priority of B
{
    if(a.x != b.x)  return a.x<b.x;
    return a.y<b.y;
}

int main()
{
    freopen("AlgorithmSort_Struct.in","r",stdin);

    Point ar[SIZE];
    int i,n;
    Point p;


    while(1==scanf("%d",&n) && n)
    {
        for(i=0; i<n; i++)
        {
            cin>>p.x>>p.y;

            ar[i] = p;
        }

        sort(ar, ar+n, com);

        for(i=0; i<n; i++)
        {
//            ar[i].print();
            debug(ar[i].x, ar[i].y);
        }
        printf("\n");
    }


    return 0;
}
