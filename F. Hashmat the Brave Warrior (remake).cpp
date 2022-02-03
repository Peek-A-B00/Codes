#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
#include <string>
//#include <vector>
//#include <sstream>
//#include <algorithm>
//#include <queue>
using namespace std;

int ara[100001];
int main()
{

    string str1 = "YES";
    string str2 = "NO";
    int n,p,k;
    long long P=0;
    scanf("%d%d%d",&n,&p,&k);
    for(int i=0; i<n; i++)
        scanf("%d",&ara[i]);

    P+=p;
    int f=0;
    for(int i=0; i<n; i++)
    {
       if(P<ara[i]&& k>0)
            k--;
       else if(P>=ara[i])
            P+=ara[i];
       else if(P<ara[i]&& k==0) {
             f=1;
             break;
       }
    }
    if(f==0)
        printf("%s\n",str1.c_str());
    else
        printf("%s\n",str2.c_str());

    return 0;
}
