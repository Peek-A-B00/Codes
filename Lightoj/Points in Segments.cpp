
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

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 100010;
int n,q;
int ar[Size];
int Upper_bound(int x)
{
    int l=0,r=n;
    while(r>l)
    {
        int m=l+(r-l)/2;
        if(x>=ar[m])
            l=m+1;
        else
            r=m;
    }
    return l;
}
int Lower_bound(int x)
{
    int l=0,r=n;
    while(r>l)
    {
        int m=l+(r-l)/2;
        if(x>ar[m])
            l=m+1;
        else
            r=m;
    }
    return l;
}
void solve(int ks)
{
    cin>>n>>q;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        if(i==0)
            cout<<"Case"<<" "<<ks<<":"<<en;
        int x=Lower_bound(a);
        int y=Upper_bound(b);
//        debug(x,y);
        cout<<y-x<<en;
    }


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
    }

    return 0;
}
