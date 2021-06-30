#include<stdio.h>

int main()
{
    int a,b,c,d=0;
    scanf("%d%d",&a,&b);

    while (b<=0)

        scanf("%d",&b);
    for (c=1; c<=b; c++)
    {
        d+=a;
        a++;

    }
    printf("%d\n",d);
    return 0;
}
