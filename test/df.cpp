
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

const int NUMBER_OF_VERTICS =1000010;
const int oo = 100;

vector<int>adj[NUMBER_OF_VERTICS];

int par[NUMBER_OF_VERTICS];
int dis[NUMBER_OF_VERTICS];
bool col[NUMBER_OF_VERTICS];
string s,str;
int BFS(int source)
{
    queue<int>Q;
    int c=1;
    str+=s[source];
    col[source] = false;
    dis[source] = 0;
    par[source]  = -1;
    Q.push(source);

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();

        for(int i=0;i<adj[u].size();i++){
            int v = adj[u][i];

            if(col[v]==false)   continue;

            col[v] = false;
            dis[v] = 1 + dis[u];
            par[v] = u;
            str+=s[v];
            string a=str;
            debug(a);
            reverse(a.begin(),a.end());
            if(str==a)
                c++;
            Q.push(v);
        }
    }
    return c;
}


int main()
{
//    freopen("bfs.in","r",stdin);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf(" %c",&s[i]);

        for(int i=1;i<=n;i++){
            adj[i].clear();
            dis[i] = oo;
            col[i] = true;
            par[i] = -1;
            s.clear();
            str.clear();
        }
        for(int i=0;i<n-1;i++)
        {
             int u,v;
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int r=BFS(1);
        printf("Case %d: %d/%d\n",ks++,r,n);
    }

    return 0;
}


/*
Sample Input for a Graph:

7 7 1

1 2
1 3
2 3
2 4
3 4
4 5
5 6

*/

