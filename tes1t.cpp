#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int ar[100],i,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        ar[i]=i;
        printf("%d\n",ar[i]);
    }

    return 0;
}
