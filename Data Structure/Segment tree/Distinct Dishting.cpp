
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
const int Size = 100002;

LL ar[Size];
LL sgt[Size];

void build(int nod, int ts,int tf)
{
    if(ts==tf){
        if(ar[ts]%3==0)
            sgt[nod]=ar[ts];
        else
            sgt[nod]=0;

        return;
    }

    int mid = (ts+tf)/2;
    int l=nod*2, r= l+1;

    build(l,ts,mid);
    build(r,mid+1,tf);

    sgt[nod]=sgt[l] + sgt[r];
}
void update(int nod, int ts, int tf, int in, int val)
{
    if(ts==tf){
        if(val%3==0)
            sgt[nod]=val;
        else
            sgt[nod]=0;
        return;
    }

    int mid = (ts+tf)/2;
    int l = nod*2, r = l+1;

    if(in<=mid)
        update(l,ts,mid,in,val);
    else
        update(r,mid+1,tf,in,val);

    sgt[nod] = sgt[l] + sgt[r];

}
LL query(int nod, int ts,int tf,int l,int r)
{
    if(l>r) return 0;

    if(ts==l && tf==r)
        return sgt[nod];

    int mid =(ts+tf)/2;
    int L = nod*2, R = L+1;

    LL res = query(L,ts,mid,l,min(r,mid)) + query(R,mid+1,tf,max(l,mid+1),r);

    return res;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int n,q;
    cin>>n>>q;

    for(int i=1;i<=n;i++)
        cin>>ar[i];

    build(1,1,n);

    int f,a,b;
    for(int i=0;i<q;i++)
    {
        cin>>f>>a>>b;
        if(f==0)
            update(1,1,n,a,b);
        else
            cout<<query(1,1,n,a,b)<<en;
    }

    return 0;
}

