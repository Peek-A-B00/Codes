
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


struct Edge{
    int u, v, w;

    Edge(int ui, int vi, int wi){
        u = ui;
        v = vi;
        w = wi;
    }
};

const int Vertex_N =  200001;

vector<Edge>edgeList;
int rnk[Vertex_N];
int par[Vertex_N];

void init(int n)
{
    edgeList.clear();

    for(int i=0;i<n;i++){
        rnk[i] = 0;
        par[i] = i;
    }
}

int findSet(int u){
    if(u != par[u]){
        par[u] = findSet(par[u]);
    }
    return par[u];
}

void makeLink(int setU, int setV)        /// Link + Union
{
    if(rnk[setU]> rnk[setV]){
        par[setV] = setU;
    }
    else {
        par[setU] = setV;
        if(rnk[setU]== rnk[setV]){
            rnk[setV]++;
        }
    }
}

bool com(Edge &a, Edge &b){
    return a.w < b.w;
}

int MST_Kruskal(){
    int sum = 0;

    sort(edgeList.begin(), edgeList.end(), com);

    for(auto edg: edgeList){
        int setU = findSet(edg.u);
        int setV = findSet(edg.v);

        if(setU != setV){
            sum += edg.w;
            makeLink(setU, setV);
        }
    }

    return sum;
}

int main()
{
//     freopen("f1.txt","r",stdin);
//     freopen("341 - Non-Stop Travel.in","w",stdout);

    int V, E;
    while(cin>>V>>E &&V&&E)
    {
        init(V);
        int  sum=0;
        for(int i=0;i<E;i++){
            int u,v,w;
            cin>>u>>v>>w;
            sum += w;
            edgeList.push_back({u,v,w});
        }

        int mstCost = sum - MST_Kruskal();

        printf("%d\n", mstCost);
    }

    return 0;
}
