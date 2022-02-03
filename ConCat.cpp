#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void Insert(char str1[],char str2[])
{
    int i,j;
    int len1 = strlen(str1);
    int len  = strlen(str2)+len1;
    for(i=len1,j=0; i<len ; i++,j++)
    {
        str1[i]=str2[j];
    }
    str1[i]=0;
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    char str[100];
    char add[100];
    while(1==scanf("%s",str))
    {
        scanf("%s",add);
        Insert(str,add);

        printf("%s",str);
    }

    return 0;
}

