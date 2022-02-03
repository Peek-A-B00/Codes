O#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

typedef long long LL;
//const LL MOD = 1000000007;
const LL MOD = 97;

LL facto(int n)
{
    if(n <= 1)    return 1;

    LL res = (n * facto(n-1))%MOD;

    return res;
}

int main()
{
    int n;

    while(cin>>n)
        deb(facto(n));



    return 0;
}
