

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
    template<typename T> debugger& operator, (const T v)
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
vector<string>V;
void prefix(string p)
{
    lp=p.size();
    int k=0;
    lps[k]=0;
    for(int j=1; j<lp;)
    {
        if(p[j]==p[k])
        {
            lps[j]=k+1;
            k++,j++;
        }
        else
        {
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
int kmp(string s,string p)
{
    c=0;
    prefix(p);
    bool found=false;
    for(int i=0,j=0; i<s.size();)
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
        if(j==lp)
        {
            c++;
            j=lps[j-1];
        }
    }
    return c;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int n,sz;
    cin>>n>>sz;
    char a;
    for(int k=0; k<n; k++)
    {
        cin>>a;
        if(a=='I' ||a=='i')
        {
            string str;
            cin>>str;
            V.push_back(str);
            continue;
        }
        int sum=0;
        string P;
        cin>>P;
        if(V.find(P)!=V.end())
        {
            string pat;
            for(int q=0; q<V.size(); q++)
            {
                string S=V[q];
                for(int i=0; i<sz; i++)
                {
                    for(int j=0; j<=i; j++)
                    {
                        pat+=P[j];
                    }
                    int su=kmp(S,pat);
                    deb(su)
                    sum+=su;
                    pat.clear();
                }
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
