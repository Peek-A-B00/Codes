//#include<bits/stdC++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iomanip>

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
//#include<bits/stdC++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iomanip>

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

#define en "\n"
#define spf(d) setprecision(d)<<fixed

/** ---- Paknami Ends ----*/

/*
    if(st.find(val)!=st.end()){}
*/



typedef long long LL;
const LL MOD = 1000000007;///1e9+7
const double EPS = 1e-7; ///1*10^-7
const double pi = 2*acos(0.0);
const int Size = 1001;
int m,n,in;
struct nod
{
    int no,t,z,y;
} ar[Size];

bool com(nod a,nod b)
{
    if(a.t!=b.t)
        return a.t<b.t;
    else if (a.z !=b.z)
        return a.z>b.z;
    else
        return a.y<b.y;
}

LL fun(LL r)
{
    LL c=0;
    in=0;
    int i;
    for(i=0;i<n && c<=m;i++)
    {
        LL t = ar[i].t*ar[i].z  ;
        LL x = t + ar[i].y;
        LL y = (r%x>t)? (r%x)-t:0;
        LL tem = r - (r/x) - y;
        c += tem/ar[i].t;
//        debug(r,i,tem,tem/ar[i].t);
    }
    in=i;
    return c;
}
void fun(vector<int>v)
{
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

// for(int i=0;i<1e7;i++)
//    cout<<"BCS";

    int n = 10/5-7;
    deb(n);
    return 0;
}
