
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
const int Size = 100005;

int n,q;
LL ar[Size],tree[4*Size];

void Build (int node,int l,int r)
{
    if(l==r)
    {
        tree[node] = ar[l];
        return;
    }
    int m = (l+r)/2;
    int L = node*2, R = L+1;

    Build(L,l,m);
    Build(R,m+1,r);

    tree[node] = tree[L] + tree[R];
//    debug(node,tree[node]);

}
LL Sum (int node,int tl,int tr,int l, int r)
{
    if(l>r ) return 0;
    if(tl==l && tr==r)
        return tree[node];

    int m = (tl+tr)/2;
    int L = node*2, R = L+1;

    LL res = Sum(L,tl,m,l,min(r,m)) + Sum(R,m+1,tr,max(l,m+1),r);

    return res;

}
void Update(int node,int tl,int tr, int ind,int val)
{
    if(tl==tr )
        tree[node]=val;
    else
    {
        int m = (tl+tr)/2;
        int L =node*2, R =L +1;

        if(ind<=m)
            Update(L,tl,m,ind,val);
        else
            Update(R,m+1,tr,ind,val);

        tree[node] = tree[L] + tree[R];
//        debug(node,tree[node]);

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

//    while(cin>>n>>q)
//    {

        cin>>n>>q;
        for(int i=1; i<=n; i++)
            cin>>ar[i];

       /// Segment Tree Building
       int s=1;
        Build(s,s,n);

        ///Query
        for(int i=0; i<q; i++)
        {
            int f,a,b;
            cin>>f>>a>>b;
            if(f==2){
                cout<<Sum(s,s,n,a+1,b)<<en;
            }
            else
                Update(s,s,n,a+1,b);
        }
//    }

    return 0;
}
