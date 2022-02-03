
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
#define deb(a)      cout<<__LINE__<<"#-> "<<#a<<"  "<<a<<endl

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
int Idis[Vertex_N];
vector<int>graph[Vertex_N];
vector<int>weight[Vertex_N];

void init(int n){
    for(int i=1;i<=n;i++){
        dist[i] = oo;
        par[i] = -1;
        Idis[i]=0;
        graph[i].clear();
        weight[i].clear();
    }
}

int dijkstra(int source, int destination){
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

        if(dist[u] < uDist) {
            continue;
        }

        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            int edgeWeight = weight[u][i];

            if(dist[v] > dist[u] + edgeWeight){
                dist[v] = dist[u] + edgeWeight;
                par[v] = u;
                Idis[v]=edgeWeight;
                pq.push({v, dist[v]});  //pq.push(Nod(v, dist[v]);
            }
        }
    }

    return dist[destination];
}

vector<int> getPaht(int source, int destination){
    int v = destination;
    vector<int>path;

    while(source != v){
        path.push_back(v);
        v = par[v];
    }

    path.push_back(source);

    reverse(path.begin(), path.end());

    return path;
}

int main()
{
//    freopen("0.in","r",stdin);
    // freopen("out.out","w",stdout);
    // ios::sync_with_stdio(false);cin.tie(0);

    int V, E, S, D;

    while(cin>>V>>E>>S>>D){
        init(V);

        for(int i=0;i<E;i++){
            int u,v,w;

            cin>>u>>v>>w;

            graph[u].push_back(v);
            weight[u].push_back(w);
        }

        int distance = dijkstra(S, D);

        vector<int>path = getPaht(S, D);

        printf("Distace: %d\n", distance);

        printf("Path: ");
        for(auto v: path) cout<<v<<" ";cout<<endl;
        int minidis=Idis[D];
        while(S !=par[D])
        {
            D=par[D];
            if(minidis>Idis[D])
            minidis=Idis[D];
        }
        deb(minidis);

    }

    return 0;
}


/*
INPUT Graph:
---------------

5 7 1 4

1 4 100
1 2 5
2 4 50
2 3 7
3 4 20
3 4 10
4 5 10


OUTPUT
--------------
Distace: 22
Path: 1 2 3 4
*/



