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


typedef long long LL;
const int Size = 100;
const double EPS = 1e-7; ///1*10^-7

class Solution {
public:
    struct st
    {
        int val;
        string key;
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        vector<string>v;
        struct st ar[501];
        int c=0,C=0;

        for(auto it:words)
            mp[it]++;
        for(auto it=mp.begin(); it!=mp.end();it++){
            ar[c].val=it->second;
            ar[c].key=it->first;
            c++;
        }
        sort(ar,ar+c,com());
        while(k--)
            v.push_back(ar[C++].key);

        return v;
    }
    struct com{
        bool operator()(st a,st b){
            if(a.val!=b.val)
                return a.val>b.val ;
            return  a.key<b.key;
        }
    };
};
int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);


    return 0;
}
