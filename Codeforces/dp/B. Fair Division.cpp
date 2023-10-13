
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
//const int sz=50005;

int n,av;
int  ar[Size];
int dp[Size][1000];

int go(int i,int w)
{
    if(w==av)
        return 1;
    if(w>av ||i>n-1)
        return 0;
    int &r=dp[i][w];
    if(r>-1)
        return r;
    r=max(go(i+1,w+ar[i]),go(i+1,w));
    return r;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("dp.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
//    scanf("%d",&tks);
    cin>>tks;
    while(tks--)
    {
        cin>>n;
        int s=0;
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
            s+=ar[i];
        }
        if(s&1)                 /// s%2 !=0
        {
            cout<<"NO"<<endl;
            continue;
        }
        memset(dp,-1,sizeof dp);
        av=s/2;

        if(go(1,0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
//        printf("Case %d: ",ks++);
    }

//    while(1==scanf("",&))
//    {
//        printf("\n");
//    }

    return 0;
}
