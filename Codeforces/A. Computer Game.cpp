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
#include<set>
#include <unordered_map>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator, (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;
/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/


typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("Codeforces.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int n;
    char ar[2][Size];
    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
        cin>>n;
        for(int i=0;i<2;i++)
                cin>>ar[i];
        int f=1;
        for(int i=0;i<n-1;i++)
            if(ar[0][i+1]=='1' && ar[1][i+1]=='1')
            {
                cout<<"No"<<endl;
                f=0;
                break;
            }
        if(f) cout<<"Yes"<<endl;

//        printf("Case %d: ",ks++);
    }

    return 0;
}
