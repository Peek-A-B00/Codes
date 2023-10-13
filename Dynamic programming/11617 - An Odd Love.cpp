
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
const int Size = 101;
int w,h,e;
int dp[Size][Size];
int ar[Size][Size];

int go(int i,int j,int p)
{
    if(i>h || j-1<1 || j+1>w )
        return INT_MAX-1;
    if(ar[i][j]%2==0 && (i!=1 && j!=1))
    {
        return p;
    }
    int &r=dp[i][j];
    if(r>-1)
        return r;
    r=min(go(i+1,j,p+1),min(go(i,j-1,p+1),go(i,j+1,p+1)));
    return r;
}
int main()
{
    freopen("Dp.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        e=0;
        char c;
        cin>>w>>h;
        for(int i=1;i<=h;i++)
            for(int j=1;j<=w;j++){
                cin>>c;
                ar[i][j]=c-'0';
                if(ar[i][j]%2==0)
                    e++;
            }
        memset(dp,-1,sizeof dp);
        int r=go(1,1,0);
        printf("%d\n",r);
//        printf("Case %d: ",ks++);
    }

    return 0;
}
