

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
const int Size = 8000;


LL dp[Size];
int ar[]={1,5,10,25,50};
int n;
int main()
{
//    freopen("Dp.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    while(1==scanf("%d",&n))
    {
        if(n<=0){
            printf("0\n");
           continue;}

        memset(dp,0,sizeof dp);
        dp[0]=1;
        for(int i=0;i<5;i++)
            for(int j=ar[i];j<=n;j++)
                dp[j] +=dp[j-ar[i]];

        printf("%lld\n",dp[n]);
    }

    return 0;
}

