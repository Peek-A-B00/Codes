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
const int Size = 2*1e5 + 5;

int n,k;
void solve(int ks)
{
    map<char,int>mp;
    cin>>n>>k;
    char a;
    for(int i =0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
    }
    int p=0,s=0;
    for(auto [x,y]:mp)
    {
        if(y>1)
        {
            p+=y/2;
            s+=y%2;
        }
        else
        {
            s++;
        }
    }
//    debug(s,p);
    n=n-k;
    if(n %2==0)
    {
        if(n<=2*p)
            cout<<"Yes"<<en;
        else cout<<"No"<<en;
    }
    else
    {
        s-=k;
        if(s<=1)cout<<"Yes"<<en;
        else cout<<"No"<<en;
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
//        printf("Case %d: ",ks++);
    }
//
//    while(1 == scanf("%d",&n) && n)
//    {
////        printf("\n");
//    }
    return 0;
}
