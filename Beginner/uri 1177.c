#include<stdio.h>

int main()
{
    int a,b,c,N[1000];
    scanf("%d",&a);

    for (b=0,c=0; b<1000; b++)
    {
        printf("N[%d] = %d\n",b,c);
        c++;

        if (c==a) c=0;
    }
    return 0;

}
