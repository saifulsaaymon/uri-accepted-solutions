#include<stdio.h>

int main()
{
    int a,s=0;
    double k,p=0;
    while (1)
    {
        scanf("%d",&a);
        if (a<0) break;
        else if (a>0) {
           s+=a;
           p++;
        }
    }
    k = s/p;
    printf("%0.2lf\n",k);
    return 0;
}
