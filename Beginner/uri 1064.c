#include <stdio.h>
int main()
{
    double a,sum=0,avg;
    int i,Tnumber=0;
    for(i=1;i<=6;i++)
    {
        scanf("%lf", &a);
        if(a>=0)
        {
            Tnumber++;
            sum+=a;
        }
    }
    avg=sum/Tnumber;
    printf ("%d valores positivos\n",Tnumber);
    printf("%.1lf\n", avg);
    return 0;
}
