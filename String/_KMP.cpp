
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

/*
    if(st.find(val)!=st.end())
    {

    }
*/


typedef long long LL;
const LL MOD = 1000000007;
const double EPS = 1e-7; ///1*10^-7
const int Size = 101;

int lps[Size];
int lp;
int c;
string s,p;

void prefix()
{
    lp=p.size();
    int k=0;
    lps[k]=0;
    for(int j=1;j<lp;)
    {
        if(p[j]==p[k]){
            lps[j]=k+1;
            k++,j++;
        }
        else{
            if(k!=0)
                k=lps[k-1];
            else
            {
                lps[j]=k;
                j++;
            }
        }
    }
}
void kmp()
{
    prefix();
    bool found=false;
    for(int i=0,j=0;i<s.size();)
    {
        if(s[i]==p[j])
            i++,j++;
        else
        {
            if(j!=0)
                j=lps[j-1];
            else
                i++;
        }
        if(j==lp){
            cout<<"Found"<<endl;
            cout<<"Index "<<(i-lp)<<endl;
            found=true;
        ///    break;   for only search;
            j=lps[j-1];
        }
    }
    if(!found)
        cout<<"Not found"<<endl;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    while(cin>>s>>p)
    {
        kmp();
        printf("\n");
    }

    return 0;
}
