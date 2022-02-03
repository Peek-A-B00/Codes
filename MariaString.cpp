#include <stdio.h>
#include <string.h>

int main()
{
    char in[100];

    ///Won't include space
    while( scanf("%s",in)==1)
    {
//        printf("%s\n",in);
//        puts("++++++++++++++++++++");
        int i = 0;
        while(in[i])
        {
//            printf("%c %d\n",in[i],in[i]);
            i++;
        }
        int len = i;
        printf("\nLen = %d\n",len);
        puts("----------------------------------");

        len = strlen(in);
        printf("StrLen = %d\n\n",len);
    }

    return 0;
}
