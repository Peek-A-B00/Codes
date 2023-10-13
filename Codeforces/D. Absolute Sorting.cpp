
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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    int n;
    int ar[Size];
    while(tks--)
    {
        cin>>n;
        int x=0;
        int y=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            x=max(x,ar[i]);
            y=min(y,ar[i]);
        }
        for(int i=1;i<n;i++)
        {
            if(ar[i]>ar[i-1]){
                int r=(ar[i]+ar[i-1])/2;
                x=min(x,r);
            }
            else if(ar[i]<ar[i-1]){
                int r=(ar[i]+ar[i-1]+1)/2;
                y=max(y,r);
            }
        }
        if(y>x)
            cout<<-1<<endl;
        else
            cout<<x<<endl;
//        printf("Case %d: ",ks++);
    }

//    while(cin>>)
//    {
////        printf("\n");
//    }

    return 0;
}
