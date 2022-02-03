#include<stdio.h>

int main()
{int m,n,s;
    scanf("%d",&m);
    s=0;
    for(n=1;n<=m;n++){
        if(n%2==0){
            continue;
        }
        s=s+n;
    }
    printf("%d",s);

    return 0;
}
