#include<stdio.h>

int main()
{
    int a,b,c,d;
    double p[5] = {1.50,2.50,3.50,4.50,5.50},sum=0;

    while (scanf("%d",&a) !=EOF)
    {
        for (b=0;b<a;b++)
        {
            scanf("%d%d",&c,&d);
            c=c%1000;
            sum+=d*p[c-1];
        }
        printf("%0.2lf\n",sum);
    }
    return 0;
}
