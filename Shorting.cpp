
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

typedef long long LL;
const int SIZE = 100;

void Short(int n, int a[],int ar[])
{
    int i,j,m,min,x;
    m=n;

    for(i=0, j=0; i<n ; i++,j++,m--)
    {
        min=ar[0];
        for(i=0;i<m;i++)
        {
            if(min>a[i])
            {
                min=a[i];
                ar[j]=a[i];
                x=i;
            }
        }
        while(x !=m)
        {
            a[x]=a[x-1];
        }
    }
}
int main()
{
    int n,
    int ara[SIZE];
    int ara2[SIZE];

    while(1==scanf("%d",&n))
    {
        for(int i=0; i<n;i++)
        {
            scanf("%d",&ara[i]);
        }
        printf("\n");
    }

    return 0;
}
