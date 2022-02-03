
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
#include <map>
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
const int Size = 1000;
const double EPS = 1e-7; ///1*10^-7

struct Games
{
    vector<string>name;
    int p;
    int g;
    int w;
    int t;
    int l;
    int gd;
    int gs;
    int ga;

};
Games ar[Size];
char str[101];
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    int team,match;
    scanf("%d",&tks);
    while(tks--)
    {
        scanf(" %[^\n]",str);
        scanf("%d",&team);
        for(int i=0;i<team;i++)

//        printf("Case %d: ",ks++);
    }

    return 0;
}
