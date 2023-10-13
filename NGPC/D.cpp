
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
const int Size = 1e5 +10;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,m;
    int tks,ks=1;
    cin>>tks;
//    scanf("%d",&tks);
    while(tks--)
    {
        cin>>n>>m;
        LL ar[m+1][n+1];
        LL r=0,s=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                cin>>ar[i][j];
                s+=ar[i][j];
            }
        if(n==1 || m==1)
            r=s;
        else if(n==2 && m==2)
        {
            LL a=ar[0][0]+ar[1][1];
            r=max(s,max(a,max(a+ar[0][1],a+ar[1][0])));
        }
        else if(m==2 || n==2)
        {
            if(m==0)
            {
                s=ar[0][0];
                for(int i=0;i<n;i++)
                    s+=ar[1][i];
                r=max(r,s);

                s=ar[1][n-1];
                for(int i=0;i<n;i++)
                    s+=ar[0][i];
                r=max(r,s);

                s=ar[0][0];
                for(int i=1;i<n;i++)
                    s+=ar[1][i];
                r=max(r,s);

                s=ar[1][0]+ar[1][n-1];
                for(int i=0;i<n;i++)
                    s+=ar[0][i];
                r=max(r,s);

                s=ar[1][n-1]+ar[1][n-2];
                for(int i=0;i<n;i++)
                    s+=ar[0][i];
                r=max(r,s);

                s=ar[0][0]+ar[0][1];
                for(int i=0;i<n;i++)
                    s+=ar[1][i];
                r=max(r,s);
            }
            else
            {
                s=ar[0][0];
                for(int i=0;i<m;i++)
                    s+=ar[i][1];
                r=max(r,s);

                s=ar[m-1][1];
                for(int i=0;i<m;i++)
                    s+=ar[i][0];
                r=max(r,s);

                s=ar[0][1]+ar[m-1][1];
                for(int i=0;i<m;i++)
                    s+=ar[i][0];
                r=max(r,s);

                s=ar[0][0]+ar[1][0];
                for(int i=0;i<m;i++)
                    s+=ar[i][1];
                r=max(r,s);

                s=ar[0][0];
                for(int i=1;i<m;i++)
                    s+=ar[i][1];
                r=max(r,s);

                s=ar[m-1][1]+ar[m-2][1];
                for(int i=0;i<m;i++)
                    s+=ar[i][0];
                r=max(r,s);

            }
        }
        else
        {
            s=0;
            for(int i=0;i<n;i++)
                s+=ar[0][i];
            for(int i=1;i<m;i++)
                s+=ar[i][n-1];
            r=max(r,s);

            s=0;
            for(int i=1;i<n;i++)
                s+=ar[m-1][i];
            for(int i=0;i<m;i++)
                s+=ar[i][0];
            r=max(r,s);

            s=ar[0][0];
            for(int i=1;i<n;i++)
                s+=ar[1][i];
            for(int i=2;i<m;i++)
                s+=ar[i][n-1];
            r=max(r,s);

            s=ar[0][0];
            for(int i=2;i<n;i++)
                s+=ar[m-1][i];
            for(int i=1;i<m;i++)
                s+=ar[i][1];
            r=max(r,s);

            s=ar[1][n-2];
            for(int i=0;i<n;i++)
                s+=ar[0][i];
            for(int i=1;i<m;i++)
                s+=ar[i][n-1];
            r=max(r,s);

            s=ar[m-1][n-1];
            for(int i=0;i<n;i++)
                s+=ar[0][i];
            for(int i=1;i<m;i++)
                s+=ar[i][n-2];
            r=max(r,s);

            s=ar[m-1][n-1];
            for(int i=1;i<n;i++)
                s+=ar[m-2][i];
            for(int i=0;i<m;i++)
                s+=ar[i][0];
            r=max(r,s);

            s=ar[m-2][1];
            for(int i=1;i<n;i++)
                s+=ar[m-1][i];
            for(int i=0;i<m;i++)
                s+=ar[i][0];
            r=max(r,s);
        }
        cout<<r<<"\n";
//        printf("Case %d: ",ks++);
    }


    return 0;
}
