#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
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
/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end())
    {

    }
*/

typedef long long LL;
const int Size = 100;
const double EPS = 1e-7; ///1*10^-7

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);
//    int ara [100];
//    for(int i=0; i<10; i++)
//        ara[i]=i;
//
////    int s=ara.size();
////    string s="tabassum maria";
////    int m=9;
////    int i=s.find(m);
////    if(i==-1)
////        deb(m);
//
//    printf("%s",str2);

    char str[Size];
    scanf("%s",&str[1]);
    for(int i=1; i<=5;i++)
        deb(str[i]);
    return 0;
}
