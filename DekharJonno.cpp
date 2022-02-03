#include <stdio.h>


int main()
{
    freopen("in.txt","r",stdin);
    freopen("out1.txt","w",stdout);

    int tks;
    scanf("%d",&tks);

    while(tks--){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>b)printf(">\n");
        else if(a<b)printf("<\n");
        else printf("=\n");
    }

    return 0;
}
