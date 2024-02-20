
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
#include<bitset>
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
const int Size = 1e5 + 5;

LL n,m;
LL ar[Size];
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
            cin>>ar[i];
        LL pre[n+1];
        LL suf[n+1];
        pre[0]=0;
        suf[n-1]=0;
        if(n>1){
            pre[1]=1;
            suf[n-2]=1;
        }
        for(int i=2,j=n-3;i<n && j>=0;i++,j--)
        {
                pre[i]=(llabs(ar[i]-ar[i-1])<llabs(ar[i-2]-ar[i-1]))?pre[i-1]+1:pre[i-1]+llabs(ar[i]-ar[i-1]);
                suf[j]=(llabs(ar[j]-ar[j+1])<llabs(ar[j+2]-ar[j+1]))?suf[j+1]+1:suf[j+1]+llabs(ar[j]-ar[j+1]);
        }
        cin>>m;
        LL a,b;
        for(int i=0;i<m;i++)
        {
            cin>>a>>b;
            if(a<=b)
                cout<<pre[b-1]-pre[a-1]<<en;
            else
                cout<<suf[b-1]-suf[a-1]<<en;
        }
//        printf("Case %d: ",ks++);
    }
    return 0;
}
