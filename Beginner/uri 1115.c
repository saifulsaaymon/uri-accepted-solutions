#include<stdio.h>

int main()
{
    int a,b;
    while (1)
    {
        scanf("%d%d",&a,&b);
        if (a==0 || b==0) break;

        if (0<a && 0<b) printf("primeiro\n");
        if (a<0 && 0<b) printf("segundo\n");
        if (a<0 && b<0) printf("terceiro\n");
        if (0<a && b<0) printf("quarto\n");
    }
    return 0;
}
