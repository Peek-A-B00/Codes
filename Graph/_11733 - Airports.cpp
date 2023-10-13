

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
const int Size = 10001;

struct Edge
{
    int u,v,w;
};

vector<Edge>V;
int N,M,C;
int par[Size];
int rnk[Size];

void init()
{
    V.clear();
    for(int i=1;i<=N;i++)
    {
        par[i]=i;
        rnk[i]=0;
    }
}

int findSet(int u)
{
    if(u != par[u])
        par[u]= findSet(par[u]);

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

int Kruskal(int &c)
{
    int sum=0;
    sort(V.begin(),V.end(),[](Edge a,Edge b)
         {
            return a.w < b.w;
         });
    for(auto it:V)
    {
        int setU=findSet(it.u);
        int setV=findSet(it.v);

        if(setU != setV)
        {
            sum+= it.w;
            makeLink(setU,setV);
            c--;
        }
    }
    return sum;
}
int main()
{
//    freopen("f1.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        cin>>N>>M>>C;
        init();
        for(int i=0;i<M;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;

            if(w>=C)
                continue;
            V.push_back({u,v,w});
        }
        int cnt=N;
        int res = Kruskal(cnt);
        res=res + (cnt*C);

        printf("Case #%d: %d %d\n",ks++,res,cnt);
    }


    return 0;
}
