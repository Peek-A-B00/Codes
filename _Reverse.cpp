#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include<iostream>
#include<algorithm>

using namespace std;

void revers(char s[])
{
    int len = strlen(s);

    for(int i=0;i<=len/2;i++)
    {
        int j = len-i-1;
        char t= s[j];
        s[j] = s[i];
        s[i] = t;
    }
}

void Itostr(int a,char s[])
{
    int i;
    for( i=0; a ;i++)
    {
        char ch=a % 10;
        s[i]= ch +'0';
        printf("\t%c\n",s[i]);
        a=a/10;
    }
    s[i]=0;
    revers(s);

//    reverse(s, s+i);
//    reverse(&s[0], &s[i]);
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    char str[1000];
    int a;
    while(1 ==scanf("%d",&a))
    {
       Itostr(a,str);
       printf("%s\n",str);
    }
    return 0;
}


