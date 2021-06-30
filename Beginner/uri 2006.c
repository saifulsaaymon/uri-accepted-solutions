#include<stdio.h>

int main()
{
    int a,b,c,count=0,sum=0;
    scanf("%d",&a);

    for (b=1;b<=5;b++)
    {
        scanf("%d",&c);
        if (a==c) count++;
    }
    printf("%d\n",count);
    return 0;
}
