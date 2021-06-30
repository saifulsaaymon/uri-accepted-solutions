#include<stdio.h>

int main()
{
    int a,N[100];
    double n;
    scanf("%lf",&n);

    for (a=0;a<100;a++)
    {
        printf("N[%d] = %0.4lf\n",a,n);
        n /= 2;
    }
    return 0;
}
