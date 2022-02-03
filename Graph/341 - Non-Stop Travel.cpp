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
const int Size = 11;
struct element{
    int u,v,w;
};
vector<element>V;
vector<int>path;
int dis[Size];
int par[Size];
int N,way,y,t;
int oo=(1<<25);
int S,E;
int C=1;

void init()
{
    for(int i=1; i<=N; i++){
        dis[i]=oo;
        par[i]=-1;
    }
    V.clear();
    path.clear();
}

void BF(int s)
{
    dis[s]=0;
    for(int i=1; i<N; i++)
        for(auto it:V)
            if(dis[it.u] + it.w< dis[it.v])
            {
                dis[it.v]= dis[it.u] + it.w;
                par[it.v]= it.u;
            }

}

int main()
{
//    freopen("341 - Non-Stop Travel.in","r",stdin);
//    freopen("out.txt","w",stdout);
   while(cin>>N && N)
    {
        init();
        for(int x=1; x<=N; x++)
        {
            cin>>way;
            for(int i=0; i<way; i++)
            {
                cin>>y>>t;
                element a;
                a.u=x;
                a.v=y;
                a.w=t;
                V.push_back(a);
            }
        }
        cin>>S>>E;
        BF(S);
        path.push_back(E);
        int p=E;
        while(par[p]!=S)
        {
            path.push_back(par[p]);
            p=par[p];
        }
        path.push_back(S);
        reverse(path.begin(),path.end());
        printf("Case %d: Path =",C++);
        for(auto it:path)
            printf(" %d",it);
        printf("; %d second delay",dis[E]);
        printf("\n");
    }

    return 0;
}
