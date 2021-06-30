#include<stdio.h>

int main()
{
    int a,b,c,d=1,e=4;
    scanf("%d",&a);

    for (b=1; b<=a; b++)
    {
        for (c=d; c<=e; c++)
        {
            if (c%4==0) printf("PUM\n");
            else printf("%d ",c);
        }
        d+=4; e+=4;
    }
    return 0;
}
