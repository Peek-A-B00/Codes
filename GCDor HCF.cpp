#include<stdio.h>
int main ()
{int a,b,x,gcd;
    scanf("%d%d",&a,&b);
    if(a<b){
        x=a;
    }
    else{
        x=b;
    }
    for(;x>=1;x--){
        if(a%x==0 && b%x==0){
            gcd=x;
            break;
        }
    }
    printf("%d",gcd);

    return 0;
}
