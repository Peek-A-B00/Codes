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

int prime[Size];
bool flag[Size];

void sieve(int N)
{
    int c=0;
    flag[2]=true;
    for(int i=3; i<N;i+=2)
        flag[i]=true;
    prime[c++]=2;
    for(int i=3; i<N; i+=2)
        if(flag[i])
        {
            prime[c++]=i;
            int r=i*2;
            if(i<=N/i)
                for(int j=i*i; j<N;j+=r)
                    flag[j]=false;
        }
}
int main()
{
//   freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int n;
    sieve(Size);
    while(1==scanf("%d",&n))
    {
        if(flag[n])
        {
            int e=n;
            int d=0;
            while(n)
            {
                d=d*10+n%10;
                n=n/10;
            }
            if(flag[d] && d!=e)
                printf("%d is emirp.\n",e);
            else
                printf("%d is prime.\n",e);
        }
        else
            printf("%d is not prime.\n",n);
    }

    return 0;
}
