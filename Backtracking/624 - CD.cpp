
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
const int Size = 21;

int n,k;
int ar[Size];
vector<int>v;

LL go(int i,int c)
{
    if(c<=0 || i<0) return 0;
    LL a=0;
    if(c>=ar[i])
        a=go(i-1,c-ar[i])+ar[i];
    LL b=go(i-1,c);
    if(a>b)
    {
        v.push_back(ar[i]);
        return a;
    }
    else
        return b;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("Bin.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    while(cin>>n>>k)
    {
        for(int i=0;i<k;i++)
            cin>>ar[i];
        v.clear();
        cout<<go(k-1,n)<<en;
//        for(auto i:v)
//            cout<<i<<" ";
//        cout<<en;
//        printf("\n");
    }

    return 0;
}
