//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <math.h>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0) return b;
    return (b,a%b);
}
int main()
{
    int ar[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int g=ar[0];
    for(i=0;i<n;i++)
    {
        g=gcd(g,ar[i]);
    }

    cout<<g;



    return 0;
}
