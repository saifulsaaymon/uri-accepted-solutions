#include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);

  printf("%d\n",a);

  int b = a/100;
  printf("%d nota(s) de R$ 100,00\n",b);

  int c = a%100/50;
  printf("%d nota(s) de R$ 50,00\n",c);

  int d = a%100%50/20;
  printf("%d nota(s) de R$ 20,00\n",d);

  int e = a%100%50%20/10;
  printf("%d nota(s) de R$ 10,00\n",e);

  int f = a%100%50%20%10/5;
  printf("%d nota(s) de R$ 5,00\n",f);

  int g = a%100%50%20%10%5/2;
  printf("%d nota(s) de R$ 2,00\n",g);

  int h = a%100%50%20%10%5%2;
  printf("%d nota(s) de R$ 1,00\n",h);

  return 0;
}
