# include <stdio.h>

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int t,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        int a,b,j,ods;
        scanf("%d%d",&a,&b);
        ods=0;

        for(j=a;j<=b;j++)
        {
            if(j%2 !=0)
            {
                ods=ods+j;
            }
        }

        printf("Case %d: %d\n",i,ods);
    }

    return 0;
}
