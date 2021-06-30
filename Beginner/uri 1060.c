#include<stdio.h>

int main()
{
    int i,count=0;
    double a;

    for (i=0;i<6;i++)
    {
        scanf("%lf",&a);

        if (0<a) count++;
    }
    printf("%d valores positivos\n",count);
    return 0;
}
