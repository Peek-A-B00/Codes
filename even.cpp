/// 3108
#include <stdio.h>

int main()
{
    int n,l,i;
    scanf("%d%d",&l,&n);

    for(i=l; i>0; i=i-2);
    if(i!=0)
    {
        l=l+1;
    }

    for( i=l; l<n && i<=n ; i=i+2)
    {
        printf("%d\n",i);
    }


    return 0;
}
