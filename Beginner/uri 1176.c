#include<stdio.h>

int main()
{
    int a,i,b;
    long long int p[61];

    p[0]=0;
    p[1]=1;

    for (i=2;i<61;i++)
    {
        p[i]=p[i-1]+p[i-2];
    }
    scanf("%d",&a);
    for (i=0;i<a;i++)
    {
        scanf("%d",&b);
        printf("Fib(%d) = %lld\n",b,p[b]);
    }
    return 0;
}
