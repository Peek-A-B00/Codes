#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
using namespace std;

char str[1000000];

int KCG(char s[])
{
    int len =strlen(s);
    int i,k,n;

    for(i=0,k=0; i<len ;i++)
    {
        if(isalpha(s[i])&& !isalpha(s[i-1]))
        {
            k++;
            while(i<len && !isalpha(s[i]))
            {
                i++;
            }
        }
    }
    return k;
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int c;
    while(gets(str))
    {
        c=KCG(str);
        printf("%d\n",c);
    }

    return 0;
}

