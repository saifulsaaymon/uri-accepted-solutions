#include<stdio.h>

int main()
{
   char p[100];
   double a,b;
   scanf("%s%lf%lf",p,&a,&b);

   double e = b*0.15;
   double k = a+e;

   printf("TOTAL = R$ %0.2lf\n",k);

    return 0;
}
