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
const int Size = 1001;
const double EPS = 1e-7; ///1*10^-7

int main()
{
//    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

    vector<int>v;
    int n;
    scanf("%d",&n);
    int ara[n+1];
    map<int,int>mp;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        mp[ara[i]]++;
    }
    while(!mp.empty())
    {
        auto mx=mp.end();
        mx--;
        int x=mx->first;
        v.push_back(x);
        for(int i=1; i<=x/i;i++)
        {
            if(x%i==0)
                if(mp.find(i)!=mp.end())
                {
                    mp[i]--;
                    if(mp[i]==0)
                        mp.erase(i);
                }
            int y=x/i;
            if(x%y==0 && i!=y)
                if(mp.find(y)!=mp.end())
                {
                    mp[y]--;
                    if(mp[y]==0)
                        mp.erase(y);
                }
        }

    }
    int l=v.size();
    printf("%d\n",l);
    for(int i=0;i<l;i++)
        printf("%d ",v[i]);
    return 0;
}
