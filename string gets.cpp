#include<stdio.h>

int main()
{
    char ara[100];

    while(gets(ara))
    {
//        printf("%s\n",ara);
//        puts("+++++++++++++");
        int i=0;

        while(ara[i])
        {
            printf("%c",ara[i]);
            i++;
        }
        int length=i;
        puts("\n++++++++++++++++++\n");
        printf("%d",length);
    }




    return 0;
}

