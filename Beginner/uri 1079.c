#include<stdio.h>

int main()
{
    int n,i;
    double a,b,c,k;
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);

        k = ((a*2)+(b*3)+(c*5)) / (2+3+5);
        printf("%0.1lf\n",k);
         k=0;
    }


    return 0;
}
