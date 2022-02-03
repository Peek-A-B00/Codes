#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str1[100];
    char str2[100];

    scanf(" %[^\n]",str1);
    scanf(" %[^\n]",str2);

    int s1=0,s2=0,n;
    for(int i=1; i<strlen(str1);i+=2)
        if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='y')
            s1++;
    for(int i=1; i<strlen(str2);i+=2)
        if(str2[i]=='a'||str2[i]=='e'||str2[i]=='i'||str2[i]=='o'||str2[i]=='u'||str2[i]=='y')
            s2++;
    if(s1==s2)
        printf("Strings are same\n");
    else{
        if(s1>s2)
            n=s1-s2;
        else
            n=s2-s1;
        printf("%d string mismatch found\n",n);
    }
    return 0;
}
