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

char str[101][101];

void Minesweeper(int n,int m)
{
    int i,j,c;
    for(i=0; i<n ;i++)
    {
        for(j=0; j < m ;j++)
        {
            c=0;
            if(str[i][j]=='*')
            {
                continue;
            }
            if(i-1>=0 && j-1>=0 && str[i-1][j-1]=='*')
            {
                c++;
            }
            if(i-1>=0 && str[i-1][j]=='*')
            {
                c++;
            }
            if(i-1>=0 && j+1<m && str[i-1][j+1]=='*')
            {
                c++;
            }
            if(j-1>=0 && str[i][j-1]=='*')
            {
                c++;
            }
            if(j+1<m && str[i][j+1]=='*')
            {
                c++;
            }
            if(i+1<n && j-1>=0 && str[i+1][j-1]=='*')
            {
                c++;
            }
            if(i+1<n && str[i+1][j]=='*')
            {
                c++;
            }
            if(i+1<n && j+1<m && str[i+1][j+1]=='*')
            {
                c++;
            }

            str[i][j]= c +'0';
        }
    }
    str[i][j]=0;
}
int main()
{
 ///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    int i,j,m,n;
    int x=1;

    while(2==scanf("%d%d",&n,&m) && n && m)
    {
        if(x !=1) printf("\n");

        printf("Field #%d:\n",x++);
        for(i=0; i<n ;i++)
        {
            scanf("%s",&str[i]);
        }
        Minesweeper(n,m);
        for(i=0; i<n ;i++)
        {
            printf("%s\n",str[i]);
        }
    }


    return 0;
}
