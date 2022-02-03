#include <stdio.h>


int main()
{
    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int tks,a,b;


    while( 2 == scanf("%d%d",&a,&b))
    {
        printf("%d\n",a+b);

    }

    return 0;
}
