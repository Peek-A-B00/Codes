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

const int V_SZ = 101;

struct Edge{
    int u,v,w;
};

vector<Edge>edgeList;

int dist[V_SZ];
int par[V_SZ];
int V,E;
const int oo = (1<<25);

void init(){
    for(int i =1;i<=V;i++)
    {
        dist[i] = oo;
        par[i] = -1;
    }
    edgeList.clear();
}

bool bellmanFord_IsNegativeWeightCycle(int s){
    dist[s] = 0;
    bool isUpdated;

    for(int i=1;i<=V;i++)
    {
        isUpdated = false;



        for(auto edg: edgeList){
            if(dist[edg.v] > dist[edg.u] + edg.w){
                dist[edg.v] = dist[edg.u] + edg.w;
                par[edg.v] = edg.u;
                isUpdated = true;
            }
        }
    }

    return isUpdated;
}

int main()
{
//    freopen("bf.in","r",stdin);
//    freopen("out.txt","w",stdout);
    int Source;
    while(cin>>V>>E>>Source)
    {
        init();
        for(int i=0;i<E;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            Edge e;
            e.u = u;
            e.v = v;
            e.w = w;
            edgeList.push_back(e);
        }

        bool isNegativeCycleExist = bellmanFord_IsNegativeWeightCycle(Source);

        puts("Distance:");
        for(int i=1;i<=V;i++)   printf("[%d: %d], ",i, dist[i]);  printf("\n");

        puts("Parent:");
        for(int i=1;i<=V;i++)   printf("[%d:%d], ",i, par[i]);  printf("\n");
        deb(isNegativeCycleExist);
        puts("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    }

    return 0;
}
/*4 6 1

1 4 100
1 2 5
2 4 50
2 3 7
3 4 20
3 4 10

4 4 1

3 2 7
2 3 5
1 2 10
3 4 10


4 4 1

3 2 -7
2 3 5
1 2 10
3 4 10*/

