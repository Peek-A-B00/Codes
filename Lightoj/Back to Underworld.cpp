

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
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
/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/


typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 20010;

vector<int>edj[Size];
vector<int>par[Size];
int lev[Size];
bool flag[Size];
void init(int n)
{
    for(int i=1;i<=n;i++)
    {
        edj[i].clear();
        par[i].clear();
        flag[i]=false;
        lev[i]=0;
    }
}
int com(int i,int j,int k)
{
    if(i>k && i>j)
        return i;
    if(j>k)
        return j;
    else
        return k;
}
int res(int m)
{
    int l=0,v=0;
    for(int i=1;i<=m;i++)
    {
        if(i%2==0)
            l+=lev[i];
        else
            v+=lev[i];
    }
    debug(l,v);
    if(l>v)
        return l;
    return v;
}
int BFS(int s)
{
    int l=1;
    flag[s]=true;
    lev[l]=1;
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        ++l;
        int q=Q.front();
        Q.pop();

        for(int i=0;i<edj[q].size();i++)
        {
            int v=edj[q][i];

            if(flag[v]==true)  continue;

            flag[v]=true;
            ++lev[l];
//            deb(lev[l]);
//            deb(v);
            par[q].push_back(v);
            Q.push(v);
        }
    }
    return res(l);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bfs.in","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1,n;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
        int c=1;
        cin>>n;
        init(2*n);
        for(int i=0;i<n;i++)
        {
            int u,v;
            cin>>u>>v;
            edj[u].push_back(v);
            edj[v].push_back(u);
            c=com(c,u,v);
        }
        int t=0;
        for(int i=1;i<=c;i++)
            if(flag[i]==false){
                memset(lev,0,sizeof lev);
                t+=BFS(i);
            }

        cout<<"Case "<<ks++<<": "<<t<<endl;

//        printf("Case %d: ",ks++);
    }

//    while(1==scanf("",&))
//    {
//        printf("\n");
//    }

    return 0;
}
