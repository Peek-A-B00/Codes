
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

LL n;
LL ar[Size];

LL go(int n)
{
    vector<LL>v;
    v.push_back(ar[0]);
    for(int i=1;i<n;i++)
    {
        if(ar[i]>v.back())
            v.push_back(ar[i]);
        else
        {
            int low=lower_bound(v.begin(),v.end(),ar[i])-v.begin();
            v[low]=ar[i];
        }
    }
    return v.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cout<<go(n)<<en;
    return 0;
}
