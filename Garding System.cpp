#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n<40)
    {
        printf("Grade F");
    }
    else if(n<45)
    {
         printf("Grade D");
    }
    else if(n<50)
    {
         printf("Grade C");
    }
    else if(n<55)
    {
         printf("Grade C+");
    }
    else if(n<60)
    {
         printf("Grade B-");
    }
    else if(n<65)
    {
         printf("Grade B");
    }
    else if(n<70)
    {
         printf("Grade B+");
    }
    else if(n<75)
    {
         printf("Grade A-");
    }
    else if(n<80)
    {
         printf("Grade A");
    }
    else if(n <= 100)
    {
         printf("Grade A+");
    }

    return 0;
}
