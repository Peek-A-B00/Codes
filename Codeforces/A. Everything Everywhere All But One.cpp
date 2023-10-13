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
#include <unordered_map>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator, (const T v)
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
double ar[Size];

int main()
{
//    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>ar[i];
        bool f=false;
        for(int i=0; i<n; i++)
        {
            double sum=0,avg;
            for(int j=0; j<n; j++)
            {
                if(j==i)
                    continue;
                sum+=ar[j];
            }
            avg=sum/(n-1);
            if(avg==ar[i])
            {
                cout<<"YES\n";
                f=true;
                break;
            }
        }
        if(!f)
            cout<<"NO\n";
//        printf("Case %d: ",ks++);
    }


    return 0;
}
