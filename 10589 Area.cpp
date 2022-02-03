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
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    int N,a;
    double M,o,x,y,area;
    while(2==scanf("%d%d",&N,&a)&& N)
    {
        o=a/2;
        M=0;
        int aa=a*a;
        for(int i=0; i<N;i++)
        {
            scanf("%lf%lf",&x,&y);
            double X=a-x, Y=a-y;

            if(pow(X,2) +pow(Y,2) > aa ||pow(X,2) + pow(y,2)>aa||pow(x,2) +pow(Y,2)>aa||pow(x,2) + pow(y,2)>aa)
                continue;
            else
                M++;

            area=(M*aa)/N;

        }
        printf("%0.5lf\n",area);
    }

    return 0;
}
