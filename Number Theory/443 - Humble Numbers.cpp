
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
const int Size = 5845;
int N=5843;
LL hm[Size],a,b,c,d,w,x,y,z,n;
void Humble_number()
{
    hm[1]=a=b=c=d=n=1;
    while(n!=N)
    {
        w=2*hm[a];
        x=3*hm[b];
        y=5*hm[c];
        z=7*hm[d];
        hm[++n]=min(w,min(x,min(y,z)));
        if(hm[n]==w)
            a++;
        if(hm[n]==x)
            b++;
        if(hm[n]==y)
            c++;
        if(hm[n]==z)
            d++;
    }
}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);


    int t;
    Humble_number();
    while(1==scanf("%d",&t)&& t)
    {
        if(t%10==1 && t%100!=11)
            printf("The %dst humble number is %d.\n",t,hm[t]);
        else if(t%10==2 && t%100!=12)
            printf("The %dnd humble number is %d.\n",t,hm[t]);
        else if(t%10==3 && t%100!=13)
            printf("The %drd humble number is %d.\n",t,hm[t]);
        else
            printf("The %dth humble number is %d.\n",t,hm[t]);
    }

    return 0;
}
