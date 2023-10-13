
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
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
/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/


typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

//    int tks,ks=1;
//    cin>>tks;
////    scanf("%d",&tks);
//    while(tks--)
//    {
////        printf("Case %d: ",ks++);
//    }

    int n,a,b;
    while(cin>>n>>a>>b)
    {
        if(n==1 && a==b){
            cout<<1<<endl<<a<<":"<<b<<endl;
            continue;
        }
        int d=0;
        if(n>a+b)
            d=n-(a+b);
        n-=d;
        cout<<d<<endl;
        while(d)
            cout<<0<<":"<<0<<endl,d--;

        int i=1,f=0;
        if(b==a-n+1)
            i=2,f=1;
        for(i;i<n;i++)
        {
            if(a>0)
                cout<<1<<":"<<0<<endl,a--;
            else
                cout<<0<<":"<<1<<endl,b--;
        }
        if(f==1)
        {
            cout<<a<<":"<<0<<endl;
            cout<<0<<":"<<b<<endl;
        }
        else if(a>0 || b>0)
        cout<<a<<":"<<b<<endl;
//        printf("\n");
    }

    return 0;
}
