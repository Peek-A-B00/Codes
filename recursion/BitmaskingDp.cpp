#include<bits/stdC++.h>
using namespace std;

#define deb(a)  cout<<__LINE__<<"# "<<#a<<" -> "a<<endl;
int n;
int ar[20][20];
int dp[(1<<15)][16];
int go(int msk,int i)
{
    if(i==n)
        return 0;
    int &r=dp[msk][i];
    if(r>-1)
        return r;
    r = INT_MAX-1;
    for(int j=0;j<n;j++)
        if(msk&(1<<j))
            r=min(r,go(msk^(1<<j),i+1)+ar[i][j]);
    return r;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>ar[i][j];
    memset(dp,-1,sizeof dp);
    cout<<go((1<<n)-1,0); /// every digit is 1 in 2^N -1


    return 0;
}
/*
4
9 2 7 8
6 4 3 7
5 8 1 8
7 6 9 4

->13
*/
