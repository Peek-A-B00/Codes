#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int Size=1e4+11;
int n,m,k;
LL a[Size],b[11];
LL dp[Size][11][11][11];
LL flag[Size][11][11][11],f=0;

LL go(int i,int j,int in,int re)
{
    if(i==n && j==m) return 0;
    LL &r=dp[i][j][in][re];

    if(flag[i][j][in][re]==f)
        return r;

    flag[i][j][in][re]=f;

    r=-1e18;
    if(i<n)
    {
        r=max(r,go(i+1,j,in,re)+a[i]*(i+1+in-re));
        if(re<k)
            r=max(r,go(i+1,j,in,re+1));
    }
    if(j<m)
    {
        r=max({r,go(i,j+1,in+1,re)+b[j]*(i+1+in-re),go(i,j+1,in,re)});
    }
    return r;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("Dp.txt","r",stdin);

    int tsk;
    cin>>tsk;
    while(tsk--)
    {
        cin>>n>>m>>k;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
//        memset(dp,0,sizeof dp);
        sort(b,b+m);
        f++;
        cout<<go(0,0,0,0)<<"\n";
    }
    return 0;
}
