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
const int Size = 200001;


int main()
{
    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    char str[Size];
    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        int n0=0,n1=0;
        scanf("%s",str);

        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]=='0')
                n0++;
            else
                n1++;
        }
        if(n0>n1)
            cout<<n1<<endl;
        else if(n0<n1)
            cout<<n0<<endl;
        else
            cout<<"0"<<endl;
//        printf("Case %d: ",ks++);
    }

    return 0;
}
