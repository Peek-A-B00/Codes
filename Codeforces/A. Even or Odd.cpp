#include<bits/stdc++.h>
using namespace std;

#define deb(a)  cout<<__LINE__<<"# "<<#a<<"->"<<a<<endl;

#define debug(a...) {cout<<__LINE__<<"#-->";dbg,a;cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator,(const T v)
    {
        cout<<v<<" ";
        return *this;
    }
}dbg;

typedef long long LL;
typedef double db;
const LL MOD=1e9+7;
const int sz=2*1e6+10;

LL Od[sz];
LL Ev[sz];

LL c=1;
LL go(LL i)
{
    if(i<2)
        return c;
    if(i%2==1)
        c++;
    go(i/2);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
//    freopen("in.txt","r",stdin);
    int tsk,ks=0;
    LL n,q;
    while(cin>>n)
    {
        LL v, e=0,o=0;
        for(int i=0;i<n;i++)
        {
            cin>>v;
            if(go(v) & 1)
            {
                Od[i]=++e;
                Ev[i]=o;
            }
            else
            {
                Od[i]=e;
                Ev[i]=++o;
            }
            c=1;
        }
        cin>>q;
        for(LL i=0;i<q;i++)
        {
            LL j,k;
            cin>>j>>k;
            if(j==1)
            {
                cout<<Ev[k-1]<<" "<<Od[k-1]<<"\n";
                continue;
            }
            cout<<Ev[k-1]-Ev[j-2]<<" "<<Od[k-1]-Od[j-2]<<"\n";
        }


    }

    return 0;

    }
