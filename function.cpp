#include<stdio.h>

void printNTimes(int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("maria\n");
}

int Addition(int a, int b)
{
    int sum = a+b;
    return sum;
}

int main()
{
    int a,b,c;

    scanf("%d",&a);
    printNTimes(a);
//
//    scanf("%d",&b);
//    printNTimes(b);
//
//    scanf("%d",&c);
//    printNTimes(c);

//
//    int val1, val2,s;
//    scanf("%d%d",&val1,&val2);
//
//    s = Addition(val1,val2);
//
//
//    printf("Sum is - > %d\n",sum);

    return 0;
}
