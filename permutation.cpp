#include<stdio.h>

int main ()
{int i,j,k;
    for(i=1;i<=3;i++){
        for(j=3;j>=1;j--){
            for(k=1;k<=3;k++){
                if(i==j||i==k||j==k){
                    continue;
                }
                printf("\n %d,%d,%d",i,k,j);
            }

        }
      }


    for (i=1;i<=3;i++){
        for(j=1;j<=3 ;j++){
            if(j !=i){
                for (k=1;k<=3;k++){
                    if (k !=i && k !=j){
                        printf("%d,%d,%d\n",i,j,k);
                    }
                }
            }
    }
        }

i=1;
while(i<=3){
    j=1;
    while(j<=3){
            k=1;
            while(k<=3){
                if(i !=k && j !=k && i !=j){
                    printf("%d,%d,%d\n",i,j,k);
                }
                k++;
        }
        j++;
    }
    i++;
}

    return 0;
}
