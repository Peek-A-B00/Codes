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
//    char c = '0';
    char c;
    cin>>c;

    if(isalpha(c)==false)
    {
        puts("Not Alpha");
    }

    if(!isalpha(c))
    {
        puts("Not Alpha");
    }

    return 0;
}
