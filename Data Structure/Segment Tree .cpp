#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;
/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end())
    {

    }
*/
#define en "\n"

typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;
int n,q;
LL arr[Size],tree[4*Size];

void init(int node,int s,int e)
{
    if(s==e){
        tree[node]=arr[s];
        return;
    }
    int mid=(s+e)/2;
    int left=2*node;
    int right=left+1;
    init(left,s,mid);
    init(right,mid+1,e);
    tree[node]=tree[left]+tree[right];

    debug(node, tree[node]);
}

LL query(int node,int s,int e,int i,int j)
{
    if(s<i || e>j)
        return 0;
    if(s>=i && e<=j)
        return tree[node];

    int mid=(s+e)/2;
    int left=2*node;
    int right=2*node+1;
    LL p1=query(left,s,mid,i,j);
    LL p2=query(right,mid+1,e,i,j);

    return p1+p2;
}

void update(int node,int s,int e,int index,int newvalue)
{
     if(index<s||index>e)
        return;
     if(index==s&& index==e)
     {
         tree[node]=newvalue;
         return;
     }
     int mid=(s+e)/2;
     int left=2*node;
     int right=left+1;
     update(left,s,mid,index,newvalue);
     update(right,mid+1,e,index,newvalue);
     tree[node]=tree[left]+tree[right];
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

//    while(1==scanf("%d",&n))
//    {
        cin>>n>>q;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        int s=1;
        init(1,1,n);
        for(int i=0; i<q; i++)
        {
            int f,a,b;
            cin>>f>>a>>b;
            if(f==2){
                cout<<query(s,s,n,a+1,b)<<en;
            }
            else
                update(s,s,n,a+1,b);
//        }
//        printf("\n");
    }

    return 0;
}
