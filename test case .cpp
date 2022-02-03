#include <stdio.h>

int main()
{
    int b,s,BAN=0,SLK=0;
    int hcentury=0;

    for(int i=0; i<10; i++)
    {
        scanf("%d",&b);
        BAN+=b;

        if(b>=50)
            hcentury++;
    }
    for(int i=0; i<10; i++)
    {
        scanf("%d",&s);
        SLK+=s;

        if(s>=50)
            hcentury++;
    }
    if(BAN<SLK)
        printf("SLK won\nTotal half-centuries:%d\n",hcentury);
    else
        printf("BAN won\nTotal half-centuries:%d\n",hcentury);


    return 0;
}
