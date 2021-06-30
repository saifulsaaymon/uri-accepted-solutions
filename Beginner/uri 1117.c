#include<stdio.h>

int main()
{
    double a,b,count=0,sum=0;
    while (1)
    {
        scanf("%lf",&a);
        if (count==2) break;
        if (0<=a && a<=10)
        {
            count++;
            sum += a;
        }
        else printf("nota invalida\n");
    }
    printf("media = %0.2lf\n",sum/2.00);
    return 0;
}
