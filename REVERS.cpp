#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void REVERS(char str1[], char str2[])
{
    int len =strlen(str1);
    int i,j;
    for(i=0,j=len-1; i<len; i++,j--)   ///if i use '<' then i need to  str2[i]=0; it.
    {
        str2[i]=str1[j];
    }
}


int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    char abc[100];
    char a[100];
    while(1==scanf("%s",abc))
    {
        REVERS(abc,a);

        printf("%s",a);
    }

    return 0;
}
