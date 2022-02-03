#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int charToInt(char ch)
{
    return ch-'0';
}

int main()
{
//    freopen("out1.txt","w",stdout);
//    freopen("in.txt","r",stdin);

    char str[100000];
    int ar[100000];

    while(1== scanf("%s",str))
    {
        int i;
        int len = strlen(str);

        for(i=0;i<len;i++)
        {
            ar[i]=charToInt(str[i]);
        }

        for(i=0;i<len;i++)
            printf("%c %d\n",str[i],ar[i]);

        int value;
        printf("ToInteger: %d\n",value);
    }

    return 0;
}
