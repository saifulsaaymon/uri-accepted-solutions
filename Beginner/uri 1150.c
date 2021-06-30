#include<stdio.h>

int main()
{
    int a,b,sum=0,count=0;
    scanf("%d",&a);
    while (1)
    {
        scanf("%d",&b);
        if (a<b) break;
    }
    while (1)
    {
        sum+=a ;
        count++;
        if (sum>b) break;
        a++;
    }
    printf("%d\n",count);
    return 0;
}
