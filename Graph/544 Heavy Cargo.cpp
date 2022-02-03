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
const int Size = 201;

int N,E;
string S,D;
int tsk=1;
struct Nod
{
  int u;
  int w;
  Nod(int ui,int wi)
  {
      u=ui;
      w=wi;
  }
  bool operator<(const Nod&b)const{
    return w < b.w;
  }
};

map<string,int>mp;
vector<int>V[Size];
vector<int>W[Size];
int dis[Size];
int par[Size];
bool flag[Size];

void Init()
{
    mp.clear();
    for(int i=1; i<=N;i++)
    {
        dis[i]=-1;
        par[i]=0;
        flag[i]=false;
        V[i].clear();
        W[i].clear();
    }
}
void Dijkstra(int s)
{
    dis[s]=0;
    priority_queue<Nod>pq;
    pq.push(Nod(s,0));

    while(!pq.empty())
    {
        Nod a=pq.top();
        pq.pop();
        int u=a.u;
        int wight=a.w;

        if(flag[u]==true)
            continue;
        flag[u]=true;
        for(int i=0; i<V[u].size();i++)
        {
            int v=V[u][i];
            int w=W[u][i];
            if(flag[v]==false&&dis[v] < w)
            {
                dis[v]= w;
                par[v]= u;
                pq.push({v,dis[v]});
            }
        }
    }

}

int Miniwight(int s,int e)
{
    int c=dis[e];
    while(s!=par[e])
    {
        e=par[e];
        if(c>dis[e])
            c=dis[e];
    }
    return c;
}
int main()
{
//    freopen("f1.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    while(cin>>N>>E && N&&E)
    {
        Init();
        int c=1;
        for(int i=0;i<E;i++)
        {
            string u,v;
            int w;
            cin>>u>>v>>w;
            if(mp.find(u)==mp.end())
                mp[u]=c++;

            if(mp.find(v)==mp.end())
                mp[v]=c++;
            int  a=mp[u],b=mp[v];
            V[a].push_back(b);
            V[b].push_back(a);
            W[a].push_back(w);
            W[b].push_back(w);
        }
        cin>>S>>D;
        if(mp.find(S)==mp.end()||mp.find(D)==mp.end())
        {
            printf("Scenario #%d\n",tsk++);
            printf("0 tons\n");
            printf("\n");
            continue;

        }
        int  s=mp[S],d=mp[D];
        Dijkstra(s);

        int Capacity=Miniwight(s,d);

        printf("Scenario #%d\n",tsk++);
        printf("%d tons\n",Capacity);
        printf("\n");
    }

    return 0;
}

