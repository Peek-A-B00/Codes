#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iostream>
using namespace std;
#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

int Sum(int a)
{
    if(a==0)
    {
        return 0;
    }
    return a+Sum(a-1);
}

int main()
{
    int n;

    while(1==scanf("%d",&n))
    {
        int s=Sum(n);
        printf("%d\n",s);
    }

    return 0;
}
