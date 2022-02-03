#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void Insert(char str1[],char str2[],char str3[] ,int startInd)
{
    int i,j;
    for(i=0,j=0; i<startInd-1 ; i++,j++)
    {
        str3[j]=str1[i];
    }
    int len1=strlen(str2);
    for(i=0; i<len1-1 ; i++,j++)
    {
        str3[j]=str2[i];
    }
    int len2=strlen(str1);
    int len=len1+len2-1;
    for(i=startInd-1; i<len; i++,j++)
    {
        str3[j]=str1[i];
    }
    str3[j]=0;
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    char str[100];
    char add[100];
    char in[1000];
    int l;
    while(1==scanf("%s",str))
    {
        scanf("%s",add);
        scanf("%d",&l);
        Insert(str,add,in,l);

        printf("%s",in);

    }

    return 0;
}

