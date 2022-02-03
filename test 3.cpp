
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

void print(vector<int>&v){
    printf("Vector (%d): ",v.size());
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl;
}
int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    vector<string>v[10];
    string s;
    for(int i=0;i<=10;i++){
        cin>>s;
        v[i].push_back(s);
        print(v);
    }
    return 0;
}
