#include<stdio.h>

double circle_fun(double pi,double r)
{
    double area= pi*r*r;

    return area;
}
int main ()
{
    double area,r,pi=3.1416;
    scanf("%lf",&r);
    area=circle_fun(pi,r);

    printf("%lf",area);

    return 0;
}
