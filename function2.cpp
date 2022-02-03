#include<stdio.h>

double add(double x,double y);

int main()
{
    double a=2.5,b=4.2,c;

    c=add(a,b);

    printf("%f",c);

    return 0;
}

double add(double n1,double n2)
{
    double sum=n1+n2;
    return sum;
}
