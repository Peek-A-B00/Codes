#include<stdio.h>

int max_fun(int ara[],int n)
{
    int max=ara[0];
    int i;

    for(i=0;i<n;i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
        }
    }
    return max;
}
int min_fun(int ara[],int n)
{
    int min=ara[0];
    int j;

    for(j=0;j<n;j++)
    {
        if(min>ara[j])
        {
            min=ara[j];
        }
    }
    return min;
}

int main()
{
    int ara[]={-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int n=11;
    int max=max_fun(ara,n);

    printf("%d",max);

    int min=min_fun(ara,n);

    printf(" %d",min);

    return 0;

}
