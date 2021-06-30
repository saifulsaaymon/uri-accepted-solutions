#include<stdio.h>

int main()
{
    int a,m=0,n=0,p=0,q=0,i;

    for (i=0; i<5; i++)
    {
        scanf("%d",&a);
        if (a%2==0 || (a*-1)==0 || a==0) m++;
        if (a%2!=0)  n++;
        if (a>0) p++;
        if (a<0) q++;
    }
    printf("%d valor(es) par(es)\n",m);
    printf("%d valor(es) impar(es)\n",n);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",q);

    return 0;
}
