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
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;

struct xy
{
    double x,y;
};
struct Nod
{
    int u,v;
    double w;
};
vector<Nod>V;
xy point[Size];
int par[Size];
int rnk[Size];
int N;

void init()
{
    V.clear();
    for(int i=0; i<N;i++)
    {
        par[i]=i;
        rnk[i]=0;
    }
}
double dis(int a, int b)
{
    double x=point[a].x-point[b].x;
    double y=point[a].y-point[b].y;
    return sqrt(x*x+y*y);
}
int findSet(int u)
{
    if(u!=par[u])
    {
        par[u]=findSet(par[u]);
    }
    return par[u];
}
void makeLink(int a, int b)
{
    if(rnk[a] > rnk[b])
        par[b]=a;
    else
    {
        par[a]=b;
        if(rnk[a]==rnk[b])
            rnk[b]++;
    }
}
double MST_Kruskal()
{
    sort(V.begin(),V.end(),[](Nod a, Nod b)
         {
             return a.w < b.w;}
        );
    double sum=0;

    for(auto it:V)
    {
        int setU=findSet(it.u);
        int setV=findSet(it.v);

        if(setU != setV)
        {
            sum+=it.w;
            makeLink(setU,setV);
        }
    }
    return sum;
}
int main()
{
    freopen("f1.txt","r",stdin);
    freopen("341 - Non-Stop Travel.in","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        scanf("%d",&N);
        for(int i=0; i<N;i++)
            scanf("%lf%lf",&point[i].x,&point[i].y);

        init();
//        sort(point,point+N,[](xy a, xy b)
//            {
//             if(a.x != b.x)
//                return a.x < b.x;
//             return a.y < b.y;
//            });
        for(int i=0;i<N-1;i++)
            for(int j=1;j<N;j++)
            {
                double W=dis(i,j);
                V.push_back({i,j,W});
            }
        double res=MST_Kruskal();
        printf("%0.2lf\n",res);
        if(tks !=0)
            printf("\n");
    }
    return 0;
}
