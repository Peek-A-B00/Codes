#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<" #--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;


typedef long long LL;
const int SZ = 100;
int ar1[SZ],ar2[SZ];

void Merge(int ar[],int low ,int mid ,int high)
{
    int n,m,i,j,k;
    n=mid-low+1;
    m=high-mid;

    for(i=0 ; i<n ;i++)
    {
        ar1[i]=ar[low+i];
    }
    for(j=0 ; j<m ;j++ )
    {
        ar2[j]=ar[mid+j+1];
    }

    for(k=low ,i=0, j=0; i<n || j<m ;k++)
    {
        if(i<n && j<m)
        {
            if(ar1[i] <= ar2[j])    ///com(ar1[i], ar2[j]) -> true/false
            {
                ar[k]=ar1[i++];
            }
            else
            {
                ar[k]=ar2[j++];
            }
        }
        else if(i<n)
        {
            ar[k]=ar1[i++];
        }
        else if(j<m){
            ar[k]=ar2[j++];
        }
    }
}

void MergeSort(int ar[],int low ,int high)
{
//    debug("\t\t\t[", low, high, "]");
    if(low==high){
        return;
    }
    int mid;
    mid=(low+high)/2;

    MergeSort(ar,low,mid);
    MergeSort(ar,mid+1,high);

    debug(low,mid,high);
    deb(1)
    Merge(ar,low ,mid ,high);
}

int main()
{
//    freopen("MergeSortInput.in","r",stdin);

    int ara[SZ];
    int i,n;
    while(1==scanf("%d",&n) && n)
    {
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        MergeSort(ara,0,n-1);

        for(i=0; i<n; i++)
        {
            printf("%d, ",ara[i]);
        }
        printf("\n");
    }

    return 0;
}
