#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;

int ara[100001];
int main()
{
//   freopen("in.txt","r",stdin);
///    freopen("out.txt","w",stdout);

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
       else if(P<ara[i]&& k<=0) {
             f=1;
             break;
       }
    }
    if(f==0)
    {
        string s="YES";
        printf("%s\n",s.c_str());
    }
    else
    {
        string s="No";
        printf("%s\n",s.c_str());
    }

    return 0;
}
