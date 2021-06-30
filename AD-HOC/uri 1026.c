#include<stdio.h>

int main()
{
    unsigned long a,b;
    while (scanf("%lu",&a) != EOF)
    {
        scanf("%lu",&b);
        printf ("%lu\n",a^b);
    }
    return 0;
}
