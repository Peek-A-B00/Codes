#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   freopen("in.txt","r",stdin);
    char str[1001];
    int f=0;
    for(int i=0; i<5; i++)
    {
        scanf("%s",str);
        int l=strlen(str);
        if(l>5||l<5)
            f=1;
    }
    if(f==0)
        printf("Mim\n");
    else
        printf("Pocha Dim\n");

	return 0;
}
