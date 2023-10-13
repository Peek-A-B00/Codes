
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
const int Size = pow(10,6);
struct color
{
    int c,m,y,b;
};
color arr[5];
int mini[5];

void solve()
{
    int n=3;
    for(int i=1;i<5;i++)
        mini[i]=Size;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i].c>>arr[i].m>>arr[i].y>>arr[i].b;
        if(mini[1]>arr[i].c)
            mini[1]=arr[i].c;
        if(mini[2]>arr[i].m)
            mini[2]=arr[i].m;
        if(mini[3]>arr[i].y)
            mini[3]=arr[i].y;
        if(mini[4]>arr[i].b)
            mini[4]=arr[i].b;
    }
    long long sum=0;
    for(int i=1;i<5;i++)
        sum+=mini[i];
    if(sum<Size)
        cout<<"IMPOSSIBLE";
    else
    {
        sum=0;
        for(int i=1;i<5;i++)
        {
            sum+=mini[i];
            if(sum<Size)
                cout<<mini[i]<<" ";
            else if(sum==Size){
                cout<<mini[i];
                if(i<4)
                    for(i;i<4;i++)
                        cout<<" "<<"0";
                break;
            }
            else{
                int a=sum-Size;
                mini[i]-=a;
                cout<<mini[i];
                if(i<4)
                    for(i;i<4;i++)
                        cout<<" "<<"0";
                break;
            }
        }
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
        printf("Case #%d: ",ks++);
        solve();
        printf("\n");
    }

    return 0;
}
