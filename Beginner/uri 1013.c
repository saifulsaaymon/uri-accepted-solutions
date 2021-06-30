#include<stdio.h>

int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);

  int max = a;
  if (a<b && c<b) max = b;
  else if (b<a && c<a) max = a;
  else if (a<c && b<c) max = c;
  
  printf("%d eh o maior\n",max);

    return 0;
}
