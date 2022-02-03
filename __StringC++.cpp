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

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    char in[100];

    strcpy(in, "@ maria tabassum");
    string s = in;

    s += '9';
    s += "#";
    s += s;
    s[0] = '$';

    printf("c style print: %s\n",s.c_str());
    cout<<s<<endl;
    int len = s.size();
    deb(len);
    string sub = s.substr(2, 7);
    deb(sub);
    int startInd = s.find("tab");
    deb(startInd);
    startInd = s.find("maksud");
    deb(startInd);

    string r = s;
    reverse(r.begin(),r.end());
    deb(r);
    reverse(r.rbegin(),r.rend());
    deb(r);
    sort(r.begin(),r.end());
    deb(r);
    sort(r.rbegin(),r.rend());
    deb(r);



    return 0;
}
