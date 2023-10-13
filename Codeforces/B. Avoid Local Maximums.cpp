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
const int Size = 200001;


int main()
{
//    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int arr[Size];
    int n,m;
    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        m=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==2)
        {
            printf("%d\n",m);
            printf("%d %d\n",arr[0],arr[1]);
            continue;
        }
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                if(i+2==n){
                    arr[i-1]=arr[i];
                }
                else{
                    if(arr[i+2]>arr[i])
                        arr[i+1]=arr[i+2];
                    else
                        arr[i+1]=arr[i];
                }
                m++;
            }
        }

        printf("%d\n",m);
        for(int i=0;i<n;i++)
            printf("%d ",arr[i]);

        printf("\n");
    }


    return 0;
}
