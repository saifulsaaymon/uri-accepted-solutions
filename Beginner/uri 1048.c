#include<stdio.h>

int main()
{
    double a,b,sum=0.00;
    scanf("%lf",&a);

    if (0<a && a<=400.00)
    {
        b = (a*15) / 100;
        sum = a+b;
        printf("Novo salario: %0.2lf\n",sum);
        printf("Reajuste ganho: %0.2lf\n",b);
        printf("Em percentual: 15 %\n");

    }
    else if (400.01<=a && a<=8.00)
    {
       b =  (a*12) / 100;
       sum = a+b;
       printf("Novo salario: %0.2lf\n",sum);
       printf("Reajuste ganho: %0.2lf\n",b);
       printf("Em percentual: 12 %%\n");
    }
    else if (800.01<=a && a<=1200.00)
    {
         b =  (a*10) / 100;
       sum = a+b;
       printf("Novo salario: %0.2lf\n",sum);
       printf("Reajuste ganho: %0.2lf\n",b);
       printf("Em percentual: 10 %%\n");
    }
    else if (1200.01<=a && a<=2000.00)
    {
         b =  (a*7) / 100;
       sum = a+b;
       printf("Novo salario: %0.2lf\n",sum);
       printf("Reajuste ganho: %0.2lf\n",b);
       printf("Em percentual: 7 %%\n");
    }
    else if (2000.00<a)
    {
         b =  (a*4) / 100;
       sum = a+b;
       printf("Novo salario: %0.2lf\n",sum);
       printf("Reajuste ganho: %0.2lf\n",b);
       printf("Em percentual: 4 %%\n");
    }

    return 0;
}

