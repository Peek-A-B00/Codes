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
const int Size = 1000000;
const double EPS = 1e-7; ///1*10^-7
int N=1000000;
int prime[Size];
bool v[Size];

int sieve(int N)
{
    int c=0;
    for(int i=3; i<N; i+=2)
        v[i]=true;
    for(int i=3; i<N; i+=2)
        if(v[i])
        {
            prime[c++]=i;
            int r=i*2;
            if(i<=N/i)
                for(int j=i*i; j< N;j+=r)
                     v[j]=false;

        }

    return c;
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int n,a,b;
    int s=sieve(N);
    while(1==scanf("%d",&n)&& n)
    {
        for(int i=0;i<s;i++)
        {
            a=prime[i];
            b=n-a;
            if(v[b])
                break;
        }
        printf("%d = %d + %d\n",n,a,b);
    }

    return 0;
}
