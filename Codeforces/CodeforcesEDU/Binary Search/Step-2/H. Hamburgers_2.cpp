
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
const double EPS = 1e12; ///1*10^-7
const double pi = 2*acos(0.0);
const int Size = 101;

string s;
LL ar[4][4];
LL m;
void Count()
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
}

LL check(LL n)
{
    LL tk=0;
    for(int i=0;i<3;i++)
        if(ar[0][i])
        {
            LL tem = n*ar[0][i];
            tem =ar[1][i]-tem;
            if(tem<0)
            {
                tk += abs(tem)*ar[2][i];
            }
//            debug(i,tem,tk);
        }
    return tk;
}
LL fun()
{
    LL res = 0;
    LL r=1,l=0;
    while(check(r)<=m) r*=2;
    while(r>l)
    {
        LL mid = l+(r-l)/2;
        if(check(mid)<=m){
            res = mid;  /// because if(com==m) then l+1 is not correct
            l=mid+1;
        }
        else
            r=mid;
    }
    return res;
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
    Count();
    cout<<fun()<<en;

    return 0;
}

