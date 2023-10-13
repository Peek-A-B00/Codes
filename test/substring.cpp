
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
const int Size = 101;

int lps[Size];
string t,p;
int n;

void prefix()
{
    int j=0;
    lps[j]=0;
    for(int i=0;i<2*n;)
    {
        if(t[j]==t[i])
        {
            lps[i]=j+1;
            i++;
            j++;
        }
        else{
            if(j!=0)
                j=lps[j-1];
            else
            {
                lps[i]=j;
                i++;
            }
        }
    }
}
int kmp()
{
    int j=0,i;
    for(i=0;i<2*n;)
    {
        if(p[j]==t[i])
            i++,j++;
        else{
            if(j!=0)
                j=lps[j-1];
            else
                i++;
        }
        if(j==n)
            break;
    }
    return i-n;

}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    while(1==scanf("%d",&n))
    {
        cin>>t>>p;
        t+=t;
        int ans=kmp();
        if(ans==n&& ans==0)
            printf("-1\n");
        else
            printf("%d\n",n-ans);
    }

    return 0;
}
