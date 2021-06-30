#include<stdio.h>

int main()
{
    int a,b,p;
    scanf("%d%d",&a,&b);

    if (a<b) printf("O JOGO DUROU %d HORA(S)\n", b-a );
    else
    {
      p = (b+24)-a;
      printf("O JOGO DUROU %d HORA(S)\n",p);
    }
    return 0;
}
