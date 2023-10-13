
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
    if(st.find(val)!=st.end()){}
*/


typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;

int fun(int *ar,int c)
{
    c++;
    if(ar[0]<ar[1] && ar[2]<ar[3] && ar[0]<ar[2] && ar[1]<ar[3])
        return 1;
    if(c==5)
        return -1;
    int temp=ar[0];
    ar[0]=ar[2];
    ar[2]=ar[3];
    ar[3]=ar[1];
    ar[1]=temp;
//    debug(c, ar[0],ar[1],ar[2],ar[3]);
    fun(ar,c);


}

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    int ar[5];
    while(tks--)
    {
        for(int i=0;i<4;i++)
            cin>>ar[i];
        if(fun(ar,0)>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
//        printf("Case %d: ",ks++);
    }

//    while(1==scanf("",&))
//    {
//        printf("\n");
//    }

    return 0;
}
