
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


int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int lps[Size];
    string p="aaaaa";
    int lp=p.size();
    int k=0;
    lps[k]=0;
    int m=0;
    for(int j=1;j<lp;)
    {
        if(p[j]==p[k]){
            lps[j]=k+1;
            debug(j,k,lps[j]);
            k++,j++;
        }
        else{
            if(k!=0)
                k=lps[k-1];
            else
            {
                lps[j]=lps[k];
                debug(j,k,lps[j]);
                j++;
            }
        }

    }
    for(int i=0;i<lp;i++)
        if(m<lps[i])
            m=lps[i];
    deb(lp-m);
    string r=p.substr(0,m);
    string r1=p.substr(lp-m,m);
    if(r!=r1)
        cout<<r<<endl;
    else
        r="";
    printf("\n");

    return 0;
}
