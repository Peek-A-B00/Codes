
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
const int Size = 30010;
int w[Size];
vector<int>v[Size];
LL dfs(int n)
{
    queue<int>Q;
    Q.push(n);
    LL s=0;
    int i=1;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int it:v[u])
        {
            debug(w[n],w[it],it);
            int o=pow((-1),i++);
            deb(o);
            s+=(w[n]-w[it])*o;
            deb(s);
            Q.push(it);
        }
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            v[i].clear();
        for(int i=1; i<=n; i++)
            cin>>w[i];
        for(int i=0; i<n-1; i++)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
        }
        LL s=0;
        int r=0;
        for(int i=1; i<=n; i++){
            if(s<dfs(i))
                r=i;
        }
        cout<<"Case "<<ks++<<": "<<r<<endl;
//        printf("Case %d: %d",ks++);
    }

//    while(1==scanf("",&))
//    {
//        printf("\n");
//    }

    return 0;
}
