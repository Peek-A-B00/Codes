
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
#include<set>
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
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 10000+10;
const LL oo = 1000000007;///1e9+7

LL n,m,k;

//LL dp[Size][20][20][Size];

 go(LL *a,LL *b,LL i,LL j,LL k,LL l){
    if(i==n || j==m ||k==0)
        return 0;
    if(i>n || j>m ||k<0)
        return -oo;
//    LL &r=dp[i][j][k][l];
//    if(r>-1)
//        return r;
    LL w=go(a,b,i+1,j,k,l+1)+a[i]*l;
    LL x=go(a,b,i,j+1,k,l+1)+b[j]*l;
    LL y=go(a,b,i+1,j,k--,l);
    LL z=go(a,b,i,j+i,k,l);
    return max(max(w,x),max(y,z));

}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
        LL a[Size];
        LL b[20];
        cin>>n>>m>>k;
        for(LL i=0;i<n;i++)
            cin>>a[i];

        for(LL i=0;i<m;i++)
            cin>>b[i];
//        memset(dp,-1,sizeof(dp));
        cout<<go(a,b,0,0,k,1)<<endl;




//        printf("Case %d: ",ks++);
    }

//    while(cin>>)
//    {
////        printf("\n");
//    }

    return 0;
}
