#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

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

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
typedef long long LL;

struct Student
{
    int id;
    double g;

    ///Constructor, no return type and name is exactly like structure's name.
    Student()
    {
        puts("Called");
        id = 111;
//        g = 3.99;
    }

    void print()
    {
        debug(id, g);
    }
};


int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    const int n =10;
    puts("Start");

    Student var;

    puts("The End");
    var.print();

    Student a[n];

    for(int i=0;i<n;i++){
        a[i].print();
    }


    return 0;
}
