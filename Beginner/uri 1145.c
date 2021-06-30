#include<stdio.h>

int main()
{
    int a,b,c,d=0;
    scanf("%d%d",&a,&b);

    for (c=1; c<=b; c++)
    {
        d++;
        if (d==a) printf("%d",c);
        else printf("%d ",c);

        if (d==a)
        {
            d=0;
            printf("\n");
        }
    }
    return 0;
}
