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
const int Size = 100000;
const double EPS = 1e-7; ///1*10^-7
int N;

int myMove[100],m;

LL memo[Size];

LL go(int c)
{
    if(c==N){ deb(1);return 1;}
    if(c>N){deb(0) return 0;}

    if(memo[c] != -1)return memo[c];
    memo[c] = 0;
//    debug(memo[c]);
    for(int i=0;i<m;i++)
    {
        debug(memo[c],myMove[i],c);
        memo[c]+=go(c + myMove[i]);
        debug(memo[c]);
    }

    return memo[c];
}
int main()
{
//    freopen("dp1.in","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;
    int v;

    while(cin>>n>>m)
    {
        N = n;
        memset(memo, -1, sizeof memo);

        for(int i=0;i<m;i++)
        {
            cin>>myMove[i];
        }
        cout<<go(0)<<endl;
    }

    return 0;
}

