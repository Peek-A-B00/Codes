#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iostream>
using namespace std;
#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

int DSum(int n)
{
    int r= n%10;
    if(n==0)
    {
        return 0;
    }
    return r+DSum(n/10);
}
int main()
{
    int a;
    while(1==scanf("%d",&a))
    {
        int sum=DSum(a);

        printf("%d\n",sum);
    }

    return 0;
}
