#include<bits/stdc++.h>
using namespace std;

const int b1=32;    /// integer range
const int b2=64;    ///long long range

int main() {
ios_base::sync_with_stdio(0); cin.tie(0);
//        freopen("in.in", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n;
    while(cin>>n){
        bitset<32>b(n);
        cout<<"bits-> "<<b<<endl;
        cout<<"1-> "<<b.count()<<endl;
        cout<<"0-> "<<b.size()-b.count()<<endl;
    }
  return 0;
}
