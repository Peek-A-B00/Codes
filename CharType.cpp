#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include<iostream>
using namespace std;
#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

int main()
{
    char s[100];
    char up[100];
    char lo[100];

    while(cin>>s)
    {
        int a, d, an, l, u;

        a = d = an = l = u = 0;

        memset(up, 0, sizeof (up));     ///Works only for string/char array.
        memset(lo, '\0', sizeof (lo));

        for(int i=0;s[i];i++)
        {
            char c = s[i];

            if(isalnum(c))  an++;
            if(isalpha(c))  a++;
            if(isdigit(c))  d++;
            if(isupper(c))  u++;
            if(islower(c))  l++;


            deb(a);
            up[i] = toupper(c);
            lo[i] = tolower(c);
        }

        printf("Up: %s\n", up);
        printf("Low: %s\n",lo);

        printf("A: %d D: %d AN: %d L: %d U: %d\n", a, d, an, l, u);

    }
    return 0;
}
