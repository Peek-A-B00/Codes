#include <stdio.h>

int main()
{int a,b,t,m,lcm,gcd;
    scanf("%d%d",&a,&b);
    //lcm*gcd=a*b;
    m=a*b;
    if(a==0){
        gcd=a;
    }
    else if(b==0){
        gcd=b;
    }
    else{
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    lcm=m/gcd;
    printf("%d\n%d",lcm,gcd);


    return 0;
}
