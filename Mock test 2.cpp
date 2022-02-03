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
#include <queue>
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
const int Size = 100;
const double EPS = 1e-7; ///1*10^-7
char str[10000];
int main()
{
//    freopen("in.txt","r",stdin);
    int tks,TF=0,TI=0;
    scanf("%d",&tks);
    while(tks--)
    {
        scanf("%s",str);
        int l=strlen(str);
        int I=0,F=0,f=0;
        for(int i=0;i<l;i++)
        {
            if(str[i]=='.'){
                 f=1;
                 continue;
            }

            if(f==0)
                F=F*10+str[i]-'0';
            if(f==1)
                I=I*10+str[i]-'0';
        }
        TF +=F;
        TI +=I;
        if(TI>11)
        {
            TF +=TI/12;
            TI=TI%12;
        }
         printf("%d Feet, %d Inches\n",TF,TI);
    }


    return 0;
}
