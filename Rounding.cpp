#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int up, down;
    double x = 3.78;

    up = ceil(x) ;
    down = floor(x);

    printf("%d  %d\n",up, down);

    return 0;
}
