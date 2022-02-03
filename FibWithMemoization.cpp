#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;


typedef long long LL;
const int SZ = 500;
LL mm[SZ];  ///Memoization

LL fib(int n)
{
    if(n<2) return 1;

    if(-1 != mm[n]){
        return mm[n];
    }

    LL res = fib(n-1) + fib( n-2);

    mm[n] = res;

    deb(n);

    return res;
}

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<=n;i++)
        {
            mm[i] = -1;
        }

        deb(fib(n));

    }
    return 0;
}
