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
/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/


typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 2*1e5+10;

int n;
LL ar[Size];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
        cin>>n;
        LL sum=0,neg=0,m=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]<0){
                neg+=1;
                ar[i]=-ar[i];
            }
            m=min(m,ar[i]);
            sum+=ar[i];
        }
//        debug(m,neg);
        if(neg & 1) sum-=2*m;
        cout<<sum<<endl;
//        printf("Case %d: ",ks++);
    }

//    while(cin>>)
//    {
////        printf("\n");
//    }

    return 0;
}
