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
///public:
    int id;
    double gpa;

    void print()
    {
        debug(id, gpa);
    }
};


class SecondStudent
{
///private:
public:
    int id;
    double gpa;

    void print()
    {
        debug(id, gpa);
    }
};

/**
Class: By default all the members are private.
Struct: By default all the members are public.
*/

int main()
{
    Student a;
    SecondStudent b;

    a.id = 10; a.gpa = 3.44;
    b.id = 101; b.gpa = 3.64;

    a.print();
    b.print();

    return 0;
}
