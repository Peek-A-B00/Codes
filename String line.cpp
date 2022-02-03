#include<stdio.h>
#include<string.h>

int main()
{
    char ara[100];

    while(scanf("%[^\n]",ara)==1)
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


