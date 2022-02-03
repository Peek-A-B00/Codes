#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
using namespace std;

char str[10000];
int KCG(char s[])
{
    int i,k;
    int m=0;
    for(i=0,k=0;s[i];i++)
    {
        if(isalpha(s[i]))
        {
            if(m==0 && s[i-1] !=' ')
            {
                k++;
                m=1;
            }
            else if(s[i-1]==' ' && m==1)
            {
                k++;
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

