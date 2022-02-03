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
    double X,Y,x,y,r;
    char type;
};
points ar[11];
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks=1,ks=1;
    double p1,p2;
    while(1==scanf(" %c",&ar[ks].type)&&ar[ks].type!='*')
    {
        if(ar[ks].type=='r')
            scanf("%lf%lf%lf%lf",&ar[ks].X,&ar[ks].Y,&ar[ks].x,&ar[ks].y);
        else
            scanf("%lf%lf%lf",&ar[ks].X,&ar[ks].Y,&ar[ks].r);
        ks++;
    }
    while(2==scanf("%lf%lf",&p1,&p2)&&(p1!=9999.9&&p2!=9999.9))
    {
        int f=0;
        for(int i=1;i<ks;i++)
        {
            if(ar[i].type=='r'){
                if(p1>ar[i].X && p1<ar[i].x && p2<ar[i].Y && p2>ar[i].y){
                    f=1;
                    printf("Point %d is contained in figure %d\n",tks,i);}
            }
             else{
                double X=ar[i].X-p1;
                double Y=ar[i].Y-p2;
                double r=ar[i].r;
                if(X*X+Y*Y<r*r){
                    f=1;
                    printf("Point %d is contained in figure %d\n",tks,i);}
             }
        }
        if(f==0)
            printf("Point %d is not contained in any figure\n",tks);
        tks++;
    }
    return 0;
}
