#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    int a,b,c,d,sum;
    int carryCnt;
    int carry;

    while(2==scanf("%d%d",&a,&b) && (a || b))
    {
        carryCnt = 0;
        carry = 0;

        while(a || b )
        {
            c=a%10;
            d=b%10;

            a=a/10;
            b=b/10;

            sum = c + d + carry;

            carry = sum/10;

            carryCnt += carry;      ///carryCnt = carryCnt + carry;
        }

        if(carryCnt==0)
        {
            printf("No carry operation.\n");
        }
        else if(carryCnt==1)
        {
            printf("1 carry operation.\n");
        }
        else
        {
            printf("%d carry operations.\n",carryCnt);
        }


    }

    return 0;
}
