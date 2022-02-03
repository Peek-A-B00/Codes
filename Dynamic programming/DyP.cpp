#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
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


typedef long long LL;
const int Size = 100;
const double EPS = 1e-7; ///1*10^-7

int ar[100];

int Max(int n)
{
    int c=0;
    int i=0;
    while(i<n-1)
    {
        int f=0;
        if(ar[i+1]<0 || ar[i+2]<0){
            f=1;
            if(ar[i+2]<ar[i+1]<0)
                c+=ar[i+1];
            else
            {
                i=i+1;
                c+=ar[i+2];
            }
        }
        if(f==0)
            c+=ar[i+1];
        i++;
    }
    return c;
}
int main()
{
    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int n,res;
    scanf("%d",&n);
    for(int i=0;i<n; i++)
        scanf("%d",&ar[i]);
    res=ar[0];
    res+=Max(n);
    printf("%d",res);

    return 0;
}
