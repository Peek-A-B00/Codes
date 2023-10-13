
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

/*
    if(st.find(val)!=st.end())
    {

    }
*/


typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 1001;

int n,k;
string s,r;
map<string,int>mp;
vector<string>V[Size];

void init()
{
    s.clear();
    r.clear();
    mp.clear();
    for(int i=0;i<=k;i++)
        V[i].clear();
}
int Reverse_and_Concatenate()
{
    for(int i=1;i<=k;i++)
    {
        for(int j=0;j<V[i-1].size();j++)
        {
            s=V[i-1][j];
            r=s;
            reverse(r.begin(),r.end());
            string t=r+s;
            if(mp.find(t)==mp.end())
            {
                mp[t]=i;
                V[k].push_back(t);
            }
            t.clear();
            t=s+r;
            if(mp.find(t)==mp.end())
            {
                mp[t]=i;
                V[k].push_back(t);
            }
        }
//        V[i-1].clear();
    }
    int d=V[k].size();

    return d;
}
int main()
{
//    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    char str[101];
    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        cin>>n>>k>>str;
        init();
        V[0].push_back(str);
        int res = Reverse_and_Concatenate();
        printf("%d\n",res);
    }


    return 0;
}
