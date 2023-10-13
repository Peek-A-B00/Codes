
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
const int Size = 101;

int n,m;
int par[Size];
int rnk[Size];
struct Edge
{
    int u,v,w;
};
vector<Edge>V;
vector<int>R;
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
    else{
        par[u]=v;

        if(rnk[u]==rnk[v])
            rnk[v]++;
    }
}

void Kurskal()
{
    sort(V.begin(),V.end(),[](Edge a, Edge b)
         {
             return a.w > b.w;}
             );
    for(auto it:V)
    {
        int setU=findSet(it.u);
        int setV=findSet(it.v);

        if(setU != setV)
        {
            R.push_back(it.w);
            makeLink(setU,setV);
        }
    }
}

int MC()
{
    int r=R[0];
    for(int i=1;i<R.size();i++)
        if(r>R[i])
            r=R[i];
    return r;
}
int main()
{
//    freopen("f1.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        cin>>n>>m;
        init();
        for(int i=0;i<m;i++)
        {
            int u,v,c;
            cin>>u>>v>>c;
            V.push_back({u,v,c});
        }
        Kurskal();
        int res = MC();
        printf("Case #%d: %d\n",ks++,res);
    }


    return 0;
}
