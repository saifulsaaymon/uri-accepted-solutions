#include<stdio.h>

int main()
{
  double a,b,c,d;
  scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

  double k = sqrt(((c-a)*(c-a))+(d-b)*(d-b));
  printf("%0.4lf\n",k);

    return 0;
}
