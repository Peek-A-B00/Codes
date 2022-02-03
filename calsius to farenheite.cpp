#include<stdio.h>

int main()
{double c,f;
    //calsius to farenhiete
//    scanf("%lf",&c);
//    f=(c*1.8)+32;
//    printf("%0.2lf",f);

    //farenhiete to calsius
    scanf("%lf",&f);
    c=0.56*(f-32);
    printf("%0.2lf",c);

    return 0;
}
