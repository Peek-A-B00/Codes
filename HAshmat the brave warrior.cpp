#include <stdio.h>

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    long long int a,b;

    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a<b)
        {

            printf("%lld\n",b-a);
        }
        else
        {

            printf("%lld\n",a-b);

        }

    }


    return 0;
}
