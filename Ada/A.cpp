
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
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;

int n,k,f;
LL sum,p;
map<int,int>mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
//    scanf("%d",&tks);
    cin>>tks;
    while(tks--)
    {
        cin >>n>>k>>p;
        int t;
        for(int i=0;i<n;i++){
            cin>>t;
            mp[t]++;
//            if(i==n-1)
//                f=t;
        }
        sum=0;
        int K=k;
        for(auto i:mp)
        {
            int it=i.second;
            K-=it;
            LL a=abs(i.first-p);
            int r=it/k;
            int d=it-(r*k);
            if(it%k!=0)
                r+=1;
            if(d==K)
            {
                sum+=a;
            }
            if(it!=t)
            {
                sum+=2*a*r;
            }
            else
            {
                sum+=(2*a*r)-a;
            }

        }
        cout<<sum<<endl;
//        printf("Case d: ",ks++);
    }

//    while(1==scanf("",&))
//    {
//        printf("\n");
//    }

    return 0;
}
