#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int i=1;
    while(i<20)
    {
        i++;
        if(i%2 ==0)
        {
             continue;
        }
        else
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
