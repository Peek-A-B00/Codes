#include<stdio.h>

int main()
{ double a1,a2,b1,b2,c1,c2,x,y,z;



   scanf("%lf",&a1);
   scanf("%lf",&a2);
   scanf("%lf",&b1);
   scanf("%lf",&b2);
   scanf("%lf",&c1);
   scanf("%lf",&c2);
   z=(a1*b2)-(a2*b1);
    x=(c1*b2-c2*b1)/z;
    y=(a1*c2-a2*c1)/z;
    printf("%0.2lf %0.2lf %0.2lf\n",x,y,z);



    return 0;
}
