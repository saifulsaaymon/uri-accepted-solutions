#include<stdio.h>

int main()
{
    double a,p=0.0;
    scanf("%lf",&a);
    while (a--)
    {
        p+=2.0;
        p = 1.0/p;
    }
    p+=1.0;
    printf("%0.10lf\n",p);
    return 0;
}
