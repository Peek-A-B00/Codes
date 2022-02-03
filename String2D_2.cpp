#include <stdio.h>
#include <string.h>

void _reverse(char data[]){
    int len = strlen(data);
    int s = 0, e=len-1;

    while(s<e){
        char t = data[e];
        data[e] = data[s];
        data[s] = t;
        s++;
        e--;
    }
}

int main()
{
    freopen("str.txt","r",stdin);

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

//            for( int j=len-1;j>=0;j--)
//                printf("%c",in[i][j]);
//            printf("\n");

            _reverse(in[i]);
            printf("%s\n",in[i]);
        }

        puts("+++++++++++++\n");
    }

    return 0;
}
