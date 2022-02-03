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

typedef long long LL;
const int Size = 100;
const double EPS = 1e-7; ///1*10^-7

ostream& operator<<(ostream& out, pair<int,int>&pii){
    return out<<pii.first<<"  "<<pii.second;
}

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    pair<int,int>pii;
    pii.first = 2;
    pii.second = 3;
    cout<<pii.first<<" "<<pii.second<<endl;

    cout<<pii<<endl;
    pii = {1, 5};
    cout<<pii.first<<" "<<pii.second<<endl;

    pii = make_pair(33, 55);
    cout<<pii.first<<" "<<pii.second<<endl;

    int a[5];
    pair<int,int> in[15];
    a[0]={2,3};

    return 0;
}
