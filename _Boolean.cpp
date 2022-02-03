#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

typedef long long LL;

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    bool a, b;
    a = true;   ///1
    b = false;  ///0

    printf("%d\n", a);
    cout<<b<<endl;

    deb(sizeof(bool));


    return 0;
}
