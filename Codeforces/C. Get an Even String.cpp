
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
const int Size = 100;


int main()
{
    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    string str;
    map<char,int>mp;
    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        cin>>str;

        int ans=str.size();
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;

            if(mp[str[i]]==2)
            {
                ans-=2;
                mp.clear();
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
