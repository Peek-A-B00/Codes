#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
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

int binarySearch_UpperBound(vector<int>&v, int k)
{
    int h = v.size()-1;
    int l = 0;

    while(l<h)
    {
        int m = (1 + l + h) / 2;  ///Upper median

        if(k >= v[m])
            l = m;      ///l=m means upper median should be used to avoid infinity loop.
        else
            h = m-1;
    }
    deb(l);
    if(v[l]==k) return l;

    return -1;
}

int binarySearch_LowerBound(vector<int>&v, int k)  //Lower Bound
{
    int h = v.size()-1;
    int l = 0;

    while(l<h)
    {
        int m = (l + h) / 2;            ///l + (h-l)/2

        if(k > v[m])
            l = m+1;
        else
            h = m;
    }
    deb(l);
    if(v[l]==k) return l;

    return -1;
}

int main()
{
    freopen("BS.in", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n,val;

    while(cin>>n)
    {
        vector<int>v;

        for(int i=0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        printf("INDEX:  ");for(int i=0;i<n;i++)    printf("%3d", i);    printf("\n");
        printf("ARRAY: [");for(int i=0;i<n;i++)    printf("%3d", v[i]);    printf("]\n");

        int k;

        while(cin>>k && k>-1){
                cout<<"Value: "<<k<<" Lower Index: "<<binarySearch_LowerBound(v, k)<<endl;
//                cout<<"\t\tValue: "<<k<<" Upper Index: "<<binarySearch_UpperBound(v, k)<<endl;
        }
    }
    return 0;
}
