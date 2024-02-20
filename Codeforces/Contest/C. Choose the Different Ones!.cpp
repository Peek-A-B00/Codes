
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

LL a[Size];
LL b[Size];
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
        int n,m,k;
        cin>>n>>m>>k;
        set<int>s1;
        set<int>s2;
        int c=0;
//        int d=0
        int v;
        for(int i=0;i<n;i++)
        {
            cin>>v;
            if(v<=k){
                s1.insert(v);
//                deb(v);
            }
        }
        for(int i=0;i<m;i++)
         {
            cin>>v;
            if(v<=k)
                s2.insert(v);
         }
         for(auto i:s2)
        {
            if(s1.find(i)!=s1.end()){
                c++;
            }
        }
        k=k/2;
        int l=s1.size();
        int d=s2.size()-c;
//        debug(d,c);
        if(l>=k && d>=k )
            cout<<"Yes"<<en;
        else if(l>k && d<k)
        {
//            debug(k,d,c,l);
            int t=d+c;
            if(t>=k && l-c+(t-k)>=k ){
                cout<<"Yes"<<en;
            }
            else
                cout<<"No"<<en;

        }
        else
            cout<<"No"<<en;


//        printf("Case %d: ",ks++);
    }
////
//    while(1 == scanf("%d",&n) && n)
//    {
////        printf("\n");
//    }
    return 0;
}
