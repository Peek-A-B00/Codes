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


struct Nod{
    int u, dis;

    Nod(int iU, int iDis){
        u = iU;
        dis = iDis;
    }

    void print(){
        cout<<u<<" "<<dis<<endl;
    }

    //Implementation of LessThan(<) operator.
    bool operator<(const Nod& b) const{
        return dis < b.dis;
    }
};

int main()
{
    // freopen("in.in","r",stdin);
    // freopen("out.out","w",stdout);
    // ios::sync_with_stdio(false);cin.tie(0);

    int tks=1, ks = 1;

    // Nod a(2, 3);
    // a.print();
    // a = Nod(4, 7);
    // a.print();

    priority_queue<Nod>pq;
    pq.push(Nod(1, 50));
    pq.push(Nod(1, 100));
    pq.push(Nod(1, 70));


    while(!pq.empty()){
        Nod u = pq.top(); pq.pop();
        u.print();
    }

    puts("Sort:");
    vector<Nod>v{Nod(1,5), Nod(2, 3)};
    sort(v.begin(),v.end());
    for(auto u: v){
        u.print();
    }

    return 0;
}




