
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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
////    freopen("in.txt","r",stdin);
////    freopen("out.txt","w",stdout);

    string str = " Tabassum Maria";
    string s = "abcfgdezxy";
    cout<<"Size of s :"<<s.size()<<en;
//    cin >> s;
//    str = str + s;
    int l = str.size();
    cout<<"first time : "<<s<<endl;
//    printf("%s \n",str.c_str());


//    sort(str.begin(),str.end());
//
//    cout<<"Sorting :"<<str<<" "<<l<<endl;

    reverse(s.begin(),s.begin()+2);

    cout<<"\n Reverse : "<<s<<en;

    sort(s.begin(),s.end());
    cout<<"again sort: "<<s<<en<<en;

    sort(s.rbegin(),s.rend());
    cout<<"Reverse sort: "<<s<<en;







    return 0;
}
