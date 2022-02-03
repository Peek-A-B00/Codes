#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

///** ---- Paknami Starts ----*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
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
///** ---- Paknami Ends ----*/


typedef long long LL;
const int Size = 100;
const double EPS = 1e-7; ///1*10^-7
#define FasterIO   ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    auto tks=1,ks=1;
    long long n;
//    ios_base::sync_with_stdio(false); cin.tie(NULL);
    scanf("%d",&tks);

//    cin>>tks;
    while(tks--)
    {
//        cin>>n;
        scanf("%lld",&n);
        if(n<3)
            printf("odd\n");
//cout<<"odd"<<endl;
        else
//            cout<<"even"<<endl;
            printf("even\n");

    }


    return 0;
}
