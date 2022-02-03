#include<stdio.h>

int main()
{double a,u,v,t,s;
    scanf("%lf%lf%lf",&a,&u,&t);
    v=u+(a*t);//if after  't' moment 'u' becames 'v' than afer  '2t' moment
    s=v*2*t;
    printf ("%lf %lf",v,s);

    return 0;
}
