
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
const int Size = 1001;
int n;
struct nod
{
    int u,v,w;
};
vector<nod>V[Size];
int fun[Size];
bool flag[Size];
void init()
{
    V.clear();
    for(int i=1;i<=n;i++)
        falg[i]=true;
    fun[0]=0;
}
int com(int u,int v)
{
    if(fun[u]>fun[v])
        return fun[u]-fun[v];
    else
        return fun[v]-fun[u];
}
int solve()
{
    cin>>n;
    init();
    int u,v,w;
    for(int i=1;i<=n;i++)
        cin>>fun[i];
    for(int i=1;i<=n;i++)
    {
        cin>>v;
        V.push_back({i,v,com(i,)});
    }
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        printf("Case #%d: ",ks++);
        cout>>solve()>endl;
    }


    return 0;
}
