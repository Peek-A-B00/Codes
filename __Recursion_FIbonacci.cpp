#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;


long long fib(int n)
{
    if(n<2) return 1;

    deb(n);
    return fib(n-1) + fib( n-2);
}

int main()
{
    const int ip = 3;
    int n;

    while(cin>>n){
        deb(fib(n));
    }


//    for(int i=0;i<10;i++)
//    {
//        deb(fib(i));
//    }
    return 0;
}
