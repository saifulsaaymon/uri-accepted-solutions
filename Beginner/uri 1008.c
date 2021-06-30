#include<stdio.h>

int main()
{
    int a;
    double b,c;
    scanf("%d%lf%lf",&a,&b,&c);

    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %0.2lf\n",b*c);

    return 0;
}
