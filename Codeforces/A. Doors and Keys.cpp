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


int main()
{
//    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    char ch;
    int n,r,g,b,w;
    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        w=0;
        r=0,g=0,b=0;
        for(int i=0;i<6;i++){
            cin>>ch;
            if(ch=='r')
                r++;
            if(ch=='g')
                g++;
            if(ch=='b')
                b++;
            if(ch=='R'&&r==0 || ch=='G'&&g==0 ||ch=='B'&&b==0)
                w=1;
        }
        if(w==0)
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;
}

