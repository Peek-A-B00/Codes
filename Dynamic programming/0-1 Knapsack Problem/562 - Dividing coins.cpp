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
const int Size = 101;

int m;
int ar[Size];
int dp[Size][2];
int p1=0,p2=0;
int dif(int a,int b)
{
    return (a>b)? a-b : b-a;
}

int go(int n,int k)
{
    if(n==0)
        return 0;
    int &r=dp[n][k];
    if(r>-1)
        return r;

    return r;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("0 1.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        cin>>m;
        for(int i=0;i<m;i++)
            cin>>ar[i];
        memset(dp,-1,sizeof dp);

        int a=go(m,0);
        cout<<a<<endl;
//        printf("Case %d: ",ks++);
    }

//    while(1==scanf("",&))
//    {
//        printf("\n");
//    }

    return 0;
}
