#include<stdio.h>

int main()
{
    int a,i,max=-1,p;
    for (i=1; i<=100; i++)
    {
        scanf("%d",&a);
        if (max<a)
        {
            max=a;
            p = i;
        }
    }
    printf("%d\n%d\n",max,p);
    return 0;
}
