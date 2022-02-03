///3108
#include <stdio.h>

int main()
{
    int m,sum=0;
    double avg,n;
    scanf("%lf",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&m);
        sum= sum+m;
    }
    avg=sum/n;
    printf("%lf",avg);


    return 0;
}
