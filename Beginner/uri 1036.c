#include <stdio.h>

int main()
{
    double a, b, c, R1, R2;

    scanf("%lf %lf %lf", &a, &b, &c);

    R1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
    R2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);

    if((pow(b,2)-4*a*c) < 0)
    {
        printf("Impossivel calcular\n");
    }
    else if(a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %0.5lf\n", R1);
        printf("R2 = %0.5lf\n", R2);
    }

    return 0;
}
