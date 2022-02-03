
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
const int Size = 101;

vector<int>Order;
vector<int>VV[Size];
int col[Size];
int V,E;

enum Color
{
    WHITE=0,
    GRAY,
    BLACK
};
void init()
{
    for(int i=1;i<=V;i++)
    {
        col[i]=WHITE;
        VV[i].clear();
    }
    Order.clear();
}

void DFS(int s)
{
    col[s]=GRAY;
    for(auto i:VV[s])
        if(col[i]==WHITE)
            DFS(i);
    col[s]=BLACK;
    Order.push_back(s);
}

int main()
{
//    freopen("10305 - Ordering Tasks.in","r",stdin);
//    freopen("out.txt","w",stdout);

    while(cin>>V>>E)
    {
        init();
        int x,y;
        for(int i=0; i<E; i++)
        {
            cin>>x>>y;
            VV[y].push_back(x);
        }
        for(int i=1;i<=V; i++)
            if(col[i]==WHITE)
                DFS(i);
        for(auto i:Order)
            printf("%d ",i);
        printf("\n");
    }

    return 0;
}
