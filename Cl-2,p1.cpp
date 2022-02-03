#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[100];
    scanf("%[^\n]",str);
    int l=strlen(str);
    int c=0;
    for(int i=0; i<l;i++)
    {
        if(str[i]=='a'||str[i]=='A')
            c++;
        else if(str[i]=='e'||str[i]=='E')
            c++;
        else if(str[i]=='i'||str[i]=='I')
            c++;
        else if(str[i]=='o'||str[i]=='O')
           c++;
        else if(str[i]=='u'||str[i]=='U')
            c++;
        else if(str[i]=='y'||str[i]=='Y')
            c++;
    }
    printf("%d\n",c);

    return 0;
}
