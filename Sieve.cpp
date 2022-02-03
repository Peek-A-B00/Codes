

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
const int Size = 100;
const double EPS = 1e-7; ///1*10^-7
LL N= 100000000;
LL P= 50847535;

bool flag[];
int prime[];
int ara[10001];
int L,U;

void sieve()
{
    int c=1;
    flag[2]=true;
    for(int i=3; i<N;i+=2)
        flag[i]=true;

    prime[c++]=2;
    for(int i=3;i<N;i+=2)
        if(flag[i])
        {
            prime[c++]=i;
            if(N/i>=i)
            {
                int r=i*2;
                for(int j=i*i;j<N;j+=r)
                    flag[j]=false;
            }
        }

}

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    sieve();

    return 0;
}
