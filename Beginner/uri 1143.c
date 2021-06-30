#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);

    for (b=1;b<=a;b++)
    {
       int c = b*b;
       int d = b*b*b;

       printf("%d %d %d\n",b,c,d);
    }
    return 0;

}
