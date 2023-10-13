#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char str[100000];
char a[100000];
char t[100000];
void fun(char s[],char r[])
{
    int i,j=0;
    int k=0;
    int m=0;
    int len=strlen(s);

    for( i=0; i<len ;i++,j++)
    {
        if(s[i]==' ')
        {
            for(j=j-1; j+1>=0 ;j--,k++)
            {
                if(k==i)
                {
                    r[k]=s[i];
                }
                else
                {
                }
            }

            m=1;
        }
        else
        {
            if(m==1)
            {
                j=0;
                t[j]=s[i];
                m=0;
            }
            if(i==len-1)
            {
                t[j]=s[i];
                while(t[j])
                {
                    r[k]=t[j];
                    k++;
                    j--;
                }
            }
            else
            {
                t[j]=s[i];
            }
        }
    }
    r[k]=0;
}
int main()
{
 //   freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    while(gets(str))
    {
       fun(str,a);
       printf("%s\n",t);
    }
    return 0;
}


