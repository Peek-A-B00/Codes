#include<stdio.h>

int String_Length(char str[])
{

    int i,length=0;
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    return length;
}
int main()
{
    char in[100];
    int length,i=0;

    while(scanf("%s",in)==1)
    {
        puts("+++++++++++++++++++++++");
        length=String_Length(in);

        printf("%d\n",length);
    }

    return 0;
}

