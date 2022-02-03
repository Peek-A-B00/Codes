#include<stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    char str[2001];
    char s[2001];
    int tks,j,i;
    scanf("%d",&tks);
    while(tks--)
    {
        j=0;
        scanf("%s",str);
        int l=strlen(str);
        for(i=0; i<l;i++)
        {
            char c=str[i];
            str[i] = toupper(c);
            if(str[i]=='A' || str[i]=='E' || str[i]=='K' || str[i]=='O' || str[i]=='U')
            {
                s[j++]=str[i];
                s[j++]='#';
                s[j++]='#';
            }
        }
        s[j]=0;
        printf("%s\n",s);
    }
	return 0;
}
