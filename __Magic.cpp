#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <string>
#include <iostream>
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

typedef long long LL;
const int SIZE = 100;
const double EPS = 1e-7; ///1*10^-7

int main()
{
    string s;

    while(cin>>s)
    {
        cout<<s<<endl;

        int len = s.size();
        deb(len);

        int startInd, subLen;

        cin>>startInd>>subLen;

        string sub = s.substr(startInd, subLen);

        deb(sub);

//        reverse(s.begin(), s.end());
        string a;
        while(cin>>a){
            int ind = s.find(a);
            deb(ind);
        }
    }

    return 0;
}
