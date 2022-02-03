#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int go(char str[], int l, int d)
{
    int i,j;
    int len=strlen(str);
    for(i=0,j=0;i<l;i++,j++)
    {
        str[j]=str[i];
    }
    for(i=l+d;i<len;i++,j++)
    {
        str[j]=str[i];
    }

    str[j]=0;

    len = strlen(str);
    return len;
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    char str[1000];

    while(1==scanf("%s",str))
    {
        int startInd, deleteLen;

        scanf("%d%d",&startInd, &deleteLen);

        int sz = go(str, startInd, deleteLen);

        printf("str = {%s}  -> %d\n", str, sz);

    }

    return 0;
}
