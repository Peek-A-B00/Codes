#include <stdio.h>

int main ()
{
    freopen ("in.txt","r",stdin);
    freopen ("out1.txt","w",stdout);

    int t,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        int n,sum,r;
        scanf("%d",&n);
        sum=((((n*567)/9 +7492)*235)/47 -498);
        sum=sum/10;
        r=sum%10;

        if(r<0)
        {
            r=r*(-1);

            printf("%d\n",r);
        }
        else
        {

            printf("%d\n",r);

        }
    }


    return 0;
}
