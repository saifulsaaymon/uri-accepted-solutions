#include<stdio.h>

int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);

    double p = (a*3.5) + (b*7.5);
    double q = p /(3.5+7.5);

    printf("MEDIA = %0.5lf\n",q);
    return 0;
}
