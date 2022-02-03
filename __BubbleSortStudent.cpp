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
    double gpa;
    int age;

    void read()
    {
        scanf("%s%d%lf",name, &age, &gpa);  ///cin>>name>>age>>gpa;
    }

    void write()
    {
        cout<<"Name: "<<name<<"  Age: "<<age<<"  GPA: "<<gpa<<endl;
    }
};

/**
Decreasing of CGPA, Decreasing of age, Dictionary order of name.
*/

const double EPS = 1e-7;
int compare(Student a, Student b)  /// a > b  ==>  Return true when priority of (a) is less than (b).
{
    if(fabs(a.gpa-b.gpa) > EPS)
        return a.gpa < b.gpa;

    if(a.age != b.age)
        return a.age < b.age;

    return 0 < strcmp(a.name, b.name);
}

void bubbleSort(int n, Student st[])
{
    for(int i=1;i<n;i++)
        for(int j=1;j<n;j++)
            if(compare( st[j-1], st[j]))            ///if(st[j-1] > st[j])  -> true/false
            {
                swap(st[j-1], st[j]);
            }
}

int main()
{
    freopen("st.in", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n;
    Student st[100];

    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
//            scanf("%s%d%lf",st[i].name, &st[i].age, &st[i].gpa);
            st[i].read();
        }

        bubbleSort(n, st);

        for(int i=0;i<n;i++)
        {
//            debug(st[i].name, st[i].age, st[i].gpa);
            st[i].write();
        }

    }
    return 0;
}
