

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
#define spf(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/

typedef long long ll;
const ll MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 100005;

ll n,a,b;
ll ar[Size];
void solve(int ks)
{
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    ll c=0;
    sort(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        ll l=i+1;
        ll r = n;
        ll x = a-ar[i];
        while(r>l)
        {
            int m = l+(r-l)/2;
            if(x>ar[m])
                l=m+1;
            else{
//                ans1=m;
                r=m;
            }
        }
        int ans1=l;
        l=i+1;
        r = n;
        x = b-ar[i];
        while(r>l)
        {
            int m = l+(r-l)/2;
            if(x>=ar[m]){
//                ans2=m;
                l=m+1;
            }
            else
                r=m;
        }
        int ans2 =l;
        c+=ans2-ans1;
    }
    cout<<"Case "<<ks<<": "<<c<<en;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
          solve(ks++);
//        printf("Case %d: ",ks++);
    }


    return 0;
}
