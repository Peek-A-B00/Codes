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

struct points
{
    double x1,x2,y1,y2;
    char ch;
};
points ar[10];
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    double p1,p2;
    int cs=0,n=1;
    while(1==scanf("%c",&ar[n].ch)&&ar[n].ch!='*')
    {
        scanf("%lf%lf%lf%lf",&ar[n].x1,&ar[n].y1,&ar[n].x2,&ar[n].y2);
        n++;
        getchar();
    }
    while(2==scanf("%lf%lf",&p1,&p2)&&p1!=9999.9 &&p2!=9999.9)
    {
        int f=0;
        cs++;
        for(int i=1;i<n;i++)
            if(p1>ar[i].x1&&p1<ar[i].x2&&p2<ar[i].y1&&p2>ar[i].y2)
            {
                f=1;
                printf("Point %d is contained in figure %d\n",cs,i);
            }
        if(f==0)
            printf("Point %d is not contained in any figure\n",cs);
    }
    return 0;
}
