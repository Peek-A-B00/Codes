//#include<bits/stdC++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iomanip>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
#include<set>
#include <unordered_map>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator, (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;

#define en "\n"
#define spf(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 20003;

int n;
vector<int>adj[Size];
bool flag[Size];
int level[Size];

void init()
{
    for(int i=1;i<Size;i++)
    {
        adj[i].clear();
        flag[i]=false;
        level[i]=-1;
    }
}
int bfs(int s)
{
    level[s]=0;
    flag[s]=true;
    queue<int>q;
    q.push(s);
    int vamp=1,lyk=0;
    while(!q.empty())
    {
        int u =q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v = adj[u][i];
            if(flag[v]== true) continue;

            flag[v] = true;
            q.push(v);

            if(level[u]==0)
            {
                level[v]=1;
                lyk++;
            }
            else
            {
                level[v]=0;
                vamp++;
            }
        }
    }
    return max(vamp,lyk);
}
void solve(int ks)
{
    cin>>n;
    init();
    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int sum =0;
    for(int i=1;i<Size;i++)
        if(flag[i]==false && !adj[i].empty())
            sum+=bfs(i);

    cout<<"Case "<<ks<<": "<<sum<<en;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
          solve(ks++);
//        printf("Case %d: ",ks++);
    }


    return 0;
}
