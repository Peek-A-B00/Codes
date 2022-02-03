#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<#a<<" -> "<<a<<endl;


void makeUnique(char txt[], char uni[])
{
    int SZ = 26;
    int flag[SZ];
    int cnt = 0;

    ///memset(flag, 0, sizeof (flag));   //Only works for zero value for integer/long long. Since it works for byte by byte.

    for(int i=0;i<SZ;i++)   flag[i] = 0;

    for(int i=0;txt[i];i++)
    {
        char ch = txt[i];
        int ind = ch - 'a';

        if(0 == flag[ind]){
            flag[ind] = 1;
            uni[cnt++] = ch;
        }
    }

    uni[cnt] = 0;
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    char txt[100];
    char uni[100];

    while(cin>>txt)
    {

        makeUnique(txt, uni);
        puts(uni);
    }

    return 0;
}
