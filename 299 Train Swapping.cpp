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
/** ---- Paknami Ends ----*/

typedef long long LL;
const int SIZE = 100;
const double EPS = 1e-7; ///1*10^-7

int Bubble_Sort(int n,int a[])
{
    int o=0;
    for(int i=1;i<n;i++)
    {
        for(int j=1; j<n ;j++)
        {
            if(a[j-1]>a[j])
            {
                swap(a[j-1],a[j]);
                o++;
            }
        }
    }
    return o;
}

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    int tks,n,i;
    int ar[50];
    scanf("%d",&tks);
    while(tks--)
    {
        while(1==scanf("%d",&n))
        {
            for(i=0; i<n; i++)
            {
                scanf("%d",&ar[i]);
            }
            int c=Bubble_Sort(n,ar);
            printf("Optimal train swapping takes %d swaps.\n",c);

        }
    }


    return 0;
}
