#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include<cmath>
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
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;

char str[Size][Size];
int n,m,s1,s2,e1,e2;
bool flag[Size][Size];
int dis[Size][Size];
int row[]={-2,2,-2,2,-1,1,-1,1};
int clm[]={-1,-1,1,1,-2,-2,2,2};

void init()
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            flag[i][j]=true;
            dis[i][j]=0;
        }
}
int night(int R,int C)
{
    int r=0;
    for(int i=0;i<8;i++)
    {
        int x=R+row[i];
        int y=C+clm[i];
        if(x>0&&x<=n&&y>0&&y<=m&& str[x][y]=='Z')
        {
            r=1;
            break;
        }
    }
    return r;
}
int BFS(int a, int b)
{
    int p=0;
    queue<pair<int,int>>Q;

    flag[a][b]=false;
    dis[a][b]=0;

    Q.push(make_pair(a,b));

    while(!Q.empty()&&p!=1)
    {
        pair<int,int>pi=Q.front();
        Q.pop();

        for(int i=-1;i<2;i++)
            for(int j=-1;j<2;j++)
            {
                int r=pi.first+i;
                int c=pi.second+j;

                if(flag[r][c]==false|| str[r][c]=='Z' ||r<0||r>n||c<0||c>m)
                    continue;
                else if(str[r][c]!='B'&& night(r,c)==1)
                    continue;

                else{
                    flag[r][c]=false;
                    dis[r][c]=dis[r-i][c-j]+1;

                    if(str[r][c]=='B')
                    {
                        p=1;
                        break;
                    }
                    Q.push({r,c});
                }
            }
    }
    return p;

}
int main()
{
//    freopen("f1.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        cin>>n>>m;
        init();
        for(int i=1;i<=n;i++)
            scanf(" %[^\n]",&str[i][1]);

        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++){
                if(str[i][j]=='A')
                   s1=i,s2=j;
                if(str[i][j]=='B')
                   e1=i,e2=j;
            }
        int res=BFS(s1,s2);
        if(res==0)
            printf("King Peter, you can't go now!\n");
        else
            printf("Minimal possible length of a trip is %d\n",dis[e1][e2]);
//        printf("Case %d: ",ks++);
    }

    return 0;
}
