#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <time.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

typedef long long LL;

//const int MOD = 97;
const int MOD = 1000000007;

int cnt;
LL power(LL b, LL p)
{
    if(0==p)    return 1;

    deb(cnt++);

    LL half = power(b, p/2);
    deb(half);

    LL res = (half * half)%MOD;

    if(1 == p%2)
        res = (res * b)%MOD;

    return res;
}

LL powerNormal(LL b, LL p)
{
    LL res =1;
    for(int i=0;i<p;i++)
    {
        res = (res * b)%MOD;
    }
    return res;
}


int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    LL b, p, res;
    double t1, t2, diff;

    while(cin>>b>>p){
        cnt = 0;
        t1 =clock();
        res = power(b, p);
        t2 = clock();

        puts("++++++++++++++++++++++++++++++++++++\n");
        deb(res);
        deb(t2-t1);

        t1 =clock();
        LL resNormal = powerNormal(b,p);
        t2 =clock();
        deb(resNormal);
        deb(t2-t1);
    }


    return 0;
}
