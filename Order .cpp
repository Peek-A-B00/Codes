#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



char go(int a)
{
    return a+'0';
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    int ara[100000];
    char str[100000];
    int i=0;
    while(1 ==scanf("%d",&ara[i]))
    {
        str[i]=go(ara[i]);
        printf("%d %c\n",ara[i],str[i]);
        i++;
    }
    return 0;
}



