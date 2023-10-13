
//#include<bits/stdC++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iomanip>

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

#define en "\n"
#define sp(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;

int n;
int dp[1111][1111][3];
int ar[1111];
int fun(int i,int j,int p){
    if(i>j)return 0;
    int &rf=dp[i][j][p];
    if(rf!=-1)return rf;
    if(p==1){
        return rf=max(fun(i+1,j,2)+ar[i],fun(i,j-1,2)+ar[j]);
    }else{
        if(ar[i]>=ar[j]){
            return rf=fun(i+1,j,1);
        }else{
            return rf=fun(i,j-1,1);
        }
    }
    return rf;

}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

//    int tks,ks=1;
//    cin>>tks;
////    scanf("%d",&tks);
//    while(tks--)
//    {
////        printf("Case %d: ",ks++);
//    }

    while(cin>>n)
    {
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sum+=ar[i];
        }
        memset(dp,-1,sizeof dp);
        cout<<2*fun(0,n-1,1)-sum<<"\n";
    }

    return 0;
}
