#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    char a[100];
    char b[] = "Maksud";

    strcpy(a, b);
    printf("a : %s\n", a);

    if(0 == strcmp(a, b)){
        puts("Matched");
    }

    return 0;
}
