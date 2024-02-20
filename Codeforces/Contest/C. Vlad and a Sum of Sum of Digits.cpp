
//#include<bits/stdC++.h>
#include <stdio.h>
#include <float.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iomanip>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include<bitset>
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

#define en "\n"
#define spf(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const double pi = 2*acos(0.0);
const int Size = 101;


LL fun(LL n)
{

	if (n<10)
	return n*(n+1)/2;

	int d = log10(n);
    LL *ar=new LL[d+1];
	ar[0] = 0,ar[1] =45;

	for (int i=2; i<=d; i++)
		ar[i] = ar[i-1]*10 + 45*ceil(pow(10,i-1));

	LL m = ceil(pow(10, d));
	LL msd = n/m;

	return msd*ar[d]+(msd*(msd-1)/2)*m +msd*(1+n%m)+ fun(n%m);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
//          solve(ks++);
         LL n;
         cin>>n;
         cout<<fun(n)<<en;
//        printf("Case %d: ",ks++);
    }
//
//    while(1 == scanf("%d",&n) && n)
//    {
////        printf("\n");
//    }
    return 0;
}
