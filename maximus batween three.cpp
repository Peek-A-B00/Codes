#include<bits/stdc++.h>
using namespace std;

int main()

{
    int a,b,c;
    cin>> a>>b>>c;

    if( b < a && c < a)
    {
        cout<< a <<endl;
    }
    else if( a < b && c < b)
    {
        cout<< b << endl;

    }
    else if ( a < c && b < c)
    {
        cout<< c<< endl;
    }

}
