#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



void go(int b)  /// Pass by value.
{
    printf("%s # On Function: %d\n",__FUNCTION__, b);
    b = 100;
}


void goRef(int &b)  /// Pass by reference
{
    printf("%s # On Function: %d\n",__FUNCTION__, b);
    b = 100;
}

void goArr(int ar[], char name[])  /// Array/String is always passed by reference.
{
    ar[0] = -1;
    name[0] = 'H';
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);

    int a = 10;

    go(a);

    printf("A = %d\n", a);
    goRef(a);
    printf("A = %d\n", a);

    int arr[11];
    arr[0]  = 100;

    char name[] = "Maria";

    goArr(arr, name);
    printf("arr[0] = %d\n", arr[0]);
    printf("name = %s\n", name);

    return 0;
}
