#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

typedef long long LL;
const int SIZE = 100;

int main()
{
    unsigned int val = -1;
    unsigned val2 = -1;

    unsigned long long valLL = -1;

    printf("Unsigned Integer: %u\n", val);
    printf("Unsigned long long : %llu\n", valLL);
    deb(valLL);

    int n = -1u/2;

    deb(n);
    LL nLL = -1ull/2;
    deb(nLL);


    return 0;
}
