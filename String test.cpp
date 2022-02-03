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
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    char str[100];
//    scanf("%[^*]",str);
    fgets(str,9,stdin);  /// 10 charecter use korar jonno 9 likhte hobe,2 ar jonno 1.
    int l=strlen(str);
    printf("%s*",str);
    printf(" The lenth is %d\n",l);

    string s="a";
//    s=2+'0';
//    s+=" x";
    int a=s[0]-'a'+1;
    s=a+'a';
    deb(s);

    return 0;
}

