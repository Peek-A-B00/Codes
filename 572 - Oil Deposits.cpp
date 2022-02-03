#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include <queue>
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

//#define SZ(a)   ((int)a.size())
//#define push_back   pb


typedef long long LL;
const int Size = 101;
const double EPS = 1e-7; ///1*10^-7
char str[Size][Size];
int ar[Size][Size];
int R,C,comp;

void OilDeposits(int m,int n)
{
    ar[m][n]=1;
    int a[]={-1,-1,-1,0,0,1,1,1};
    int b[]={-1,0,1,-1,1,-1,0,1};
    queue<int>Q;
    Q.push(m);
    Q.push(n);

    while(!Q.empty())
    {
        int r=Q.front();
        Q.pop();
        int c=Q.front();
        Q.pop();
        for(int i=0;i<8;i++)
            for(int j=0; j<8; j++)
            {
                int Row=r+a[i];
                int Clm=c+b[j];
                if(Clm<0||Row<0||Clm >=C||Row>=R)
                    continue;
                if(str[Row][Clm]=='@'&& !ar[Row][Clm])
                {
                    ar[Row][Clm]=1;
                    Q.push(Row);
                    Q.push(Clm);
                }
            }
    }
}
int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);


    while(2==scanf("%d%d",&R,&C)&& R)
    {
        comp=0;

        for(int i=0;i<R;i++)
            for(int j=0;j<C; j++)
                ar[i][j]=0;

        for(int i=0; i<R;i++)
            scanf("%s",str[i]);

        for(int i=0; i<R; i++)
            for(int j=0; j<C;j++)
                if(str[i][j]=='@' && !ar[i][j])
                {
                    comp++;
                    OilDeposits(i,j);
                }

        printf("%d\n",comp);
    }

    return 0;
}
