
#include<stdio.h>
int main()
{int first_math[]={83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90,
59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82,
82, 58, 69, 67, 53, 56, 71, 62};
     int second_math []={86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63,
86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58,
69, 67, 53, 56, 71, 62, 49};
     int final_math[]={87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55,
69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64,
55, 69, 85, 81, 80, 67, 88, 71};
     int ara[40];
     int i,j;
    for(i=0;i<40;i++){
        ara[i]=first_math[i]/4.0+second_math[i]/4.0+final_math[i]/2.0;
        printf("%d\t%d \n",i+1,ara[i]);
    }

//    for(i=0;i<10;i++){
//        printf("%d %0.2lf \n",i+1,ara[i]);
//
//     }




    return 0;
}