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
int ar[Size];
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
        cin>>n;
        int a=0,b=0,r=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            a=max(a,ar[i]);
            b=min(b,ar[i]);
        }
        for(int i=1;i<n;i++)
        {
            if(ar[i]>ar[i-1]){
                r=(ar[i]+ar[i-1])/2;
                a=min(a,r);
                }
            else if(ar[i]<ar[i-1])
            {
                r=(ar[i]+ar[i-1]+1)/2;
                b=max(b,r);
            }
        }
//        deb(a);
        if(b>a)
            cout<<-1<<endl;
        else
            cout<<a<<endl;

//        printf("Case %d: ",ks++);
    }

//    while(cin>>)
//    {
////        printf("\n");
//    }

    return 0;
}
