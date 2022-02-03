#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include<iostream>
using namespace std;

int main()
{
        freopen("in.txt","r",stdin);
//    freopen("out1.txt","w",stdout);
    char s[100];
    char up[100];

    int x=0,y=0;
    printf("X:%d  Y:%d\n", x++, ++y);
    printf("X:%d  Y:%d\n", x,  y);

    while(cin>>s)
    {
        puts(s);
        int a, d, an, l, u;

        a = d = an = l = u = 0;
        int ind = 0;
        for(int i=0;s[i];i++)
        {
            char c = s[i];
            char t = toupper(c);
            printf("%d: %c  ->%c\n", i, c, t);

            if(isupper(c))
            {
                up[ind] = t;        ///up[ind++] also works.
                ind++;

                printf("\t\t%d: Dhukse\n", i, c, t);
            }
        }
        up[ind] = 0; ///'\0'
        printf("Up: [%s]\n", up);

    }

    return 0;
}
