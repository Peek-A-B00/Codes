#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iostream>
using namespace std;
#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

int go(int n)
{
    int m=1;
    while(n)
    {
        m=m*n;
        deb(m);
        n--;
    }
     return m;
}
int fact(int a)
{
    if(a==0)
    {
        return 0;
    }
    return go(a)+go(a--);
}

int main()
{
    int f;

    while(1==scanf("%d",&f))
    {
        int sum=fact(f);
        printf("%d\n",sum);
    }

    return 0;
}
