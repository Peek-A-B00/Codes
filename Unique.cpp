#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void Curtail(char str1[],char str3[])
{
    int i,j,k;
    char str2[100];
    int len=strlen(str1);
    for(i=0,j=0,k=0; i<len ;i++,j++)
    {
        int l=0;
        for(j=0 ;i>0 && j<=i ;j++)
        {
            if(str1[i]==str2[j])
            {
                l=1;
                break;
            }
        }
        if(l==0)
        {
            str2[j]=str1[i];
            str3[k]=str2[j];
            k++;
        }
    }
    str3[k]=0;
}

int main()
{
//    freopen("in.txt","r",stdin);

    char str[100];
    char a[100];
    while(1==scanf("%s",str))
    {
        Curtail(str,a);

        printf("\n%s",a);
    }

    return 0;
}
