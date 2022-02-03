#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include <algorithm>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;

void Merge(int a[],int m, int b[],int n, int c[])
{
    int i,j,k;
    for(i=0,j=0,k=0; k<(m+n);k++)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            debug(k,c[k]);
            i++;
        }
        else
        {
            c[k]=b[j];
            debug(k,c[k]);
            j++;
        }
    }
    c[k]=0;
}

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    int arr[100];
    int ara[100];
    int ar[100];
    int m,n;
    while(2==scanf("%d%d",&m,&n))
    {
        int i,j;
        for(i=0;i<m ;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(j=0; j<n; j++)
        {
            scanf("%d",&ara[j]);
        }
        Merge(arr,m,ara,n,ar);

        printf("\n");
    }

    return 0;
}

