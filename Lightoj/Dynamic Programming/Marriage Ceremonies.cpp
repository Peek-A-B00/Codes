#include<bits/stdc++.h>
using namespace std;

#define en endl;
const int Size=17;
typedef long long LL;

int n;
int ar[Size][Size];
LL dp[(1<<Size)][Size];
LL go(int msk, int i)
{
    if(i==n)
        return 0;
    LL &r =dp[msk][i];
    if(r>-1)
        return r;
    r=0;
    for(int j=0;j<n;j++)
        if(msk&(1<<j))
            r=max(r,go(msk^(1<<j),i+1)+ar[i][j]);
    return r;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tsk;cin>>tsk;
    int ks=1;
    while(tsk--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>ar[i][j];
        memset(dp,-1,sizeof dp);
        cout<<"Case "<<ks++<<": "<<go((1<<n)-1,0)<<en;
    }
    return 0;
}
