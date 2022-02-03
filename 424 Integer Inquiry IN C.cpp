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
    int sum,k,i,j,r,carry=0;
    string res;
    for(i=0,j=0,k=0; carry>0||i<s.size()||j<t.size(); k++)
    {
        if(i<s.size() && j< t.size() )
        {
            sum=s[i++]-'0'+t[j++]-'0'+carry;
//            debug(sum);
            r=sum%10;
//            debug(r);
            carry=sum/10;
            res+=r+'0';
            debug(res);
        }
        else if (i< s.size())
        {
            sum=s[i++]- '0' +carry;
            r=sum%10;
            carry=sum/10;
            res+=r+ '0';
            debug(res);
        }
        else if (j< t.size())
        {
            sum=t[j++]- '0' +carry;
            r=sum%10;
            carry=sum/10;
            res+=r+ '0';
            debug(res);
        }
        else if(carry > 0)
        {
            res+=carry+'0' ;
        }
    }
    debug(res);
//    reverse(res.begin(),res.end());
//    printf("%s\n",res.c_str());
    return res;
}
 int main()
{

//    freopen("C:\\Users\\Hamza\\OneDrive\\Documents\\in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    char str[SZ];
    while (1==scanf("%s",str) && strcmp(str,"0"))
    {
        string a=str;
//        debug(a);
        string b=add(a, b);
        printf("%s\n",b.c_str());
//        cout<<a<<endl ;

    }
    return 0;
}
