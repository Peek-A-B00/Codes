#include<stdio.h>

int main()
{
    int i;
  i=1;
    while(i<100){
        printf("%d\n",i);
        i++;
        if(i>10){
            break;
        }

    }

//    while(i>10){
//        printf("%d\n",i);
//        i++;
//        if(i>100){
//            break;
//        }
//    }

    return 0;
}
