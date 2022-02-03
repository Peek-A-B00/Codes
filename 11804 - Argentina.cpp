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
const int Size = 100;
const double EPS = 1e-7; ///1*10^-7

struct Argentina
{
    char name[21];
    int a;
    int d;
};

bool com(Argentina n,Argentina m)
{
    if(n.a != m.a)
        return n.a>m.a;
    else if (n.d != m.d)
        return n.d<m.d ;
    else
        return strcmp(n.name,m.name)<0;

}
bool name(Argentina a, Argentina b)
{
    return strcmp(a.name ,b.name)<0;
}

Argentina ar[11];
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    int n=10;
    scanf("%d",&tks);
    while(tks--)
    {
        for(int i=0; i<n;i++)
        {
            scanf("%s",ar[i].name);
            scanf("%d",&ar[i].a);
            scanf("%d",&ar[i].d);
        }
        sort(ar,ar+n,com);
        sort(ar,ar+5,name);
        sort(ar+5,ar+10,name);

        printf("Case %d:\n",ks++);
        printf("(");
        for(int i=0; i<5;i++)
        {
            if(i==4)
                printf("%s)\n",ar[i].name);
            else
                printf("%s, ",ar[i].name);
        }
        printf("(");
        for(int i=5; i<10;i++)
        {
            if(i==9)
                printf("%s)\n",ar[i].name);
            else
                printf("%s, ",ar[i].name);
        }
    }

    return 0;
}
