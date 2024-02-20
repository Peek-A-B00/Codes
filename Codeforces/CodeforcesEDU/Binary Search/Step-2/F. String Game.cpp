
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
const double pi = 2*acos(0.0);
const int Size = 101;

string s,p;

bool go(int n,int ar[])
{
    int l=s.size(),m = p.size();
    if(l-n<m)
        return 0;

    vector<bool>f(l,0);

    for(int i=0;i<n;i++)
        f[ar[i]-1]=1;

    int j=0;
    for(int i=0;i<l && j<m;i++){
        if(f[i]!=1 && s[i]==p[j])
            j++;
    }
    if(j==m)
        return 1;

    return 0;
}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    cin>>s>>p;
    int n=s.size();
    int ar[n+1];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    LL l=0,r=n;
    LL ans=0;
    while(r>l)
    {
        LL mid = l+(r-l)/2;
        if(!go(mid,ar))
            r=mid;
        else{
            if(ans<mid)
                ans=mid;
            l=mid+1;
        }
    }
    cout<<ans<<en;
    return 0;
}
