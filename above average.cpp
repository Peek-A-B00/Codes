#include <stdio.h>

int main()
{
    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    int C;
    scanf("%d",&C);

    while (C--)
    {
        int N,i;
        double t;
        scanf("%d",&N);
        int ara[N];
        t=0;

        for(i=0;i<N;i++)
        {
          scanf("%d",&ara[i]);
          t=t+ara[i];
        }

        double avg=t/N;
        double c=0;

        for(i=0;i<N;i++)
        {
            if(ara[i]>avg)
            {
                c++;
            }

        }
        double p=(c*100)/N;
        char s='%';

        printf("%0.3lf%c\n",p,s);
    }



    return 0;
}
