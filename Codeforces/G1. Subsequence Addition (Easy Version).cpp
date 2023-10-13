
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
const int Size = 5010;

int n,ar[Size];
void solve()
{
    cin>>n;
    int m=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        m = max(m,ar[i]);
    }
    sort(ar,ar+n);
    int f=1;
    int sum = 1;
    for(int i=1,j=1;i<n;i++)
    {
        if(j<ar[i]){
            f=0;
            break;
        }
        if(j>ar[i])
            j=ar[i];
        sum+=j;
        j=sum;
    }
    if(!f || n==1 && m>1)
        cout<<"No"<<en;
    else
        cout<<"Yes"<<en;

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
          solve();
//        printf("Case %d: ",ks++);
    }

    return 0;
}
