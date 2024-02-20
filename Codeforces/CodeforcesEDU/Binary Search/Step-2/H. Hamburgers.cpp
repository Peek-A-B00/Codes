
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

string s;
LL ar[4][4];
LL cost;
LL m;
LL Count()
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='S')
            ar[0][1]++;
        else if(s[i]=='B')
            ar[0][0]++;
        else if(s[i]=='C')
            ar[0][2]++;
    }
    LL c = 0;
    for(int i =0;i<3;i++)
        c+=ar[0][i]*ar[2][i];
    return c;
}

LL check(LL n)
{
    LL tk=0;
    for(int i=0;i<3;i++)
        if(ar[0][i])
        {
            LL tem = n*ar[0][i];
            if(ar[1][i]<tem)
                tk += (tem-ar[1][i])*ar[2][i];
        }
    return tk;
}
LL fun()
{
    LL res = 0;
    LL r=0,l=0;
    for(int i=0;i<3;i++)
        if(ar[0][i]){
            int v = (ar[1][i]%ar[0][i]==0)? 0:1;
            r = max(r,(ar[1][i]/ar[0][i])+v);
//            l = min(l,ar[1][i]/ar[0][i]+v);
        }
    r+=1;
    while(r>l)
    {
        LL mid = l+(r-l)/2;
        if(check(mid)<=m){
            l=mid+1;
            res = mid;
        }
        else
            r=mid;
    }
    return res+(m-check(res))/cost;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("out.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    cin>>s;
    for(int i=1;i<3;i++)
        for(int j=0;j<3;j++){
            cin>>ar[i][j];
            ar[0][j]=0;
        }
    cin>>m;
    cost = Count();
    cout<<fun()<<en;

    return 0;
}
