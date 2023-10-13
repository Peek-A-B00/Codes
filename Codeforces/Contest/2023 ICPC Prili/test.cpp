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

LL n,p,k;
void solve(int ks)
{
    cin>>n>>p>>k;
    LL nr=0;
    for(int i=1;i<=n-p+1;i++)
        nr+=p;

    if(k>nr)
    {
        cout<<"Case "<<ks<<": Invalid"<<en;
    }
    else
    {
        LL clr=0,cle=0;
        int f=0;
        LL c=0;
        for(int i=n;i>p-1 && f!=1;i--){
            for(int j=i-1,ki=0;ki<p;ki++,j--)
            {
                deb(c);
                if(c==k)
                {
                    deb(k);
                    deb(c)
                    clr = i;
                    cle = j;
                    f=1;
                    break;
                }
                c++;
            }
        }
        deb(c);
        cout<<clr<<"   "<<cle<<en;
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

    return 0;
}
