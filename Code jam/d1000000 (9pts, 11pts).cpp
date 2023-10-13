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
const int Size = pow(10,5)+1;
int n;
int arr[Size];
int solve()
{
    map<int,int>mp;
    int c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(auto i: mp)
    {
        if(i.first<i.second){
            c+=i.first;
            }
        else{
            c+=i.second;}
        if(c>i.first)
            c=i.first;
    }
    return c;
}

int main()
{
//    freopen("Code jam.in","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,ks=1;
    scanf("%d",&tks);
    while(tks--)
    {
        printf("Case #%d: ",ks++);
        cout<<solve()<<endl;
    }


    return 0;
}
