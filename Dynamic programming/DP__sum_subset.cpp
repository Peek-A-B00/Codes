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
int n=7;
int DP[100010];

int go(int sum)
{
    //printf("%d\n",sum);
    if(sum==n)
        return 1;
    if(sum>n)
        return 0;
    if(DP[sum]!=-1)
        return DP[sum];
    return DP[sum]=go(sum+1)+go(sum+5)+go(sum+7);

}
int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    memset(DP,-1,sizeof(DP));
    int ans = go(0);

    printf("%d\n",ans);


    return 0;
}
