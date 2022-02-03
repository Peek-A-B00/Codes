#include<stdio.h>


int main(){

    char c = 'A';
    int i = 65;

    printf("%d %c\n", i, c);
    printf("%d %c\n", i, i);
    printf("%d %c\n", c, c);

    i='A';

    for(i = 'A'; i<='Z'; i++){
        printf("%c => %d\n",i, i);
        i ++;
    }

    printf("----------------------\n");

    for(i = 'A'; i<='Z'; i = i + 3){
        printf("%c => %d\n",i, i);

    }

    return 0;
}
