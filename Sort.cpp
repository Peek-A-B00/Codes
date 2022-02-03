#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


#include<iostream>
#include<algorithm>
using namespace std;
bool com(int a, int b)
{
    return a>b;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

//    int tks,ks=1;
//    scanf("%d",&tks);
//    while(tks--)
//    {
////        printf("Case %d: ",ks++);
//    }
    int n;

    while(1==scanf("%d",&n))
    {
        int ar[100];

        for(int i=0;i<n;i++)
            scanf("%d",&ar[i]);

        sort(&ar[0],&ar[n],com);
///        sort(ar,ar+n,com); Same as before

        for(int i=0;i<n;i++)    printf("%d ",ar[i]); printf("\n");
    }

    return 0;
}
