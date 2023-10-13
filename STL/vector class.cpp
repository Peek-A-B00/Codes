
//#include<bits/stdC++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iomanip>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <map>
#include<set>
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

#define en "\n"
#define sp(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/

typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;

void print(vector<int>&v,string s="")
{
    int l =v.size();
    cout<<"\n\nSize of vector "<<s<<" = "<<l<<" \nvector "<<s<<" ={";
    for(int i=0;i<l;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"}";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    vector<int>v;
    int s = v.size();
    cout<<"intial size :"<<s<<en;
    for(int i=0;i<3;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }

    print(v,"v");

    v[0]=1;
    print(v,"v");


    vector<int>a{101,102,4297,478};
    print(a,"a");

    int length =10;
    vector<int>b(length);

    print(b,"b");

    int initialValue =10;
    vector<int>c(length,initialValue);

    print(c,"c");
    c.clear();
    cout<<c.size();
    return 0;
}
