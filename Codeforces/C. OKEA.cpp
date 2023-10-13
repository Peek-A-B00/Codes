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
const int Size = 501;


int main()
{
    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int n,k;
    int arr[Size][Size];
    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        cin>>n>>k;
        int c=1;

        for(int i=1;i<=k;i++)
            for(int j=1;j<=n;j++)
                arr[i][j]=c++;
        if(arr[k][n]==n*k && n%2==0)
        {
            printf("YES\n");

            for(int i=1;i<=k;i++){
                for(int j=1;j<=n;j++)
                    printf("%d ",arr[i][j]);

                printf("\n");
            }
        }
        else
            printf("NO\n");

//        printf("\n");
//        printf("Case %d: ",ks++);
    }


    return 0;
}

