#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int go(int a, int b, int carry){
//    printf("\t->\t%d + %d + %d\n", a, b, carry);

    if(a + b + carry == 0){
        return 0;
    }

    int sum = a%10 + b %10 + carry;

    return sum / 10 + go(a/10, b/10, sum/10);
}


int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int a,b,carry,c;

    while(2==scanf("%d%d",&a,&b) && a||b)
    {
        carry=0;

        c =go(a,b,carry);

      if(c ==0)
      {
          printf("No carry operation.\n");
      }
      else if(c ==1)
      {
          printf("%d carry operation.\n",c);
      }
      else
      {
          printf("%d carry operations.\n",c);
      }
    }

    return 0;
}

