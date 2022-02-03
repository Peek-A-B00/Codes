#include<stdio.h>

int main()
{ int ara[10]={10,5,4,5,86,5,77,6,23,5};
    int i,count;
    int x=5;
    count=0;
    for (i=0;1<10;i++){
        if(ara[i]==x){
            count++;
        }
        printf("%d %d\n",x,count);
    }
        return 0;
}
