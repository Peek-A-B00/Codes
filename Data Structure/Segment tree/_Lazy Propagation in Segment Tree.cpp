
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

#define end "\n"
#define sp(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;

int n=9,ar[]= {1,2,3,5,7,2,8,9,11};

int tree[Size*4] = {0};
int lazy[Size*4] = {0};

void build(int nod,int st,int en)
{
    if(st==en){
        tree[nod]=ar[st];
        return;
    }
    int mid = (st+en)/2;
    int l = nod*2,r=l+1;

    build(l,st,mid);
    build(r,mid+1,en);

    tree[nod] = tree[l] + tree[r];
}
void update(int nod,int st, int en, int l,int r,int val)
{
    if(lazy[nod]!=0)
    {
        tree[nod] += (en-st+1)*lazy[nod];
        if(st=en)
        {
            lazy[nod*2] += lazy[nod] ;
            lazy[nod*2 + 1] += lazy[nod];
        }

        lazy[nod] = 0;
    }
    if(st>l || en<r)
        return;

    if(st<=l && en>=r)
    {
        tree[nod] +=(en-st+1)*val;
        if(st != en)
        {
            lazy[nod*2] +=val;
            lazy[nod*2 + 1] +=val;
        }
        return;
    }
    int mid =(st+en)/2;

    update(nod*2,st,mid,l,r,val);
    update(nod*2 + 1,mid+1,en,l,r,val);

    tree[nod] = tree[nod*2] + tree[nod*2 + 1];
}
int query(int nod,int st, int en, int l, int r)
{
    if(lazy[nod] != 0)
    {
        tree[nod] +=(en-st+1)*lazy[nod];
        if( st != en)
        {
            lazy[nod*2] += lazy[nod];
            lazy[nod*2 + 1] += lazy[nod];
        }
        lazy[nod] = 0;
    }
    if(l>r)
        return 0;
    if(st == l && en ==r)
        return tree[nod];

    int mid=(st+en)/2;

    LL res = query(nod*2,st,mid,l,min(r,mid))+ query(2*nod +1,mid+1,en,max(l,mid+1),r);

    return res;

}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int q;
    while(1==scanf("%d",&q) && q)
    {
        build(1,1,n);
    }

    return 0;
}
