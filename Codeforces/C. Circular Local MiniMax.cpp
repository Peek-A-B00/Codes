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
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;
/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end())
    {

    }
*/


typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 10001;

int n;
vector<LL>v;

void solve()
{
    if(n&1)
    {
        printf("NO\n");
        return ;
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n/2;i++)
        if(v[i]==v[i+n/2-1])
        {
            printf("NO\n");
            return;
        }
    printf("YES\n");
    for(int i=0; i<n/2;i++)
        cout<<v[i]<<" "<<v[i+n/2]<<" ";
    cout<<endl;
}
int main()
{
//    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        v.clear();
        cin>>n;
        for(int i=0;i<n; i++)
        {
            int m;
            cin>>m;
            v.push_back(m);
        }
        solve();
//        printf("Case %d: ",ks++);
    }

    return 0;
}
