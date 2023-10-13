
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
const int Size = 20;
int n,ar[Size],ks=1;
void solve()
{
    cin>>n;
    memset(ar,0,sizeof ar);
    for(int j=0;j<n;j++)
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            if(ar[i]<m)
                ar[i]=m;
        }
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=ar[i];
    cout<<"Case "<<ks++<<": "<<sum<<en;

}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
          solve();
//        printf("Case %d: ",ks++);
    }

//    while(cin>>)
//    {
////        printf("\n");
//    }

    return 0;
}
