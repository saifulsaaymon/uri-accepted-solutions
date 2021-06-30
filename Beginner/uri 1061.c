#include<stdio.h>

int main()
{
    int sD,sH,sM,sS,eD,eH,eM,eS,D,H,M,S;

    scanf("Dia %d",&sD);
    scanf("%d : %d : %d\n",&sH,&sM,&sS);
    scanf("Dia %d",&eD);
    scanf("%d : %d : %d",&eH,&eM,&eS);

    D = eD-sD;
    H = eH-sH;
    M = eM-sM;
    S = eS-sS;

    if (S<0)
    {
        S += 60;
        M--;
    }
    if (M<0)
    {
        M += 60;
        H--;
    }
    if (H<0)
    {
        H += 24;
        D--;
    }
    printf("%d dia(s)\n",D);
    printf("%d hora(s)\n",H);
    printf("%d minuto(s)\n",M);
    printf("%d segundo(s)\n",S);

    return 0;
}
