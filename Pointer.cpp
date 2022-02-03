#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void funPtr(int *p)
{
    *p += 10;
}



int main()
{
    int a = 5;
    printf("INT: %d\n",sizeof(a));

    printf("A = %X %d\n", &a, a);

    int *p;

    p = &a;

    printf("A = %X %d\n", p, *p);

    funPtr(&a);
    printf("FunPTR# A = %X %d\n", &a, a);

    int ar[10];
    printf("ar[10]: %d\n",sizeof(ar));

    for(int i=0;i<10;i++)
        ar[i] = 100+i;

    for(int i=0;i<10;i++)   printf("%d, ", ar[i]);  printf("\n");

    p = &ar[0];
    p = ar;

    printf("%X %X\n", &ar[0], ar);

    for(int i=0;i<10;i++){
        printf("%X %d\n", p, *p);
        p++;
    }

    funPtr(&ar[0]);

    printf("%d\n", ar[0]);

    char in[100];
    printf("in[100]: %d\n",sizeof(in));

    char *pch = &in[10];


    scanf("%s",&in[10]);
///    scanf("%s",in);

    printf("%s len: %d\n",&in[10], strlen(&in[10]));
///    printf("%s len: %d\n",in, strlen(in));

    return 0;
}
