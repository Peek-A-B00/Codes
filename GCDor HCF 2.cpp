#include<stdio.h>

int main()
{ int a,b,t,hcf;
    scanf("%d%d",&a,&b);
    if(a==0){
        hcf=a;
    }
    else if(b==0){
        hcf=b;
    }
    else{
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
            }
        hcf=a;
    }
    printf("%d",a);

    return 0;
}
