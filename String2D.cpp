#include <stdio.h>
#include <string.h>

int main()
{
    char in[10][100];
    int n;
    while( scanf("%d",&n)==1)
    {
//        printf("%s\n",in);
//        puts("++++++++++++++++++++");
        for(int i=0;i<n;i++)
        {
            scanf("%s",in[i]);
        }

        puts("------------");

        for(int i=0;i<n;i++)
        {
            int len = strlen(in[i]);

            for( int j=len-1;j>=0;j--)
                printf("%c",in[i][j]);
            printf("\n");
        }

        puts("+++++++++++++\n");
    }

    return 0;
}
