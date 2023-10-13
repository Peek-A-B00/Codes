
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
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
/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end())
    {

    }
*/


typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;
int n;
int arr[Size];
void Merge(int s,int mid,int e)
{
    int L[Size],M[Size];
    int l=mid-s+1;
    int m=e-mid;

    for(int i=0;i<l;i++)
        L[i]=arr[s+i];

    for(int i=0;i<m;i++)
        M[i]=arr[mid+1+i];

    int i=0,j=0,k=s;
    while(i<l && j<m)
    {
        if(L[i]<M[j])
        {
            arr[k]=L[i];
            i++;
            k++;
        }
        else{
            arr[k]=M[j];
            j++;
            k++;
        }
    }
    while(i<l)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<m)
    {
        arr[k]=M[j];
        j++;
        k++;
    }
}

void MergeSort(int s,int e)
{
    if(s==e)
        return;

    int m=(s+e)/2;

    MergeSort(s,m);
    MergeSort(m+1,e);
    debug(s,m,e);
    Merge(s,m,e);
}

int main()
{
    freopen("test.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    while(1==scanf("%d",&n))
    {
        for(int i=0;i<n;i++)
            cin>>arr[i];

        MergeSort(0,n-1);

        for(int i=0;i<n;i++)
            cout<<arr[i]<<endl;
        printf("\n");
    }

    return 0;
}
