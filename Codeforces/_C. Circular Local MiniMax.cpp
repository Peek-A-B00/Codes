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
const int Size = 100010;

int n,ar[Size];
void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int f=0;
    if (n%2!=0){
        f=1;
        goto l1;
    }
    sort(ar,ar+n);
    for(int i=1;i<n/2;i++)
        if(ar[i]>=ar[n/2 + i] ||ar[i]>=ar[n/2 + i-1] )
            f=1;goto l1;
    l1:
    if(f==1)
        cout<<"No";
    else
    {
        cout<<"Yes"<<en;
        for(int i=0;i<n/2;i++)
            cout<<ar[i]<<" "<<ar[n/2 +i]<<" ";
    }
    cout<<en;


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
        solve();
//        printf("Case %d: ",ks++);
    }

//    while(cin>>)
//    {
////        printf("\n");
//    }

    return 0;
}
