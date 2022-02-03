#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

typedef long long LL;
const int SIZE = 100;

LL toInt(char s[])
{
    LL ret = 0;
    for(int i=0;s[i];i++)
    {
        int d = s[i]-'0';
        ret = ret* 10 + d;
    }
    return ret;
}

void toStr(LL val, char strInt[])
{

}

int main()
{
    char strInt[SIZE];
    char outStr[SIZE];

    while(cin>>strInt)
    {
        LL val = toInt(strInt);
        deb(val)
        toStr(val, outStr);
        printf("Back to String: %s\n", outStr);
    }

    return 0;
}
