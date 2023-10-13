
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
const int Size = 1010;
int n;
map<int,int>mp;
void solve()
{
    mp.clear();
    cin>>n;
    set<int>st;
    int s=n*(n-1)/2;
    int m = INT_MIN;
    for(int i=0;i<s;i++){
        int v;
        cin>>v;
        mp[v]++;
        m=max(m,v);
    }
    cout<<m<<" ";
    int c=n-1;
    for(auto it:mp)
    {
        int x = it.first;
        int y = it.second;
        if(y<c)
        {

            cout<<x<<" ";
            continue;
        }
        while(y>=c && c>0)
        {
            cout<<x<<" ";
            y-=c;
            c--;
        }
    }
    cout<<en;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    string s;
    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
        solve();
//        printf("Case %d: ",ks++);
    }

    return 0;
}
