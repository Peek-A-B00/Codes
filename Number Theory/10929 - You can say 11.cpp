#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
using namespace std;
#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

typedef long long LL;

bool Ycs(char s[])
{
    int i,d,r=0;
    int len=strlen(s);

    for(i=0; i<len; i++)
    {
        int dig = s[i]-'0';
        d=r*10+dig;
        r=d%11;
    }
    return r;
}
char str[100000];
int main()
{
    while(1==scanf("%s",str)&& strcmp(str, "0"))    /// if 'A line containing the number ‘0’ is end of the input'.
    {                                                  /// str[0]==0 or strcmp(str,"0")   .
        bool b =Ycs(str);
        if(!b)
            printf("%s is a multiple of 11.\n",str);
        else
            printf("%s is not a multiple of 11.\n",str);
    }
    return 0;
}
