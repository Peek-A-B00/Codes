#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

//For Debugging
#define debug(a...)          {cout<<" #--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;


#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
typedef long long LL;

void minSort(int n, int in[], int out[])
{
    bool flag[n];

    memset(flag, true, sizeof (flag));

    int sInd=0;

    for(int i=0;i<n;i++)
    {
        int minInd;
        int minVal = 1000;

        for(int j=0;j<n;j++)
        {
            if(!flag[j])    continue;

            if(minVal > in[j])
            {
                minVal = in[j];
                minInd = j;
            }
        }
        debug(i, minInd, minVal);
        out[sInd++] = in[minInd];
        flag[minInd] = false;
    }
}



void bubbleSort(int n, int in[])
{
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
            if(in[j-1] > in[j])
            {
                int tmp = in[j];
                in[j] = in[j-1];
                in[j-1] = tmp;
///                swap(in[i], in[j]);  //void swap(int &a, int &b);
            }
//        for(int j=0;j<n;j++)    cout<<in[j]<<","; cout<<endl;
    }
}

#define rii(a)      for(int i=0;i<a;i++)

int main()
{
    freopen("in.in", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

//    debug(true, false);

    int n;
    while(cin>>n){
        int ar[100];
        int out[100];

        rii(n)
        {
            cin>>ar[i];
        }

        bubbleSort(n, ar);
        rii(n)  cout<<ar[i]<<" ";puts("");

        minSort(n, ar, out);


        rii(n)  cout<<out[i]<<" ";puts("");
    }

    return 0;
}
