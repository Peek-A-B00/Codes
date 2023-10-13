

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
const int Size = 1010;

LL ar[Size];
int n;
LL dp[Size][Size];
LL sum=0;

LL go(int i,int j)
{
    if(i == j)
        return 0;
    if(i>j || j<i)
        return -MOD;

    LL &r = dp[i][j];

    if(r != -1)
        return r;

    if(ar[i]>=ar[j]){
        i+=1;
    }
    else if(ar[j]>ar[i]){
        j-=1;
    }

    r=max(go(i+1,j)+ar[i],go(i,j-1)+ar[j]);
    return r;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("test.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int ks=1;
//    cin>>tks;
////    scanf("%d",&tks);
//    while(tks--)
//    {
////        printf("Case %d: ",ks++);
//    }

    while(cin>>n && n)
    {
        if(ks != 1){
            cout<<en;
        }

        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        memset(dp,-1,sizeof dp);

        LL r = max(go(1,n-1)+ar[0],go(0,n-2)+ar[n-1]);

        r = 2*r - sum;

        cout<<"In game "<<ks++<<", the greedy strategy might lose by as many as "<<r<<" points.";

//        printf("\n");
    }

    return 0;
}
