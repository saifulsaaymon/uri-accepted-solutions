#include<stdio.h>

int main()
{
    int a,b,i,sum=0;
    while (1)
    {
        scanf("%d %d",&a,&b);
        if (a<=0 || b<=0) break;

        if (a<b)
        {
            for (i=a; i<=b; i++)
            {
                sum += i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
            sum = 0;
        }
        else if (a>b)
        {
            for (i=b; i<=a; i++)
            {
                sum += i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
            sum = 0;
        }
    }
    return 0;
}
