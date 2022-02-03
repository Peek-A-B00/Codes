#include <stdio.h>

int getInt(int c){
    return c + '0';
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    char c = '8';

    printf("%d %c\n", c, c);

    printf("%c\n",getInt(c));

    return 0;
}
