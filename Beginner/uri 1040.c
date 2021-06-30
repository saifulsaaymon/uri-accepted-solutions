#include<stdio.h>

int main()
{
    double a,b,c,d,p,m,k;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

    k = ((a*2)+(b*3)+(c*4)+(d*1)) / (2+3+4+1);

    printf("Media: %0.1lf\n",k);

    if(k>=7.0) printf("Aluno aprovado.\n");
    else if (k<5.0) printf("Aluno reprovado.\n");
    else if (k>=5.0 && k<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&p);
        printf("Nota do exame: %.1lf\n",p);

        m =((k*1.0)+ (p*1.0))/2.00;

       if (m>=5.0) printf("Aluno aprovado.\n");
       else if (m<=4.9) printf("Aluno reprovado.\n");

       printf("Media final: %0.1lf\n",m);
    }

    return 0;
}
