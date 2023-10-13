

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
#define en "\n"

typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 15;

int k;
int ar[Size],in[7];
void go(int i,int c)
{
    if(c==6)
    {
        for(int j=0;j<5;j++)
            cout<<in[j]<<" ";
        cout<<in[5]<<en;
    }
    else
    {
        for(int j=i;j<k;j++)
        {
            in[c]=ar[j];
            go(j+1,c+1);
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("Bin.txt","r",stdin);
//    freopen("out.txt","w",stdout);

//    int tks,ks=1;
//    scanf("%d",&tks);
//    while(tks--)
//    {
////        printf("Case %d: ",ks++);
//    }

    int f=0;
    while(cin>>k && k)
    {
        if(f)
            cout<<en;

        for(int i=0;i<k;i++)
            cin>>ar[i];
        go(0,0);
        f=1;
    }

    return 0;
}
