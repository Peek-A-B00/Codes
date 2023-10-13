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

/*
    if(st.find(val)!=st.end())
    {

    }
*/


typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 1001;

int n,m;
int par[Size];
int rnk[Size];
vector<int>R;

struct Nod
{
    int u,v,w;
};
vector<Nod>V;

void init()
{
    V.clear();
    R.clear();
    for(int i=0;i<n;i++)
    {
        par[i]=i;
        rnk[i]=0;
    }
}
int findSet(int u)
{
    if(u != par[u])
        par[u]=findSet(par[u]);
    return par[u];
}
void makeLink(int u,int v)
{
    if(rnk[u] > rnk[v])
        par[v]=u;
    else
    {
        par[u]=v;

        if(rnk[u] == rnk[v])
            rnk[v]++;
    }
}
void Kruskal()
{
    sort(V.begin(),V.end(),[](Nod a, Nod b)
         {
             return a.w < b.w;
         });

    for(auto it:V)
    {
        int setU=findSet(it.u);
        int setV=findSet(it.v);

        if(setU != setV)
            makeLink(setU,setV);
        else
            R.push_back(it.w);
    }
}
int main()
{
//     freopen("f1.txt","r",stdin);
//     freopen("341 - Non-Stop Travel.in","w",stdout);

    while(2==scanf("%d%d",&n,&m) &&n||m)
    {
        init();
        for(int i=0;i<m;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            V.push_back({u,v,w});
        }
        Kruskal();
        int l=R.size();
        if(l==0){
            printf("forest\n");
            continue;
        }
        sort(R.begin(),R.end());
        for(int i=0;i<l;i++){
            if(i!=0)
                printf(" ");
            int it=R[i];
            printf("%d",it);
        }
        printf("\n");
    }

    return 0;
}

