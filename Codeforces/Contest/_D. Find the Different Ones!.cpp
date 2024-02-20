
//#include<bits/stdC++.h>
#include <stdio.h>
#include <float.h>
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
const double pi = 2*acos(0.0);
const int Size = 2*1e5 +5;

LL ar[Size];
int flag[Size];
LL n,q;
void fun(int l,int r)
{
    bool f=0;
    if(flag[l-1] ==flag[r-1])f=1;
    else if(flag[l-1]==l && flag[r-1]==r){
        if(ar[l-1]!=ar[r-1])
            cout<<flag[l-1]<<" "<<flag[r-1]<<en;
        else
            cout<<l<<" "<<flag[r-2]<<en;
    }
    else if(flag[r-1]!=r)
    {
        if(ar[l-1]!=ar[r-1])
            cout<<l<<" "<<flag[r-1]<<en;
        else
            cout<<l<<" "<<flag[flag[r-1]-2]<<en;
    }
    if(f==1)
        cout<<-1<<" "<<-1<<en;
//    puts("+++++++++++++++++");
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
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(i==0)
                flag[i]=i+1;
            else if(ar[i]!=ar[i-1])
                flag[i]=i+1;
            else
                flag[i]=flag[i-1];
        }
        cin>>q;
        for(int i=0;i<q;i++)
        {
            int l,r;
            cin>>l>>r;
            fun(l,r);
        }
//        deb(ks++);
//        printf("Case %d: ",ks++);
    }
////
//    while(1 == scanf("%d",&n) && n)
//    {
////        printf("\n");
//    }
    return 0;
}
