#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <set>
#include <bitset>
#include <algorithm>
#include <list>
#include <utility>
#include <functional>
#include <deque>
#include <numeric>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <assert.h>

#include <unordered_set>
#include <unordered_map>

// #include <bits/stdc++.h>
using namespace std;


#include<cmath>
#include<math.h>

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define PrintConP(mp)    {cout<<#mp<<" #=> ";for(auto &it: mp){cout<<it.first<<":"<<it.second<<", ";} cout<<endl;}
#define PrintCon(mp)    {cout<<#mp<<" #=> ";for(auto &it: mp){cout<<it<<", ";} cout<<endl;}
#define deb(a)      cout<<__LINE__<<"#-> "<<#a<<"  "<<a<<endl

#define debug(a...)          {cout<<" #--> ";dbg,a; cout<<endl;}
struct debugger
{
    ///Collected from rudradevbasak
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;


void maxPQ(){
    puts("MaximumPriorityQueue#");
    priority_queue<int>pq;

    pq.push(2);
    pq.push(20);
    pq.push(1);

    deb(pq.size());
    deb(pq.empty());

    while(pq.size()>0){
        int val = pq.top();
        pq.pop();

        cout<<val<<",";
    }
    cout<<endl;
    deb(pq.size());
    deb(pq.empty());
}

void minPQ(){
    puts("MinimumPriorityQueue#");
    priority_queue<int, vector<int>, greater<int>>pq;

    pq.push(2);
    pq.push(20);
    pq.push(1);

    deb(pq.size());
    deb(pq.empty());

    while(pq.size()>0){
        int val = pq.top();
        pq.pop();

        cout<<val<<",";
    }
    cout<<endl;
    deb(pq.size());
    deb(pq.empty());

    typedef pair<int,int>pii;
    priority_queue<pii, vector<pii>, greater<pii>>pqpii;
}


int main()
{
    // freopen("in.in","r",stdin);
    // freopen("out.out","w",stdout);
    // ios::sync_with_stdio(false);cin.tie(0);  
          
    int tks=1, ks = 1;

    // maxPQ();
    // minPQ();

    return 0;
}



