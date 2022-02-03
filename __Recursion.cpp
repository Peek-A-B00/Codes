#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

void go(int n)
{
    if(n==0){
        return;
    }

    printf("Start: %d\n", n);
    go(n-1);
    printf("End: %d\n", n);
}

typedef long long LL;

LL facto(int n)
{
    if(n <= 1)    return 1;

    LL res = facto(n-1);

    return n * res;
}

int main()
{
    go(2);


//    deb(facto(5));
//    deb(facto(3));
    return 0;
}
