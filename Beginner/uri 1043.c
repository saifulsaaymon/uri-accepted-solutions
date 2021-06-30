#include<stdio.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    if (a<(double)(b+c) && b<(double)(a+c) && c<(double)(a+b))
    {
        printf("Perimetro = %0.1lf\n",a+b+c);
    }
    else printf("Area = %0.1lf\n",(a+b)*c/2.0);

    return 0;
}
