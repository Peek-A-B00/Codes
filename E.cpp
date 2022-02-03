#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//#include <iostream>
//#include <string>
//#include <vector>
//#include <sstream>
//#include <algorithm>
//#include <queue>
//using namespace std;

int ar[100001];
int a[100001];
int main()
{
//    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    int n,c=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&ar[i]);
    for(int i=0; i<n;i++)
    {
        int f=0;
        int num=ar[i];
        for(int j=0; j<n; j++)
        {
            if(ar[j]==num)
                continue;

            if(ar[j]%num==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
            a[c++]=num;
    }
    printf("%d\n",c);
    for(int i=0; i<c; i++)
        printf("%d ",a[i]);


    return 0;
}
