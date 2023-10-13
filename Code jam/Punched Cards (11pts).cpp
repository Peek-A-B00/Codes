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
const int Size = 101;
int r,c;
void solve()
{
    cin>>r>>c;
    for(int i=0;i<(2*r+1);i++){
        for(int j=0;j<c;j++)
        {
            if(i<=1 && j==0)
            {
                cout<<"..";
            }
            else if(i%2==0)
            {
                cout<<"+-";
            }
            else
            {
                cout<<"|.";
            }
        }
        if(i%2==0)
            cout<<"+"<<endl;
        else
            cout<<"|"<<endl;

    }
}
int main()
{
//    freopen("Code jam.in","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        printf("Case #%d:\n",ks++);
        solve();
    }


    return 0;
}
