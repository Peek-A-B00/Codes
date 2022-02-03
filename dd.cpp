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

int main()
{
//    freopen("C:\\Users\\Hamza\\OneDrive\\Documents\\in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    int s,i,j,r,d=0;
    char in[SZ];
    char str[SZ];
    string a,b;

//    printf("\\");
//    memset(in,0,sizeof(in));

    while(1==scanf("%s",in)&& strcmp(str,"0")
    {
        a = in;
        reverse(a.begin(),a.end());
        deb(a);
        while(1==scanf("%s",str) && strcmp(str, "0"))
        {
            b=str;
            reverse(b.begin(),b.end());
            deb(b);
            for(i=0,j=0 ;j<b.size() || i<a.size();i++,j++)
            {
                if(j<b.size() && i<a.size())
                {
                    debug(a[i],b[j]);
                    s=a[i]-'0'+b[j]-'0'+d;
                    d=s/10;
//                    deb(d);
                    r=s%10;
//                    deb(r);
                    a[i]=r+'0';
                    debug(a[i],i);
                }
                else if(i<a.size())
                {
                    a[i]=d+a[i];
                    d=0;
                }
                else if(j<b.size())
                {
                    a[i]=d+b[j];
                    deb(i);
                    d=0;
                }
            }
//            a[i]=0;
        }
        int len=a.size();
        deb(len);
        string s=a;
        reverse(s.begin(),s.end());
        printf("%s\n",s.c_str());
    }

//    printf("%s\n",a.c_str());

    return 0;
}
