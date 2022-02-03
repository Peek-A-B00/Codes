#include <stdio.h>
#include <string.h>
#include <math.h>

#include <iostream>
using namespace std;

int main()
{
    char str[1001];
    int tks,ks=1;
    cin>>tks;
    while(tks--)
    {
        printf("Case %d:\n",ks++);
        cin>>str;
        for(int i=0; i<strlen(str); i++)
        {
            int d=str[i]-'a';
            if(d<3)
            {
                int t=d+1;
                printf("2-%d times\n",t);
            }
            else if(d<6)
            {
                int t=d-2;
                printf("3-%d times\n",t);
            }
            else if(d<9)
            {
                int t=d-5;
                printf("4-%d times\n",t);
            }
            else if(d<12)
            {
                int t=d-8;
                printf("5-%d times\n",t);
            }
            else if(d<15)
            {
                int t=d-11;
                printf("6-%d times\n",t);
            }
            else if(d<19)
            {
                int t=d-14;
                printf("7-%d times\n",t);
            }
            else if(d<22)
            {
                int t=d-18;
                printf("8-%d times\n",t);
            }
            else if(d<26)
            {
                int t=d-21;
                printf("9-%d times\n",t);
            }
        }
    }

    return 0;
}
