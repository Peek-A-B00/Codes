#include <stdio.h>

int main()
{
    int j,k;
    int i=1;
        j=100;
    while( i<=100 ){
        printf("%d ",i);
        while(j >= i){
            printf("%d ",j);
            j--;
        }
        i++;
    }

    return 0;
}
