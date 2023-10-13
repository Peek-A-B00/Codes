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
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 1510;

LL ugly[Size],x,y,z,a,b,c,n;

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    ugly[1]=a=b=c=n=1;
    while(n!=1500)
    {
        x=2*ugly[a];
        y=3*ugly[b];
        z=5*ugly[c];
        ugly[++n]=min(x,min(y,z));
        if(ugly[n]==x)
            a++;
        if(ugly[n]==y)
            b++;
        if(ugly[n]==z)
            c++;
    }
    cout<<"The 1500'th ugly number is "<<ugly[1500]<<"."<<endl;

    return 0;
}
