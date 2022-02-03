#include <stdio.h>


int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    char ara[100];
    char V[]={'a','e','i','o','u'};

    while(scanf("%s",ara)==1)
    {
        int i=0;

        while(ara[i])
        {
            int j;

            for(j=0;j<5;j++)
            {
                if(ara[i]==V[j])
                {
                    printf("%c",ara[i]);
                }
                else
                {
                    continue;
                }
            }

            i++;
        }

    }

    return 0;
}

