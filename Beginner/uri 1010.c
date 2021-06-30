#include<stdio.h>

int main()
{
   double a,b,c,d,e,f;
   scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);

   double k = b*c;
   double p = e*f;
   double l = k+p;

   printf("VALOR A PAGAR: R$ %0.2lf\n",l);

    return 0;
}
