
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



struct Nod
{
    int u, dis;

    ///constructor
//    Nod(){
//        u = 0;
//        dis = oo;
//    }

    Nod(int iU, int iDis){
        u = iU;
        dis = iDis;
    }

    bool operator<(const Nod& b) const{
        return dis < b.dis;
    }
};

const int Vertex_N = 101;
const int oo = 1e8+0.5;

int dist[Vertex_N];
int par[Vertex_N];
vector<int>graph[Vertex_N];
vector<int>weight[Vertex_N];
bool flag[Vertex_N];

void init(int n){
    for(int i=1;i<=n;i++){
        dist[i] = -(1<<25);
        par[i] = 0;
        flag[i]=false;
        graph[i].clear();
        weight[i].clear();
    }
}

void dijkstra(int source){
    priority_queue<Nod>pq;

    dist[source] = 0;

//    Nod a;
//    a.u =source;
//    a.dis =0;
//    pq.push(a);
//    Nod a(source, 0);
    pq.push(Nod(source, 0));

    while(!pq.empty()){
        Nod cur = pq.top();
        pq.pop();

        int u = cur.u;
        int uDist = cur.dis;

        debug("U=",u);
        if(flag[u]==true) {
            continue;
        }
        flag[u]=true;

        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            int edgeWeight = weight[u][i];

            if(flag[v]==false &&dist[v] < edgeWeight){
                dist[v] =edgeWeight;
//                debug(dist[v]);
                par[v] = u;
                pq.push({v, dist[v]});  //pq.push(Nod(v, dist[v]);
            }
        }
    }
}

int Mini_Path(int s,int d)
{
    int r=dist[d];
//    debug(r);
    while(s!=par[d])
    {
        d=par[d];
        if(r>dist[d])
            r=dist[d];
    }
    return r;
}

int main()
{
//    freopen("bf.in","r",stdin);
    // freopen("out.out","w",stdout);
    // ios::sync_with_stdio(false);cin.tie(0);

    int V, E, S, D;

    while(cin>>V>>E){
        init(V);

        for(int i=0;i<E;i++){
            int u,v,w;

            cin>>u>>v>>w;

            graph[u].push_back(v);
            graph[v].push_back(u);
            weight[u].push_back(w);
            weight[v].push_back(w);
        }
        cin>>S>>D;

        dijkstra(S);

        int res = Mini_Path(S, D);

        printf("%d\n",res);
    }

    return 0;
}
 /*3 2
1 2 2
2 3 1
3 1

3 2
1 2 1
2 3 2
1 3*/
