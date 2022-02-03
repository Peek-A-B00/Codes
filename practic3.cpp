#include<stdio.h>

int main()
{int total_marks[40]={85,77,93,68,91,63,61,72,61,72,66,64,79,72,61,68,81,62,55,67,58,55,82,70,74,77,75,
83,87,73,62,66,76,70,67,65,77,63};
    int marks_count[101];
    int i;
    for(i=0;i<101;i++)
    {
        marks_count[i]=0;
    }
    for(i=0;i<40;i++)
    {
        marks_count[total_marks[i]]++;

    }
    for(i=50;i<=100;i++)
    {
        printf("marks:%d\tcount:%d\t\n",i,marks_count[i]);
    }


    return 0;

}
