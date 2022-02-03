#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

typedef long long LL;

const int MOD = 97;

LL f(int n)
{
    if(1>n) return 1;

    return n*f(n-1);
}

LL fMod(int n)
{
    if(1>n) return 1;
    LL res = (n*fMod(n-1)) % MOD;
    return res;
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    for(int i=1;i<=20;i++)
    {
        LL realFactorialValue =  f(i);
        LL modOnce = realFactorialValue % MOD;
        LL modFactorialValue = fMod(i);

        printf("%d # Real: %lld, realMod: %lld, fMod: %lld\n", i, realFactorialValue, modOnce, modFactorialValue);
    }


    return 0;
}
