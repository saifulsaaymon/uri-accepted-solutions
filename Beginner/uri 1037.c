#include<stdio.h>

int main()
{
    double a;
    scanf("%lf",&a);

    if (0<=a && a<=25.00) printf("Intervalo [0,25]\n");
    else if (25.01<=a && a<=50.00) printf("Intervalo (25,50]\n");
    else if (50.01<=a && a<=75.00) printf("Intervalo (50,75]\n");
    else if (75.01<=a && a<=100.00) printf("Intervalo (75,100]\n");
    else if (a<0 || a>100) printf("Fora de intervalo\n");

    return 0;

}
