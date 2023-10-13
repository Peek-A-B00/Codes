
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <set>
#include <bitset>
#include <algorithm>
#include <list>
#include <utility>
#include <functional>
#include <deque>
#include <numeric>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <assert.h>

#include <unordered_set>
#include <unordered_map>

// #include <bits/stdc++.h>
using namespace std;


#include<cmath>
#include<math.h>

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define PrintConP(mp)    {cout<<#mp<<" #=> ";for(auto &it: mp){cout<<it.first<<":"<<it.second<<", ";} cout<<endl;}
#define PrintCon(mp)    {cout<<#mp<<" #=> ";for(auto &it: mp){cout<<it<<", ";} cout<<endl;}
#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

#define debug(a...)          {cout<<" #--> ";dbg,a; cout<<endl;}
struct debugger
{
    ///Collected from rudradevbasak
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;


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
        return dis > b.dis;
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
        dist[i] = oo;
        par[i] = -1;
        flag[i]=false;
        graph[i].clear();
        weight[i].clear();
    }
}

void Prims(int source, int destination){
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

        if(flag[u]==true||dist[u] < uDist) {
            continue;
        }
        flag[u]=true;

        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            int edgeWeight = weight[u][i];

            if(flag[v]==false&&dist[v] > edgeWeight){
                dist[v] =edgeWeight;
                par[v] = u;
                pq.push({v, dist[v]});  //pq.push(Nod(v, dist[v]);
            }
        }
    }
}

int Mini_Path(int s,int d)
{
    int r=dist[d];
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
//    freopen("f1.in","r",stdin);
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

        Prims(S, D);

        int res = Mini_Path(S, D);

        printf("%d\n",res);
    }

    return 0;
}


/*
INPUT Graph:
---------------

4 6

1 4 100
1 2 5
2 4 50
2 3 7
3 4 20
3 4 10


OUTPUT
--------------
Distace: 22
Path: 1 2 3 4
*/



