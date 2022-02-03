#include <stdio.h>

int main()
{
    int n=2;
    for(int i=1;i<=n;i++)
        for(int j=2;j<=4;j++)
            for(int k=1; k<=3;k++)
            {
                int m=i*j*k;
                if(m%2==0)
                    printf("%d x %d x %d = %d (minimum divisor 2)\n",i,j,k,m);
                else if(m%3==0)
                    printf("%d x %d x %d = %d (minimum divisor 3)\n",i,j,k,m);
                else
                    continue;
            }

    return 0;
}
