#include<stdio.h>

int main()
{
    char ch='W';

    if( ch >= 'a' && ch <= 'z' ) {
        printf("%c is a lower case\n",ch);

    }
    else(ch >= 'A' && ch <= 'Z'); {
        printf("%c is a upper case",ch);
    }


    return 0;
}
