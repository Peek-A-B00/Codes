#include<stdio.h>
#include <math.h>

int main()
{
     int n,f;
    while(1==scanf("%d",&n))
    {
        int i=2;
        if(n>i)
        {
            printf("%d\n",i);
        }
        for(i=3; i<=n ; i+=2)
        {
            f=0;
            for(int j=sqrt(i); j>1; j--)
            {
                if(i%j==0)
                {
                    f=1;
                }
            }
            if(f==0)
            {
                printf("%d\n",i);
            }
        }
        printf("\n");
    }


    return 0;
}
