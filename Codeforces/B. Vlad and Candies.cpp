
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
const int Size = 2*pow(10,5)+1;


int main()
{
//    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int arr[Size];
    int n;
    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        int in,m=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

            if(m<arr[i]){
                m=arr[i];
                in=i;
            }
        }
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(m-1<=arr[i] && i!=in ||(n==1 && arr[0]==1))
            {
                f=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(f==0)
            cout<<"NO"<<endl;
//        printf("Case %d: ",ks++);
    }



    return 0;
}
