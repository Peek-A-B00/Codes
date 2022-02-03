#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

//For Debugging
#define debug(a...)          {cout<<" #--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;


#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
typedef long long LL;
const double PI = acos(-1);
const double EPS = 1e-7; ///1*10^-7


int minCoins(int coin[], int N, int m)
{
    if (m == 0)
        return 0;

    int res = INT_MAX;

    for (int i=0; i<N; i++)
    {
        if (coin[i] <= m)
        {
            int resf = 1 + minCoins(coin, N, m-coin[i]);

            res = min(resf , res);

        }
    }
    return res;
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
int n,k,coin[50];
    while(scanf("%d%d",&n,&k) ==2)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&coin[i]);
        }
        int ans= minCoins(coin,n,k);
        printf("%d\n",ans);
    }
    return 0;
}
