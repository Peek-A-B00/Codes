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

//struct com
//{
//    bool operator()(k a,k b)
//    {
//        return a.val>b.val;
//    }
//};

struct k
{
    int val;
    int key;
};

bool comp(k a,k b){
    return a.val>b.val;
}

k ar[100001];

class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>v;



        int i=0,c=0;

        for(auto it:nums)
            mp[it]++;
        for(auto it=mp.begin(); it!=mp.end();it++)
            ar[i].val=it->second,ar[i].key=it->first,i++;
//        sort(&ar[0],&ar[i],com());

        sort(&ar[0],&ar[i],comp);
        while(k--)
            v.push_back(ar[c++].key);

        return v;
    }

};

typedef long long LL;
const int Size = 100;
const double EPS = 1e-7; ///1*10^-7

int main()
{
///    freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

//    int tks,ks=1;
//    scanf("%d",&tks);
//    while(tks--)
//    {
////        printf("Case %d: ",ks++);
//    }

//    while(1==scanf("",&))
//    {
//        printf("\n");
//    }

    return 0;
}
