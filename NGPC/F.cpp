

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

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
const int Size = 100000+10;
typedef double db;
//#define sp(d)   setprecision (d)

struct nod
{
    db x,y;
};
db hight(db x1,db y1,db x2,db y2)
{
    db a1=-y1;
    db b1=x1-x2;
    db c1=a1*x2;
    db a2=-y2;
    db b2=x2-x1;
    db c2=a2*x1;
    db d=a1*b2-a2*b1;
    return (a1*c2-c1*a2)/d;/// a1x+b1x=c1 & a2x+b2y=c2
                            ///-> y =(-c1*a2-(-c2)a1)/(a1*b2-a2*b1)

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    cin>>tks;
    while(tks--)
    {
        int N,mx;
        cin>>N>>mx;
        db x,y;
        map<db,db>mp;
        mp[0]=0;
        mp[mx]=0;
        for(int i=0;i<N;i++){
            cin>>x>>y;
            mp[x]=max(mp[x],y);
        }
        vector<db>X,Y;
        for(auto [x,y]:mp)              ///***
        {
            X.push_back(x);
            Y.push_back(y);
        }
        db area=0;
        for(int i=1;i<mp.size()-1;i++){
            area+=0.5*(X[i+1]-X[i-1])*Y[i];
            db h=hight(X[i-1],Y[i-1],X[i],Y[i]);
            area-=0.5*(X[i]-X[i-1])*h;
        }
        cout<<setprecision(8)<<fixed<<area<<"\n";
    }

    return 0;
}
