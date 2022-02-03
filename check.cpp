#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

//For Debugging
#define debug(a...)          {cout<<" #--> ";dbg,a; cout<<endl;}
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
private:
    int id;
    double gpa;


public:
    void print()
    {
        debug(id, gpa);
    }

    void set(int _id, double _gpa)
    {
        id = _id;
        gpa = _gpa;
    }
};




int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    Student s;

//    s.id = 19;
//    s.gpa = 3.99;

    s.set(10, 3.99);
    s.print();


    debug(1e+3, 1e-4)


    return 0;
}
