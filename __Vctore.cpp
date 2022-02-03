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

typedef long long LL;
const int SIZE = 100;
const double EPS = 1e-7; ///1*10^-7

void print(vector<int>&v){
    printf("Vector (%d): ",v.size());
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl;
}

vector<int> getN(int n){
    vector<int>ret;
    for(int i=0;i<n;i++)
        ret.push_back(99);

    return ret;
}

int main()
{

    vector<int>v;

    print(v);
    int n = 7;

    for(int i=0;i<n;i++)
        v.push_back(i);

    print(v);

    reverse(v.begin(),v.end());
    print(v);
    sort(v.begin(),v.end());    ///sort(v.begin(),v.end(), comp);
    print(v);

    for(int i=0;i<n;i++)
        v[i] = (1000+i)%3;

    print(v);

    sort(v.begin(),v.begin()+4);    ///sort(v.begin(),v.end(), comp);
    print(v);

    v.clear();

    print(v);

    puts("\n+++++++++++++++++++++++++++++++\n");
    vector<int>a(10);
    print(a);
    a.push_back(99);
    print(a);

    puts("\n+++++++++++++++++++++++++++++++\n");

    vector<int>b(10, 19);
    vector<int>c;

    c = b;

    print(b);
    b.clear();
    print(b);
    b.push_back(5);
    print(b);

    puts("\n+++++++++++++++++++++++++++++++\n");
    print(c);

    puts("\n+++++++++++++++++++++++++++++++\n");
    vector<int>r = getN(5);
    print(r);

    return 0;
}
