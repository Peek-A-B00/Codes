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
void printVector(vector<int>&v, string s="")
{
    cout<<s<<" # Size: "<<v.size()<<" => {";

    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<"}"<<endl;
}

typedef long long LL;
const int SZ = 100;
const double EPS = 1e-7; ///1*10^-7

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    vector<int>v(2,0),a(5,1);
    printVector(a);
    debug(a.size());
    printVector(v,"value");
    v={2,3,4,5,6};
    auto it=v.begin();
    debug(it);
    printVector(v,"value");
//    v.push_back(a);
//    printVector(v,"Vector");

    for(int i=0;i< a.size();i++)
    {
        v.push_back(a[i]);
    }

    printVector(v);
    return 0;
}
