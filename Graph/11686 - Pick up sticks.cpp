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
const int Size = 1000001;
vector<int>V[Size];
vector<int>Ans;
int col[Size];
int N,M;
enum Color{
    WHITE=0,
    GRAY,
    BLACk
};

bool isImpossible;

void init()
{
    for(int i=1; i<=N; i++)
    {
        col[i]=WHITE;
        V[i].clear();
    }
    Ans.clear();
}
void DFS(int s)
{
    col[s]=GRAY;
    for(auto it:V[s])
    {
        if(col[it]==WHITE)
            DFS(it);
        if(col[it]==GRAY)
        {
            isImpossible = true;
            break;
        }
    }

    col[s]=BLACk;
    Ans.push_back(s);

}

int main()
{
    freopen("10305 - Ordering Tasks.in","r",stdin);
//    freopen("out.txt","w",stdout);

    while(cin>>N>>M)
    {
        init();
        int u,v,res;
        for(int i=0;i<M;i++)
        {
            cin>>u>>v;
            V[v].push_back(u);
        }

        isImpossible = false;

        for(int i=1; i<=N && !isImpossible;i++)
            if(col[i]==WHITE){
                DFS(i);
            }

        if(isImpossible)
        {
            printf("IMPOSSIBLE\n");
            continue;
        }

        for(auto it:Ans)
            printf("%d\n",it);
        printf("\n");
    }

    return 0;
}

