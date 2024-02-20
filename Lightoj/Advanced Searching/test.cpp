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
const int Size = 20005;
vector<int>adj[Size];
bool flag[Size];
int n;

int bfs(int s)
{
    int cnt=1;
    flag[s]=true;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(flag[v]==true) continue;

            flag[v]=true;
            for(int j=0;j<adj[v].size();j++)
            {
                int w=adj[v][j];
                if(flag[w]==true) continue;

                flag[w]=true;
                cnt++;
                q.push(w);
            }
        }
    }
    return cnt;
}

void solve(int ks)
{
    cin>>n;
    for(int i=1;i<n*2;i++)
    {
        adj[i].clear();
        flag[i]=false;
    }
    int vamp,lyk;
    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        if(i==0)
            vamp=u,lyk=v;
    }
    int a = bfs(vamp);
//    deb(a);
    for(int i=1;i<n*2;i++)
        flag[i]=false;
    int b = bfs(lyk);
//    deb(b);
    cout<<"Case "<<ks<<": "<<max(a,b)<<en;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("bfs.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int ar[]={0,1,2,3,4,7};
    int l=0,r=7;
    int x=7;
    while(r>l)
    {
        int m=l+(r-l)/2;
        if(x>=ar[m])
            l=m+1;
        else
            r=m;
    }
    deb(l);
    return 0;
}
