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
    char name[100];
    int age;
    double gpa;
};

struct Class
{
    char name[100];
    Student cr;
};

void printStudent(Student st){
    printf("%s %d %.2lf\n", st.name, st.age, st.gpa);
}


int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    Student s, s1;
    Class c, c1, c2;

    c.cr.age  = 10;
    strcpy(c.cr.name, "Class CR");
    c.cr.gpa  = 4.44;




    strcpy(s.name, "Hamza");
    s.age = 16;
    s.gpa = 4.56;


    debug(s.name, s.age, s.gpa);
    s1 = s;
    debug(s1.name, s1.age, s1.gpa);


    return 0;
}
