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
const int Size = 100001;


int main()
{
//    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int arr[Size];
    int f;
    int n,tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        f=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i!=0 && arr[i]<arr[i-1] && (arr[i]+arr[i-1])%2!=0)
            {
                swap(arr[i-1],arr[i]);
            }
        }
        for(int i=1;i<n;i++)
            if(arr[i]<arr[i-1])
            {
                 f=1;
                 break;
            }
        if(f==0)
            printf("Yes\n");
        else
             printf("No\n");
    }

    return 0;
}
