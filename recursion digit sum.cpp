#include <stdio.h>

int add_digits(int n)
{
    if(n!=0)
        return(n%10+add_digits(n/10));
    else
        return 0;
}
int main()
{
    int n,sum;
    scanf("%d",&n);

    sum=add_digits(n);

    printf("%d",sum);
    return 0;
}
