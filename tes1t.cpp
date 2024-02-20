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
void fun(int n)
{
    vector<bool>bol(n);
    bol[n]=1;
    for(int i=0;i<4;i++)
        cout<<bol[i]<<" ";
    cout<<endl;
}
int main()
{
//    int ar[100],i,n;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&ar[i]);
//    }
//    int g=ar[0];
//    for(i=0;i<n;i++)
//    {
//        g=gcd(g,ar[i]);
//    }
//
//    cout<<g;
//
//    int n=4;
//    while(n--)
//    {
//        fun(n);
//    }
    vector<int>v;
    v[0]=1;
    cout<<v[0];

    return 0;
}
