#include<stdio.h>

int main()
{
    double n,a,b;
    scanf("%lf",&n);

    a = n / log(n);
    b = (1.25506)*(n/log(n));

    printf("%0.1lf %0.1lf\n",a,b);
    return 0;
}
