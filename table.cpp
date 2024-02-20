
//#include<bits/stdC++.h>
#include <stdio.h>
#include <float.h>
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
const double pi = 2*acos(0.0);
const int Size = 1e5 + 5;

int n,m,d;
vector<int>graph[Size];
vector<LL>weight[Size];
vector<int>par;
vector<int>dis;
bool fun(LL  x,vector<int>&dis,vector<int>&par)
{
    vector<bool>flag(n+1);

    par.clear();
    dis.clear();
//    int dis[n+1];
    flag[1]=true;
    par[1]=1;
    dis[1]=0;
    queue<int>q;
    q.push(1);
    while(!q.empty())
    {
        int a=q.front();
        q.pop();
        for(int i=0;i<graph[a].size();i++)
        {
            int b=graph[a][i];
            LL c=weight[a][i];
            if(flag[b]!=true && c<=x)
            {
                flag[b]=true;
                dis[b]=dis[a]+1;
                par[b]=a;
                q.push(b);
            }
        }
    }
//    deb(dis[n]);

    return flag[n] && dis[n]<=d;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    cin>>n>>m>>d;
    int a,b;
    LL c;
    LL ans=1e9+1;
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;

        graph[a].push_back(b);
        weight[a].push_back(c);
    }
    LL l=0,r=1e9;
    dis.resize(n+1);
    par.resize(n+1);
    while(r>l)
    {
        LL mid=l+(r-l)/2;
        if(fun(mid,dis,par)){
            ans=min(mid,ans);
            r=mid;
        }
        else
            l=mid+1;
    }
//    cout<<ans;
    if(ans==1e9+1)
        cout<<-1<<en;
    else{
        fun(ans,dis,par);
        cout<<dis[n]<<en;
    }
    return 0;
}
