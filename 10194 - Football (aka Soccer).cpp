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
const int Size = 101;
const double EPS = 1e-7; ///1*10^-7

struct Games
{
    char name[31];
    int points,played,wins,ties,losses,difference,Gscored,Gagainst;
};
Games ar[1001];
char str[Size];
bool mystrcmp(char a[],char b[])
{
    for(int i=0; isupper(a[i])&& i<strlen(a);i++)
        a[i]=tolower(a[i]);
    for(int i=0; isupper(b[i])&& i<strlen(b);i++)
        b[i]=tolower(b[i]);
    return strcmp(a,b)<0;
}
bool com(Games a,Games b)
{
    if(a.points !=b.points)
        return a.points>b.points;
    else if(a.wins != b.wins)
        return a.wins>b.wins;
    else if(a.difference!=b.difference)
        return a.difference>b.difference;
    else if(a.Gscored!=b.Gscored)
        return a.Gscored>b.Gscored;
    else if(a.played!=b.played)
        return a.played<b.played;
    else
        return mystrcmp(a.name,b.name);

}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int team,match,n,m;
    map<string,int>mp;
    char p1[31];
    char p2[31];
    int tks,ks;
    scanf("%d",&tks);
    while(tks--)
    {
        ks=1;
        scanf(" %[^\n]",str);
        scanf("%d",&team);
        for(int i=0;i<team;i++)
        {
            scanf(" %[^\n]",ar[i].name);
            ar[i].Gagainst=ar[i].Gscored=ar[i].losses=ar[i].played=ar[i].points=ar[i].ties=ar[i].wins=0;
            mp[ar[i].name]=i;
        }
        scanf("%d",&match);
        for(int i=0;i<match;i++)
        {
            scanf(" %[^#]#%d@%d#%[^\n]",p1,&n,&m,p2);
            int it1 = mp[p1] ;
            int it2 = mp[p2] ;

            ar[it1].Gscored+=n;
            ar[it1].Gagainst+=m;
            ar[it1].played +=1;
            ar[it2].Gscored+=m;
            ar[it2].Gagainst+=n;
            ar[it2].played ++;

            if(n>m)
            {
                ar[it1].wins++;
                ar[it2].losses++;
                ar[it1].points+=3;
            }
            else if(m>n)
            {
                ar[it2].wins++;
                ar[it1].losses++;
                ar[it2].points+=3;
            }
            else
            {
                ar[it1].ties++;
                ar[it2].ties++;
                ar[it1].points++;
                ar[it2].points++;
            }
        }
        for(int i=0;i<team;i++)
            ar[i].difference= ar[i].Gscored-ar[i].Gagainst;
        sort(ar,ar+team,com);
        printf("%s\n",str);
        for(int i=0; i<team; i++)
        {
            printf("%d) %s %dp,",ks++,ar[i].name,ar[i].points);
            printf(" %dg (%d-%d-%d),",ar[i].played,ar[i].wins,ar[i].ties,ar[i].losses);
            printf(" %dgd (%d-%d)\n",ar[i].difference,ar[i].Gscored,ar[i].Gagainst);
        }
        if(tks!=0)
            printf("\n");
    }



    return 0;
}

