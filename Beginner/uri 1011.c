#include<stdio.h>

int main()
{
  double a;
  scanf("%lf",&a);

  double k = (4/3.0)*3.14159*a*a*a;

  printf("VOLUME = %0.3lf\n",k);

    return 0;
}
