#include<stdio.h>
#include<string.h>

int main()
{
    int a,b;
    char ch1[10],ch2[10];
    scanf("%d",&a);

  for (b=0;b<a;b++)
    {
        scanf("%s%s",&ch1,&ch2);
        if (ch1[1]=='t')
        {
            if (ch2[1]=='e' || ch2[1]=='a') printf("Jogador 1 venceu\n");
            else printf("Aniquilacao mutua\n");
        }
        if (ch1[1]=='e')
        {
            if(ch2[1]=='a') printf("Jogador 1 venceu\n");
            else if (ch2[1]=='e') printf("Sem ganhador\n");
            else printf("Jogador 2 venceu\n");
        }
        else if (ch1[1]=='a')
        {
            if (ch2[1]=='a') printf("Ambos venceram\n");
            else printf("Jogador 2 venceu\n");
        }
    }
    return 0;
}
