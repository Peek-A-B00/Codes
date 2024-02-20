//#include<bits/stdc++.h>
#include<iostream>
#include <bitset>
using namespace std;

#define deb(a)      cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

void add(int &n,int x)
{
    n= (n ^(1<<(x-1)));
}
void Remove(int& n,int x)
{
    n= (n ^(1<<(x-1)));
}
void display(int n)
{
    for(int i=0;i<5;i++){
        if(n &(1 << i))
            cout<<1;
        else
            cout<<0;
    }
    cout<<endl;
}
int main()
{
    int n=15;
    display(n);
    Remove(n,4);
    display(n);
    add(n,5);
    display(n);
    cout<<(1<<2-1)<<endl;

}
