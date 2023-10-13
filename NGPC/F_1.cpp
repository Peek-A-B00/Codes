
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
#include<set>
#include <unordered_map>
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

/*
    if(st.find(val)!=st.end()){}
*/


typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 100000+10;
typedef double db;
//#define sp(d)   setprecision (d)

struct nod
{
    db x,y;
};
db hight(db x1,db y1,db x2,db y2)
{
    db a1=-y1;
    db b1=x1-x2;
    db c1=a1*x2;
    db a2=-y2;
    db b2=x2-x1;
    db c2=a2*x1;
    db d=a1*b2-a2*b1;
    return (a1*c2-c1*a2)/d;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
        nod ar[Size];
        int N,X;
        cin>>N>>X;
        for(int i=0;i<N;i++)
            cin>>ar[i].x>>ar[i].y;
        sort(ar,ar+N,[] (nod a, nod b)
             {
                 if(a.x!=b.x)
                    return a.x<b.x;

             });
        db area=ar[0].x*ar[0].y;
        deb(area);
        for(int i=1;i<N;i++){
            area+=(ar[i+1].x-ar[i-1].x)*ar[i].y;
            db h=hight(ar[i-1].x,ar[i-1].y,ar[i].x,ar[i].y);
            area-=0.5*(ar[i].x-ar[i-1].x)*h;
            deb(area);
        }
        cout<<setprecision(8)<<fixed<<area<<endl;
//        printf("Case %d: ",ks++);
    }

//    while(cin>>)
//    {
////        printf("\n");
//    }

    return 0;
}
