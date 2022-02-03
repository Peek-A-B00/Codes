#include<stdio.h>
int main()
{double a,r,y,t,m;
    scanf("%lf%lf",&a,&r);
    scanf("%lf",&y);
    t=a+((a*r*y)/100.00);
    m=t/(y*12);
    printf("%0.2lf %0.2lf",t,m);




    return 0;
}
