#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iostream>
using namespace std;
#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

int Add(int n,int m)
{
    if(n>m)
    {
        return 0;
    }
    deb(n);
    return n+Add(n+1,m);
}
int main()
{
    int a,b;

    while(2==scanf("%d%d",&a,&b)) ///a < b.
    {
        int sum=Add(a,b);

        printf("%d\n",sum);
    }
    return 0;
}
