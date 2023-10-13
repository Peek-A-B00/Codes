
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
const int Size = 101;
int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
int n,m;
string x,s;
void solve(int ks)
{
    cin>>n>>m;
    cin>>x>>s;
    int c=0;
    if(n>=m)
    {
        int r= isSubstring(s,x);
        if(r!=-1)
            cout<<0<<en;
        else
        {
            x+=x;
            r= isSubstring(s,x);
            if(r!=-1)
                cout<<1<<en;
            else
                cout<<-1<<en;
        }

    }
    else
    {
        while(n<m)
        {
            x+=x;
            n+=n;
            c++;
        }
        int r= isSubstring(s,x);
        if (r!=-1)
            cout<<c<<en;
        else
        {
            x+=x;
            c++;
            r= isSubstring(s,x);
            if (r!=-1)
                cout<<c<<en;
            else
                cout<<-1<<en;
        }

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
