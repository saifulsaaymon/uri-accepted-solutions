#include<stdio.h>

int main()
{
    double a,b,c,d;
    scanf("%lf",&a);

    b = (1+sqrt(5))/2.0;
    c = (1-sqrt(5))/2.0;
    d = (pow(b,a)- pow(c,a)) / sqrt(5);

    printf("%0.1lf\n",d);
    return 0;
}
