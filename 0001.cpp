 #include <stdio.h>

    int main()

{
  int num1,num2,value;

  char sign;

  printf("please enter the number:");

  scanf("%d",&num1);

  printf("please enter another number:");

  scanf ("%d",&num2);

  value=num1+num2;

//  sign='+';

  printf("%d + %d=%d\n",num1 ,num2,value);

  value=num1-num2;

//  sign='-';

  printf("%d - %d=%d\n",num1,num2,value);

  value=num1*num2;

//  sign='*';

  printf("%d * %d=%d\n",num1,num2,value);

  value=num1/num2;

//  sign='/';

  printf("%d / %d=%d\n",num1,num2,value);

  return 0;

}

