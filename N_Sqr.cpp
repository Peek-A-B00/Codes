#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;


int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n;

    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
                printf("%d ", j);
            printf("\n");
        }



    }
    return 0;
}
