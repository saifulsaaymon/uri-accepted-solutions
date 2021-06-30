#include<stdio.h>

int main()
{
    int a,b,sum=0;
    while (1)
    {
        scanf("%d",&a);
        if (a==0) break;
        else if (a%2==0)
        {
            for (b=a; b<=a+8; b+=2) sum+=b;
        }
        else
        {
            for (b=a+1; b<=a+9; b+=2) sum+=b;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
