#include<stdio.h>

int main()
{
    int a[1000],n,i,lowest,position;
    scanf("%d",&n);

    lowest = a[0];
    position = 0;

    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

        if (lowest>a[i])
        {
            lowest = a[i];
            position = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",lowest,position);
    return 0;
}
