
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
const int Size = 2*1e5 +5;

string ar[Size];

string multi(string a,string b)
{
    int m = a.size() - 1, n = b.size() - 1, carry = 0;
    string product;
    for (int i=0; i<=m+n || carry; ++i) {
        for (int j=max(0, i-n); j<=min(i, m); ++j)
            carry += (a[m-j] - '0') * (b[n-i+j] - '0');
        product += carry % 10 + '0';
        carry /= 10;
    }
    reverse(begin(product), end(product));
    return product;
}
string fun(string s,LL d)
{
    string ans;

    int idx = 0;
    LL temp = s[idx] - '0';
    while (idx<(s.size()-1)&&temp < d)
        temp = temp * 10 + (s[++idx] - '0');

    while (s.size()-1>= idx) {
        ans += (temp / d) + '0';
        temp =  (temp % d)* 10 + s[++idx] - '0';
    }

    if (ans.length() == 0)
        return "0";
    return ans;
}
LL fun2(string s,LL d)
{
    int idx = 0;
    LL r=0;
    LL temp = s[idx] - '0';
    while (idx<(s.size()-1)&&temp < d)
        temp = temp * 10 + (s[++idx] - '0');

    while ((s.size()-1 )>= idx) {
        r=(temp % d);
        temp =  r* 10 + s[++idx] - '0';
    }
    return r;
}
void solve(int ks)
{
    int n,m;
    cin>>n>>m;
    string  ans;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i!=0)
            ans=multi(ar[i],ans);
        else
            ans=ar[i];
    }
    string s;
    cin>>s;
    char c;
    int i=0,j=n-1;
    for(int k=0;k<n;k++)
    {
        cout<<fun2(ans,m)<<" ";
        if(s[k]=='L')
        {
            LL num=stoi(ar[i]);
            ans=fun(ans,num);
            i++;
        }
        else
        {
            LL num=stoi(ar[j]);
            ans=fun(ans,num);
            j--;
        }
//        debug(c,ans);
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
          cout<<en;
//        printf("Case %d: ",ks++);
    }
////
//    while(1 == scanf("%d",&n) && n)
//    {
////        printf("\n");
//    }
    return 0;
}
