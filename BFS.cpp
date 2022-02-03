#include <queue>
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
const int SZ = 100;
const double EPS = 1e-7; ///1*10^-7
vector<int>adj[SZ];
bool col[SZ];
int dis[SZ];
int par[SZ];

void BFS(int s)
{
    queue<int>Q;

    col[s]=false;
    dis[s]=0;
    par[s]=-1;
    Q.push(s);
    while(Q.empty()==false)
    {
        int a=Q.front();
        Q.pop();

        for(int i=0; i<adj[a].size(); i++)
        {
            int b=adj[a][i];
            if(col[b]==true)
            {
                col[b]=false;
                dis[b]=1+dis[a];
                par[b]=a;
                Q.push(b);
            }
        }
    }
}
int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    int V, E, source;


    while(cin>>V>>E>>source)
    {

//        memset(col,true,V+1);
//        memset(dis,100,V+1);
//        memset(par,-1,V+1);
        for(int i=1; i<=V; i++)
        {
           adj[i].clear();
            col[i]=true ;
            dis[i]=100;
            par[i]=0;
        }

        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        BFS(source);

        for(int i=1;i<=V;i++)
        {
            printf("VertexNo:%3d, Distance:%4d, Parent:%3d, Color:%2d\n", i, dis[i], par[i], col[i]);
        }
    }

    return 0;
}
