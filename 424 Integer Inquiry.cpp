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
const int SZ = 100;
const double EPS = 1e-7; ///1*10^-7

string add(string s, string t)
{
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    int sum,a,b,i,j,r,carry;
    i=j=carry =0;
    string res;
    while(carry>0||i<s.size()||j<t.size())
    {
        a=b=0;
        if (i< s.size())
        {
           a=s[i++] - '0' ;
        }
        if (j< t.size())
        {
            b=t[j++] - '0' ;
        }
        sum=a+b+carry;
        r=sum%10;
        carry=sum/10;
        res+=r+'0';
    }
    reverse(res.begin(),res.end());

    return res;
}
 int main()
{

///    freopen("in.txt", "r", stdin);
///    freopen("out.txt","w",stdout);

    char str[SZ];
    string t;
    while (1==scanf("%s",str) && strcmp(str,"0"))
    {
        string s=str;
        t=add(s, t);
    }
    printf("%s\n",t.c_str());
    return 0;
}
