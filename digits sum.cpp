#include<stdio.h>

int main()
{
    int n,sum,reminder;
    scanf("%d",&n);
    sum=0;

    while(n!=0)
    {
        reminder=n%10;
        sum=sum+reminder;
        n=n/10;
    }
    printf("%d",sum);

//    for(scanf("%d",&n);n!=0;n=n/10)
//    {
//        reminder=n%10;
//        sum=sum+reminder;
//        printf("\n%d",sum);
//    }


    return 0;
}
